#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_both_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_18/Z_dR_Bj0_both_18
//=========  (Mon Dec 19 11:11:23 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_both_18 = new TCanvas("Z_dR_Bj0_both_18", "Z_dR_Bj0_both_18",0,0,600,600);
   Z_dR_Bj0_both_18->SetHighLightColor(2);
   Z_dR_Bj0_both_18->Range(-1.310117,-0.8448595,7.029799,6.195636);
   Z_dR_Bj0_both_18->SetFillColor(0);
   Z_dR_Bj0_both_18->SetFillStyle(4000);
   Z_dR_Bj0_both_18->SetBorderMode(0);
   Z_dR_Bj0_both_18->SetBorderSize(2);
   Z_dR_Bj0_both_18->SetLeftMargin(0.15709);
   Z_dR_Bj0_both_18->SetRightMargin(0.1234783);
   Z_dR_Bj0_both_18->SetBottomMargin(0.12);
   Z_dR_Bj0_both_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_18->SetFrameBorderMode(0);
   Z_dR_Bj0_both_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(5.491587);
   
   TH1F *st_stack_163 = new TH1F("st_stack_163","",30,0,6);
   st_stack_163->SetMinimum(0);
   st_stack_163->SetMaximum(5.491587);
   st_stack_163->SetDirectory(0);
   st_stack_163->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_163->SetLineColor(ci);
   st_stack_163->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_163->GetXaxis()->SetRange(1,30);
   st_stack_163->GetXaxis()->SetLabelFont(42);
   st_stack_163->GetXaxis()->SetTitleOffset(1);
   st_stack_163->GetXaxis()->SetTitleFont(42);
   st_stack_163->GetYaxis()->SetTitle("Events/0.2");
   st_stack_163->GetYaxis()->SetLabelFont(42);
   st_stack_163->GetYaxis()->SetTitleSize(0.037);
   st_stack_163->GetYaxis()->SetTitleFont(42);
   st_stack_163->GetZaxis()->SetLabelFont(42);
   st_stack_163->GetZaxis()->SetTitleOffset(1);
   st_stack_163->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_163);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,0.643588);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,2.111991);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,2.651025);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,2.307158);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,1.782065);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,1.412641);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,1.064127);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,0.7063204);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,0.5088295);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,0.4507439);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,0.3531602);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,0.3461899);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,0.2811341);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,0.2555765);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,0.2114314);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,0.2393125);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,0.1138477);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,0.06970267);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,0.07434951);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,0.03717476);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,0.01858738);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,0.009293689);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(23,0.004646845);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(24,0.004646845);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(25,0.004646845);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,0.03866945);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,0.07005031);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,0.07848216);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,0.07321546);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,0.06434663);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,0.05729015);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,0.04972341);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,0.04051025);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,0.03438351);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,0.03236153);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,0.02864507);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,0.02836098);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,0.02555765);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,0.02436826);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,0.02216404);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,0.02358016);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,0.01626396);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,0.01272591);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,0.01314326);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,0.009293689);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,0.006571631);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,0.004646845);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(23,0.003285815);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(24,0.003285815);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(25,0.003285815);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(6741);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,0.2715216);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,0.9811256);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,1.010033);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,0.7546856);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,0.4845405);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,0.2938903);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,0.1975328);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,0.1483217);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,0.1176938);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,0.1073698);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,0.08465693);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,0.08568933);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,0.07570945);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,0.06366476);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,0.06572957);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,0.06572957);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,0.02959551);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,0.0244335);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,0.01307709);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,0.01032402);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,0.004817874);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,0.005850276);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(23,0.001720669);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,0.0006882677);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(25,0.0006882677);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,0.001032402);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(27,0.0003441339);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(30,0.0006882677);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(31,0.0003441339);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,0.009666425);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,0.01837494);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,0.01864367);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,0.01611561);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,0.01291305);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,0.01005672);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,0.008244861);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,0.007144405);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,0.006364151);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,0.006078616);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,0.005397529);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,0.005430341);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,0.00510433);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,0.004680727);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,0.004756025);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,0.004756025);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,0.003191366);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,0.002899723);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,0.002121384);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,0.001884899);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,0.001287631);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,0.0014189);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(23,0.0007695067);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,0.0004866788);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(25,0.0004866788);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,0.0005960573);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(27,0.0003441339);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(30,0.0004866788);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(31,0.0003441339);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(14243);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_both_18->Modified();
   Z_dR_Bj0_both_18->cd();
   Z_dR_Bj0_both_18->SetSelected(Z_dR_Bj0_both_18);
}
