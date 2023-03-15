#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_both_all_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_all/Z_dR_Bj0_both_all
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_both_all = new TCanvas("Z_dR_Bj0_both_all", "Z_dR_Bj0_both_all",0,0,600,600);
   Z_dR_Bj0_both_all->SetHighLightColor(2);
   Z_dR_Bj0_both_all->Range(-1.310117,-2.9261,7.029799,0.9200538);
   Z_dR_Bj0_both_all->SetFillColor(0);
   Z_dR_Bj0_both_all->SetFillStyle(4000);
   Z_dR_Bj0_both_all->SetBorderMode(0);
   Z_dR_Bj0_both_all->SetBorderSize(2);
   Z_dR_Bj0_both_all->SetLogy();
   Z_dR_Bj0_both_all->SetLeftMargin(0.15709);
   Z_dR_Bj0_both_all->SetRightMargin(0.1234783);
   Z_dR_Bj0_both_all->SetBottomMargin(0.12);
   Z_dR_Bj0_both_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_all->SetFrameBorderMode(0);
   Z_dR_Bj0_both_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_180 = new TH1F("st_stack_180","",30,0,6);
   st_stack_180->SetMinimum(12.70565);
   st_stack_180->SetMaximum(3.431139);
   st_stack_180->SetDirectory(0);
   st_stack_180->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_180->SetLineColor(ci);
   st_stack_180->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_180->GetXaxis()->SetRange(1,30);
   st_stack_180->GetXaxis()->SetLabelFont(42);
   st_stack_180->GetXaxis()->SetTitleOffset(1);
   st_stack_180->GetXaxis()->SetTitleFont(42);
   st_stack_180->GetYaxis()->SetTitle("Event/0.2");
   st_stack_180->GetYaxis()->SetLabelFont(42);
   st_stack_180->GetYaxis()->SetTitleSize(0.037);
   st_stack_180->GetYaxis()->SetTitleFont(42);
   st_stack_180->GetZaxis()->SetLabelFont(42);
   st_stack_180->GetZaxis()->SetTitleOffset(1);
   st_stack_180->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_180);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(1,0.6730869);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(2,2.587714);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(3,2.519137);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(4,1.753228);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(5,1.009216);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(6,0.6115289);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(7,0.4725482);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(8,0.3290097);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(9,0.3128012);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(10,0.2254563);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(11,0.1954884);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(12,0.1997118);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(13,0.1661386);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(14,0.1667091);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(15,0.1732679);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(16,0.1398279);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(17,0.09153012);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(18,0.05721066);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(19,0.04529179);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(20,0.02901702);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(21,0.006244684);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(22,0.005131747);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(24,0.002715707);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(25,0.001112937);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(27,0.001112937);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(29,0.001926207);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(31,0.00160277);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(1,0.03199352);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(2,0.0624338);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(3,0.06167304);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(4,0.05115693);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(5,0.03914809);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(6,0.03072589);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(7,0.02659088);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(8,0.02247164);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(9,0.02181648);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(10,0.01846904);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(11,0.01702131);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(12,0.01740793);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(13,0.01583615);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(14,0.01607711);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(15,0.01644582);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(16,0.01472382);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(17,0.01194369);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(18,0.009126033);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(19,0.008414331);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(20,0.006209982);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(21,0.003175948);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(22,0.002974562);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(24,0.001951282);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(25,0.001112937);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(27,0.001112937);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(29,0.001926207);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(31,0.00160277);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetEntries(8153);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(1,0.2527282);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(2,1.162901);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(3,1.227309);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(4,0.7517805);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(5,0.3789958);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(6,0.2022829);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(7,0.1561733);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(8,0.1320142);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(9,0.1033693);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(10,0.09586066);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(11,0.08580884);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(12,0.06957087);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(13,0.06789747);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(14,0.06353255);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(15,0.05941155);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(16,0.05327806);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(17,0.03246761);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(18,0.01684641);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(19,0.01220281);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(20,0.007510236);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(21,0.003921617);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(22,0.00308539);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(23,0.001640058);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(24,0.001907752);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(25,0.0006331255);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(26,0.0005682959);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(27,0.0003978268);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(28,0.0002110418);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(29,0.0004220837);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(1,0.007052675);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(2,0.01520395);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(3,0.01562131);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(4,0.01219314);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(5,0.008689197);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(6,0.00633778);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(7,0.005592981);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(8,0.005108644);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(9,0.00453171);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(10,0.004358885);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(11,0.004131796);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(12,0.003714756);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(13,0.003685162);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(14,0.003509179);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(15,0.003474227);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(16,0.003219633);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(17,0.002531257);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(18,0.00183499);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(19,0.001546705);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(20,0.001219539);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(21,0.0008800006);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(22,0.0007656721);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(23,0.0005551624);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(24,0.0006520907);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(25,0.0003655352);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(26,0.0003323482);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(27,0.0002910119);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(28,0.0002110418);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(29,0.0002984582);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetEntries(26049);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_1","ZHcc","F");

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
   Z_dR_Bj0_both_all->Modified();
   Z_dR_Bj0_both_all->cd();
   Z_dR_Bj0_both_all->SetSelected(Z_dR_Bj0_both_all);
}
