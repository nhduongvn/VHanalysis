#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_algo_all_logY()
{
//=========Macro generated from canvas: Z_pt_algo_all/Z_pt_algo_all
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_algo_all = new TCanvas("Z_pt_algo_all", "Z_pt_algo_all",0,0,600,600);
   Z_pt_algo_all->SetHighLightColor(2);
   Z_pt_algo_all->Range(37.97653,-4.359367,1705.96,-0.5132127);
   Z_pt_algo_all->SetFillColor(0);
   Z_pt_algo_all->SetFillStyle(4000);
   Z_pt_algo_all->SetBorderMode(0);
   Z_pt_algo_all->SetBorderSize(2);
   Z_pt_algo_all->SetLogy();
   Z_pt_algo_all->SetLeftMargin(0.15709);
   Z_pt_algo_all->SetRightMargin(0.1234783);
   Z_pt_algo_all->SetBottomMargin(0.12);
   Z_pt_algo_all->SetFrameFillStyle(1000);
   Z_pt_algo_all->SetFrameBorderMode(0);
   Z_pt_algo_all->SetFrameFillStyle(1000);
   Z_pt_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_76 = new TH1F("st_stack_76","",40,0,2000);
   st_stack_76->SetMinimum(70.26112);
   st_stack_76->SetMaximum(0.1265237);
   st_stack_76->SetDirectory(0);
   st_stack_76->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_76->SetLineColor(ci);
   st_stack_76->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_76->GetXaxis()->SetRange(7,30);
   st_stack_76->GetXaxis()->SetLabelFont(42);
   st_stack_76->GetXaxis()->SetTitleOffset(1);
   st_stack_76->GetXaxis()->SetTitleFont(42);
   st_stack_76->GetYaxis()->SetTitle("Event/50.0");
   st_stack_76->GetYaxis()->SetLabelFont(42);
   st_stack_76->GetYaxis()->SetTitleSize(0.037);
   st_stack_76->GetYaxis()->SetTitleFont(42);
   st_stack_76->GetZaxis()->SetLabelFont(42);
   st_stack_76->GetZaxis()->SetTitleOffset(1);
   st_stack_76->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_76);
   
   
   TH1D *VbbHcc_algo_Z_pt_all_stack_1 = new TH1D("VbbHcc_algo_Z_pt_all_stack_1","",40,0,2000);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(1,0.08487294);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(2,0.4294656);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(3,1.06808);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(4,0.7684001);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(5,0.4958565);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(6,0.2955685);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(7,0.1557885);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(8,0.107676);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(9,0.04869018);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(10,0.01318308);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(11,0.01489518);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(12,0.00468088);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(13,0.005646675);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(14,0.001368609);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(17,0.007145197);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(1,0.01231448);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(2,0.0280257);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(3,0.04517503);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(4,0.04685607);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(5,0.03076045);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(6,0.02406659);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(7,0.01704344);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(8,0.01428372);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(9,0.009784986);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(10,0.005126525);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(11,0.005365521);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(12,0.002739072);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(13,0.003339205);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(14,0.001368609);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(17,0.005288483);
   VbbHcc_algo_Z_pt_all_stack_1->SetEntries(2165);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_pt_all_stack_2 = new TH1D("VbbHcc_algo_Z_pt_all_stack_2","",40,0,2000);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(1,0.02155677);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(2,0.1153534);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(3,0.4260917);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(4,0.3352013);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(5,0.1790491);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(6,0.08659222);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(7,0.03680984);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(8,0.01817894);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(9,0.006162932);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(10,0.001798463);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(11,0.0006330045);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(12,0.0006514536);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(1,0.002275401);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(2,0.005215818);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(3,0.01036998);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(4,0.00922037);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(5,0.006520624);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(6,0.00493996);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(7,0.002962659);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(8,0.002135819);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(9,0.001210597);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(10,0.0006875298);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(11,0.0003673764);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(12,0.0003835525);
   VbbHcc_algo_Z_pt_all_stack_2->SetEntries(5547);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_all_stack_1","ZHcc","F");

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
   Z_pt_algo_all->Modified();
   Z_pt_algo_all->cd();
   Z_pt_algo_all->SetSelected(Z_pt_algo_all);
}
