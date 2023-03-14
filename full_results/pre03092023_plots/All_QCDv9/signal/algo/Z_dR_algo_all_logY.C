#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_all_logY()
{
//=========Macro generated from canvas: Z_dR_algo_all/Z_dR_algo_all
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_all = new TCanvas("Z_dR_algo_all", "Z_dR_algo_all",0,0,600,600);
   Z_dR_algo_all->SetHighLightColor(2);
   Z_dR_algo_all->Range(-1.310117,-0.154309,7.029799,1.131599);
   Z_dR_algo_all->SetFillColor(0);
   Z_dR_algo_all->SetFillStyle(4000);
   Z_dR_algo_all->SetBorderMode(0);
   Z_dR_algo_all->SetBorderSize(2);
   Z_dR_algo_all->SetLogy();
   Z_dR_algo_all->SetLeftMargin(0.15709);
   Z_dR_algo_all->SetRightMargin(0.1234783);
   Z_dR_algo_all->SetBottomMargin(0.12);
   Z_dR_algo_all->SetFrameFillStyle(1000);
   Z_dR_algo_all->SetFrameBorderMode(0);
   Z_dR_algo_all->SetFrameFillStyle(1000);
   Z_dR_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_84 = new TH1F("st_stack_84","",30,0,6);
   st_stack_84->SetMinimum(-2.493801e+09);
   st_stack_84->SetMaximum(-0.9590449);
   st_stack_84->SetDirectory(0);
   st_stack_84->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_84->SetLineColor(ci);
   st_stack_84->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_84->GetXaxis()->SetRange(1,30);
   st_stack_84->GetXaxis()->SetLabelFont(42);
   st_stack_84->GetXaxis()->SetTitleOffset(1);
   st_stack_84->GetXaxis()->SetTitleFont(42);
   st_stack_84->GetYaxis()->SetTitle("Event/0.2");
   st_stack_84->GetYaxis()->SetLabelFont(42);
   st_stack_84->GetYaxis()->SetTitleSize(0.037);
   st_stack_84->GetYaxis()->SetTitleFont(42);
   st_stack_84->GetZaxis()->SetLabelFont(42);
   st_stack_84->GetZaxis()->SetTitleOffset(1);
   st_stack_84->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_84);
   
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(3,0.4603078);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(4,0.6679103);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(5,0.677815);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(6,0.5885257);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(7,0.4015768);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(8,0.2429861);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(9,0.154007);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(10,0.07191233);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(11,0.04891612);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(12,0.0482883);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(13,0.04172978);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(14,0.02662177);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(15,0.02760229);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(16,0.01948845);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(17,0.009178389);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(18,0.007376126);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(19,0.003229206);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(20,0.003846189);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(3,0.02969677);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(4,0.03584605);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(5,0.03521821);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(6,0.04395038);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(7,0.02802583);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(8,0.02140487);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(9,0.01651275);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(10,0.01121815);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(11,0.009075211);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(12,0.009170769);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(13,0.008491199);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(14,0.006806289);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(15,0.007010417);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(16,0.005850364);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(17,0.004334693);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(18,0.003443308);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(19,0.002298777);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(20,0.002731196);
   VbbHcc_algo_Z_dR_all_stack_1->SetEntries(2165);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(2,0.0002774743);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(3,0.09237324);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(4,0.2191628);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(5,0.2774309);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(6,0.2487394);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(7,0.1606835);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(8,0.07399851);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(9,0.0360243);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(10,0.02085851);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(11,0.02011136);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(12,0.01328019);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(13,0.01378167);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(14,0.01693776);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(15,0.01144791);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(16,0.01207035);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(17,0.005286146);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(18,0.002508429);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(19,0.001897991);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(20,0.0008977576);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(22,0.0003108763);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(2,0.0002774743);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(3,0.005054922);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(4,0.007493253);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(5,0.008323356);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(6,0.007969871);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(7,0.006189545);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(8,0.004215389);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(9,0.002894185);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(10,0.002214687);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(11,0.002176244);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(12,0.001759791);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(13,0.001854024);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(14,0.001968356);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(15,0.001673688);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(16,0.001691887);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(17,0.001166796);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(18,0.0007158312);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(19,0.0007247988);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(20,0.0004177136);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(22,0.0003108763);
   VbbHcc_algo_Z_dR_all_stack_2->SetEntries(5547);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_all->Modified();
   Z_dR_algo_all->cd();
   Z_dR_algo_all->SetSelected(Z_dR_algo_all);
}
