#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_18()
{
//=========Macro generated from canvas: Z_dR_seljet_18/Z_dR_seljet_18
//=========  (Tue Feb 14 15:57:12 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_18 = new TCanvas("Z_dR_seljet_18", "Z_dR_seljet_18",0,0,600,600);
   Z_dR_seljet_18->SetHighLightColor(2);
   Z_dR_seljet_18->Range(-1.310117,-10.83801,7.029799,79.47874);
   Z_dR_seljet_18->SetFillColor(0);
   Z_dR_seljet_18->SetFillStyle(4000);
   Z_dR_seljet_18->SetBorderMode(0);
   Z_dR_seljet_18->SetBorderSize(2);
   Z_dR_seljet_18->SetLeftMargin(0.15709);
   Z_dR_seljet_18->SetRightMargin(0.1234783);
   Z_dR_seljet_18->SetBottomMargin(0.12);
   Z_dR_seljet_18->SetFrameFillStyle(1000);
   Z_dR_seljet_18->SetFrameBorderMode(0);
   Z_dR_seljet_18->SetFrameFillStyle(1000);
   Z_dR_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(70.44706);
   
   TH1F *st_stack_275 = new TH1F("st_stack_275","",30,0,6);
   st_stack_275->SetMinimum(0);
   st_stack_275->SetMaximum(70.44706);
   st_stack_275->SetDirectory(0);
   st_stack_275->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_275->SetLineColor(ci);
   st_stack_275->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_275->GetXaxis()->SetRange(1,30);
   st_stack_275->GetXaxis()->SetLabelFont(42);
   st_stack_275->GetXaxis()->SetTitleOffset(1);
   st_stack_275->GetXaxis()->SetTitleFont(42);
   st_stack_275->GetYaxis()->SetTitle("Events/0.2");
   st_stack_275->GetYaxis()->SetLabelFont(42);
   st_stack_275->GetYaxis()->SetTitleSize(0.037);
   st_stack_275->GetYaxis()->SetTitleFont(42);
   st_stack_275->GetZaxis()->SetLabelFont(42);
   st_stack_275->GetZaxis()->SetTitleOffset(1);
   st_stack_275->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_275);
   
   
   TH1D *VbbHcc_seljet_Z_dR_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(2,0.02417095);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(3,8.604448);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(4,15.50565);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(5,16.64216);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(6,19.1566);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(7,21.55977);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(8,23.22698);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(9,25.50284);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(10,26.81683);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(11,28.27541);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(12,30.13841);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(13,32.95314);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(14,34.96744);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(15,37.1471);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(16,36.30769);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(17,16.42158);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(18,8.95713);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(19,5.414295);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(20,3.504369);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(21,2.454477);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(22,1.537086);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(23,1.041965);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(24,0.6101986);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(25,0.3319039);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(26,0.166355);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(27,0.05442719);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(28,0.01397905);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(2,0.008729164);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(3,0.1593835);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(4,0.2393007);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(5,0.2561405);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(6,0.2373423);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(7,0.2612063);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(8,0.2612374);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(9,0.2785294);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(10,0.2820622);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(11,0.316485);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(12,0.2960796);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(13,0.3185251);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(14,0.3409538);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(15,0.3313158);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(16,0.3395871);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(17,0.2169999);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(18,0.1593806);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(19,0.1228667);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(20,0.09959752);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(21,0.09123508);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(22,0.06538258);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(23,0.05339016);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(24,0.04093);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(25,0.02993845);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(26,0.02073567);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(27,0.01218209);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(28,0.006284593);
   VbbHcc_seljet_Z_dR_stack_1->SetEntries(157735);

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
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(2,0.00138907);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(3,1.938294);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(4,3.46449);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(5,4.011953);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(6,4.991712);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(7,5.577303);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(8,6.002612);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(9,6.488821);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(10,7.004386);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(11,7.523841);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(12,7.980275);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(13,8.540095);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(14,9.135984);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(15,9.817606);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(16,9.60219);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(17,5.089587);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(18,3.000447);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(19,1.898409);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(20,1.19248);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(21,0.774998);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(22,0.5123177);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(23,0.2987483);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(24,0.1846389);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(25,0.09703828);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(26,0.04564629);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(27,0.02786894);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(28,0.004377745);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(2,0.0006968291);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(3,0.02800531);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(4,0.03676262);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(5,0.0386986);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(6,0.04428148);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(7,0.04866341);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(8,0.0479332);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(9,0.05279455);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(10,0.05218995);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(11,0.05545016);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(12,0.05555063);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(13,0.05728496);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(14,0.06082746);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(15,0.06187069);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(16,0.0607694);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(17,0.04680248);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(18,0.03381816);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(19,0.0263637);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(20,0.02094608);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(21,0.01785255);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(22,0.01351509);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(23,0.0102953);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(24,0.008386363);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(25,0.006341375);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(26,0.003984756);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(27,0.003175031);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(28,0.001233291);
   VbbHcc_seljet_Z_dR_stack_2->SetEntries(308688);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_seljet_18->Modified();
   Z_dR_seljet_18->cd();
   Z_dR_seljet_18->SetSelected(Z_dR_seljet_18);
}
