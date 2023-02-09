void Z_dR_Bj0_algo_all_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_all/Z_dR_Bj0_algo_all
//=========  (Thu Feb  9 09:44:33 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_all = new TCanvas("Z_dR_Bj0_algo_all", "Z_dR_Bj0_algo_all",0,0,600,600);
   Z_dR_Bj0_algo_all->SetHighLightColor(2);
   Z_dR_Bj0_algo_all->Range(-1.310117,0.4283065,7.029799,3.024004);
   Z_dR_Bj0_algo_all->SetFillColor(0);
   Z_dR_Bj0_algo_all->SetFillStyle(4000);
   Z_dR_Bj0_algo_all->SetBorderMode(0);
   Z_dR_Bj0_algo_all->SetBorderSize(2);
   Z_dR_Bj0_algo_all->SetLogy();
   Z_dR_Bj0_algo_all->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_all->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_all->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_all->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(437.6836);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",30,0,6);
   st_stack_116->SetMinimum(5.492755);
   st_stack_116->SetMaximum(581.3454);
   st_stack_116->SetDirectory(0);
   st_stack_116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_116->SetLineColor(ci);
   st_stack_116->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_116->GetXaxis()->SetRange(1,30);
   st_stack_116->GetXaxis()->SetLabelFont(42);
   st_stack_116->GetXaxis()->SetLabelSize(0.035);
   st_stack_116->GetXaxis()->SetTitleSize(0.035);
   st_stack_116->GetXaxis()->SetTitleFont(42);
   st_stack_116->GetYaxis()->SetTitle("Events/0.2");
   st_stack_116->GetYaxis()->SetLabelFont(42);
   st_stack_116->GetYaxis()->SetLabelSize(0.035);
   st_stack_116->GetYaxis()->SetTitleSize(0.037);
   st_stack_116->GetYaxis()->SetTitleOffset(0);
   st_stack_116->GetYaxis()->SetTitleFont(42);
   st_stack_116->GetZaxis()->SetLabelFont(42);
   st_stack_116->GetZaxis()->SetLabelSize(0.035);
   st_stack_116->GetZaxis()->SetTitleSize(0.035);
   st_stack_116->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_116);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(1,0.775073);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(2,3.280747);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(3,2.972238);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(4,1.703144);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(5,0.9228298);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(6,0.4577722);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(7,0.2074617);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(8,0.1076308);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(9,0.07398022);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(10,0.02682333);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(11,0.01657881);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(12,0.01476229);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(13,0.003856013);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(14,0.006827286);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(15,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(16,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(17,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(18,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(23,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(1,0.04071919);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(2,0.08385263);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(3,0.08001854);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(4,0.06056839);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(5,0.04421428);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(6,0.03099361);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(7,0.02086605);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(8,0.01527491);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(9,0.0124442);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(10,0.007932678);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(11,0.005973961);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(12,0.005728027);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(13,0.002770611);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(14,0.003941735);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(15,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(16,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(17,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(18,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(23,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetEntries(5159);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(1,0.1646524);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(2,1.096089);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(3,0.9145569);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(4,0.3683454);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(5,0.1288276);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(6,0.05738578);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(7,0.02706795);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(8,0.0164966);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(9,0.009844919);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(10,0.008057917);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(11,0.005902374);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(12,0.002709476);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(13,0.002870075);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(14,0.002478367);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(15,0.0007148681);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(16,0.0007148681);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(18,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(19,0.0005993136);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(25,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(1,0.006819575);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(2,0.01754529);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(3,0.01604108);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(4,0.01012733);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(5,0.005964799);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(6,0.004016805);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(7,0.002757261);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(8,0.002138086);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(9,0.00165126);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(10,0.00149901);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(11,0.001288375);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(12,0.0008358961);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(13,0.0009178227);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(14,0.0008401846);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(15,0.0004195169);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(16,0.0004195169);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(18,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(19,0.0004237787);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(25,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetEntries(10458);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_1","ZHcc","F");

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
   Z_dR_Bj0_algo_all->Modified();
   Z_dR_Bj0_algo_all->cd();
   Z_dR_Bj0_algo_all->SetSelected(Z_dR_Bj0_algo_all);
}
