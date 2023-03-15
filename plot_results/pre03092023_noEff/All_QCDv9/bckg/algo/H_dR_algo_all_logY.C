#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_all_logY()
{
//=========Macro generated from canvas: H_dR_algo_all/H_dR_algo_all
//=========  (Thu Feb 16 10:37:39 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_all = new TCanvas("H_dR_algo_all", "H_dR_algo_all",0,0,600,600);
   H_dR_algo_all->SetHighLightColor(2);
   H_dR_algo_all->Range(-1.353788,-0.7923465,7.264125,8.884695);
   H_dR_algo_all->SetFillColor(0);
   H_dR_algo_all->SetFillStyle(4000);
   H_dR_algo_all->SetBorderMode(0);
   H_dR_algo_all->SetBorderSize(2);
   H_dR_algo_all->SetLogy();
   H_dR_algo_all->SetLeftMargin(0.15709);
   H_dR_algo_all->SetRightMargin(0.1234783);
   H_dR_algo_all->SetBottomMargin(0.12);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3.574839e+07);
   
   TH1F *st_stack_88 = new TH1F("st_stack_88","",30,0,6);
   st_stack_88->SetMinimum(2.338291);
   st_stack_88->SetMaximum(8.260206e+07);
   st_stack_88->SetDirectory(0);
   st_stack_88->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_88->SetLineColor(ci);
   st_stack_88->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_88->GetXaxis()->SetRange(1,31);
   st_stack_88->GetXaxis()->SetLabelFont(42);
   st_stack_88->GetXaxis()->SetTitleOffset(1);
   st_stack_88->GetXaxis()->SetTitleFont(42);
   st_stack_88->GetYaxis()->SetTitle("Events/0.2");
   st_stack_88->GetYaxis()->SetLabelFont(42);
   st_stack_88->GetYaxis()->SetTitleSize(0.037);
   st_stack_88->GetYaxis()->SetTitleFont(42);
   st_stack_88->GetZaxis()->SetLabelFont(42);
   st_stack_88->GetZaxis()->SetTitleOffset(1);
   st_stack_88->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_88);
   
   
   TH1D *VbbHcc_algo_H_dR_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(3,205561.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(4,233187.4);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(5,168477.3);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(6,183384.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(7,184873.9);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(8,181791.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(9,274499.6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(10,263751.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(11,247918.1);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(12,277733.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(13,239623);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(14,341703.5);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(15,260148.9);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(16,253095);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(17,138288.9);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(18,121118.3);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(19,60861.45);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(20,32894.66);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(21,17238.67);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(22,10535.27);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(23,5906.047);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(24,1547.493);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(25,278.1185);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(26,421.8865);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(27,95.4835);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(28,13.29903);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(3,11826.25);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(4,13914.5);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(5,11540.59);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(6,11836.45);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(7,12686.62);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(8,11787.44);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(9,41667.82);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(10,40717.08);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(11,23587.61);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(12,32712.87);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(13,13505.2);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(14,52207.81);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(15,13414.85);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(16,25756.09);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(17,9264.633);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(18,20374.16);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(19,6581.598);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(20,4580.697);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(21,2986.847);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(22,2832.458);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(23,2170.362);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(24,580.8587);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(25,77.93757);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(26,296.468);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(27,42.76393);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(28,7.90083);
   VbbHcc_algo_H_dR_all_stack_1->SetEntries(70650);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(2,2.291877);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(3,4712.982);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(4,9297.726);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(5,11427.1);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(6,12929.71);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(7,13497.5);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(8,13637.02);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(9,13995.91);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(10,14506.28);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(11,15243.42);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(12,15978.79);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(13,16243.69);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(14,15780.35);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(15,14961.68);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(16,13600.02);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(17,8175.14);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(18,5002.208);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(19,3042.955);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(20,1778.889);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(21,997.8184);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(22,509.6588);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(23,265.9307);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(24,120.3057);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(25,44.3452);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(26,13.4286);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(27,4.345208);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(28,0.6310917);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(29,0.05384579);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(2,0.4214515);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(3,19.57125);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(4,27.03692);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(5,29.83088);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(6,31.96565);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(7,32.61293);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(8,33.15468);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(9,33.48341);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(10,34.4536);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(11,35.02754);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(12,35.80048);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(13,35.85501);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(14,35.6967);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(15,34.29723);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(16,32.45291);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(17,25.42982);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(18,19.97244);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(19,16.05467);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(20,11.57466);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(21,8.949336);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(22,6.047203);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(23,4.366079);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(24,3.083096);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(25,1.769646);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(26,0.9628741);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(27,0.5505643);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(28,0.1954418);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(29,0.05384579);
   VbbHcc_algo_H_dR_all_stack_2->SetEntries(2980897);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   H_dR_algo_all->Modified();
   H_dR_algo_all->cd();
   H_dR_algo_all->SetSelected(H_dR_algo_all);
}
