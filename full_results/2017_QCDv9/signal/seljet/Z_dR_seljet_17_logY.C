#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_17_logY()
{
//=========Macro generated from canvas: Z_dR_seljet_17/Z_dR_seljet_17
//=========  (Thu Feb 16 10:37:22 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_17 = new TCanvas("Z_dR_seljet_17", "Z_dR_seljet_17",0,0,600,600);
   Z_dR_seljet_17->SetHighLightColor(2);
   Z_dR_seljet_17->Range(-1.310117,0.2650444,7.029799,3.703479);
   Z_dR_seljet_17->SetFillColor(0);
   Z_dR_seljet_17->SetFillStyle(4000);
   Z_dR_seljet_17->SetBorderMode(0);
   Z_dR_seljet_17->SetBorderSize(2);
   Z_dR_seljet_17->SetLogy();
   Z_dR_seljet_17->SetLeftMargin(0.15709);
   Z_dR_seljet_17->SetRightMargin(0.1234783);
   Z_dR_seljet_17->SetBottomMargin(0.12);
   Z_dR_seljet_17->SetFrameFillStyle(1000);
   Z_dR_seljet_17->SetFrameBorderMode(0);
   Z_dR_seljet_17->SetFrameFillStyle(1000);
   Z_dR_seljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1589.281);
   
   TH1F *st_stack_274 = new TH1F("st_stack_274","",30,0,6);
   st_stack_274->SetMinimum(4.760544);
   st_stack_274->SetMaximum(2288.947);
   st_stack_274->SetDirectory(0);
   st_stack_274->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_274->SetLineColor(ci);
   st_stack_274->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_274->GetXaxis()->SetRange(1,30);
   st_stack_274->GetXaxis()->SetLabelFont(42);
   st_stack_274->GetXaxis()->SetTitleOffset(1);
   st_stack_274->GetXaxis()->SetTitleFont(42);
   st_stack_274->GetYaxis()->SetTitle("Events/0.2");
   st_stack_274->GetYaxis()->SetLabelFont(42);
   st_stack_274->GetYaxis()->SetTitleSize(0.037);
   st_stack_274->GetYaxis()->SetTitleFont(42);
   st_stack_274->GetZaxis()->SetLabelFont(42);
   st_stack_274->GetZaxis()->SetTitleOffset(1);
   st_stack_274->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_274);
   
   
   TH1D *VbbHcc_seljet_Z_dR_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(2,0.001781134);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(3,2.334719);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(4,3.664144);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(5,4.366773);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(6,5.040301);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(7,5.955351);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(8,6.448768);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(9,6.832492);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(10,7.134045);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(11,7.739759);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(12,8.462766);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(13,9.502927);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(14,10.60986);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(15,11.71695);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(16,11.66423);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(17,5.100498);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(18,2.477756);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(19,1.502517);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(20,0.9704042);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(21,0.6437048);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(22,0.4374727);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(23,0.2586807);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(24,0.1622494);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(25,0.09145591);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(26,0.02955902);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(27,0.01040356);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(28,0.006830939);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(29,0.001714722);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(2,0.001781134);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(3,0.06618111);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(4,0.08221326);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(5,0.08986429);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(6,0.0965784);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(7,0.1052392);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(8,0.1098614);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(9,0.1128295);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(10,0.1155985);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(11,0.1200638);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(12,0.1265619);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(13,0.1337608);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(14,0.1415891);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(15,0.1488312);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(16,0.1485794);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(17,0.09793272);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(18,0.06824917);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(19,0.05227517);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(20,0.04196828);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(21,0.03423347);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(22,0.02784409);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(23,0.02131008);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(24,0.01636035);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(25,0.01266236);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(26,0.007128268);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(27,0.004419086);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(28,0.00342126);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(29,0.001714722);
   VbbHcc_seljet_Z_dR_stack_1->SetEntries(65683);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_dR_stack_2 = new TH1D("VbbHcc_seljet_Z_dR_stack_2","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(2,0.001814127);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(3,0.7563924);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(4,1.403592);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(5,1.788966);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(6,2.15818);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(7,2.310909);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(8,2.413731);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(9,2.571667);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(10,2.682137);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(11,2.983517);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(12,3.308898);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(13,3.621487);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(14,3.921771);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(15,4.175864);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(16,4.130202);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(17,2.012513);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(18,1.128655);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(19,0.6792752);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(20,0.4342971);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(21,0.2933946);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(22,0.1777272);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(23,0.1123953);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(24,0.06743802);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(25,0.0385296);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(26,0.01736902);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(27,0.008243259);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(28,0.001508061);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(29,0.0001704717);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(2,0.0006546784);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(3,0.01347569);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(4,0.01836269);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(5,0.02072606);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(6,0.02278851);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(7,0.02357043);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(8,0.02409433);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(9,0.02486946);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(10,0.02536825);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(11,0.02683906);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(12,0.02824869);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(13,0.02956338);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(14,0.03077304);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(15,0.03172294);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(16,0.03156276);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(17,0.02200541);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(18,0.01648558);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(19,0.01273813);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(20,0.01015571);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(21,0.008316624);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(22,0.006501606);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(23,0.005157587);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(24,0.003956292);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(25,0.002999276);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(26,0.001995989);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(27,0.001371499);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(28,0.00057677);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(29,0.0001704717);
   VbbHcc_seljet_Z_dR_stack_2->SetEntries(187491);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_seljet_17->Modified();
   Z_dR_seljet_17->cd();
   Z_dR_seljet_17->SetSelected(Z_dR_seljet_17);
}
