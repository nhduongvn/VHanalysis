#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_DHZfirst_16()
{
//=========Macro generated from canvas: Sphericity_DHZfirst_16/Sphericity_DHZfirst_16
//=========  (Wed Feb 14 12:33:03 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_DHZfirst_16 = new TCanvas("Sphericity_DHZfirst_16", "Sphericity_DHZfirst_16",0,0,600,600);
   Sphericity_DHZfirst_16->SetHighLightColor(2);
   Sphericity_DHZfirst_16->Range(0,0,1,1);
   Sphericity_DHZfirst_16->SetFillColor(0);
   Sphericity_DHZfirst_16->SetFillStyle(4000);
   Sphericity_DHZfirst_16->SetBorderMode(0);
   Sphericity_DHZfirst_16->SetBorderSize(2);
   Sphericity_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_DHZfirst_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-312.7474,1.052419,312444.6);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(281168.9);
   
   TH1F *st_stack_115 = new TH1F("st_stack_115","",25,0,1);
   st_stack_115->SetMinimum(0.01);
   st_stack_115->SetMaximum(281168.9);
   st_stack_115->SetDirectory(nullptr);
   st_stack_115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_115->SetLineColor(ci);
   st_stack_115->SetLineWidth(0);
   st_stack_115->GetXaxis()->SetRange(1,25);
   st_stack_115->GetXaxis()->SetLabelFont(42);
   st_stack_115->GetXaxis()->SetTitleOffset(1);
   st_stack_115->GetXaxis()->SetTitleFont(42);
   st_stack_115->GetYaxis()->SetTitle("Events/0.04");
   st_stack_115->GetYaxis()->SetLabelFont(42);
   st_stack_115->GetYaxis()->SetLabelSize(0.05);
   st_stack_115->GetYaxis()->SetTitleSize(0.057);
   st_stack_115->GetYaxis()->SetTitleOffset(1.2);
   st_stack_115->GetYaxis()->SetTitleFont(42);
   st_stack_115->GetZaxis()->SetLabelFont(42);
   st_stack_115->GetZaxis()->SetTitleOffset(1);
   st_stack_115->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_115);
   
   
   TH1D *VH_DHZfirst_Sphericity_stack_1 = new TH1D("VH_DHZfirst_Sphericity_stack_1","",25,0,1);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(1,84048.94);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(2,81999.79);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(3,44174.71);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(4,19372.58);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(5,10919.23);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(6,4512.81);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(7,2500.052);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(8,279.5082);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(9,209.6091);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(10,327.7811);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(11,26.46762);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(12,25.70208);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(13,21.44253);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(14,22.76746);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(15,0.171979);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(17,1.950933);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(18,21.69202);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(1,4700.662);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(2,4216.857);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(3,3450.946);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(4,1878.726);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(5,1581.96);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(6,795.8197);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(7,987.6059);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(8,152.8569);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(9,191.7956);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(10,309.436);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(11,18.3206);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(12,22.19135);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(13,16.28559);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(14,20.94272);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(15,0.171979);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(17,1.950933);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(18,21.69202);
   VH_DHZfirst_Sphericity_stack_1->SetEntries(13092);

   ci = TColor::GetColor("#ff6600");
   VH_DHZfirst_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_1->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_1,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_2 = new TH1D("VH_DHZfirst_Sphericity_stack_2","",25,0,1);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(1,635.0412);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(2,624.279);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(3,372.7248);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(4,196.3579);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(5,102.1922);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(6,50.09921);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(7,19.99289);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(8,7.932613);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(9,2.391813);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(10,1.371725);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(11,0.9348365);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(12,0.5355555);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(13,1.143833);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(14,0.4227224);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(15,0.1634755);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(16,0.1639413);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(17,0.1235396);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(18,0.04092839);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(19,0.2385951);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(1,8.633824);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(2,8.530418);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(3,6.598797);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(4,4.997508);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(5,3.645615);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(6,2.679009);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(7,1.684015);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(8,0.9907779);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(9,0.4644576);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(10,0.2673965);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(11,0.3841361);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(12,0.1400559);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(13,0.4527135);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(14,0.2687336);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(15,0.06846057);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(16,0.06960796);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(17,0.05703095);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(18,0.03220724);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(19,0.2314706);
   VH_DHZfirst_Sphericity_stack_2->SetEntries(36916);

   ci = TColor::GetColor("#660066");
   VH_DHZfirst_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_2->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_2,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_3 = new TH1D("VH_DHZfirst_Sphericity_stack_3","",25,0,1);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(1,6108.776);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(2,6589.333);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(3,3656.3);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(4,1954.477);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(5,1024.063);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(6,501.8976);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(7,231.1087);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(8,108.8605);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(9,57.85648);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(10,29.74436);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(11,16.34837);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(12,11.79378);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(13,8.370687);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(14,4.455626);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(15,2.318885);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(16,2.096272);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(17,1.7275);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(18,1.041865);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(19,0.4894374);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(20,0.1951181);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(21,0.08016771);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(1,18.10843);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(2,18.74715);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(3,13.99023);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(4,10.25778);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(5,7.44928);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(6,5.18976);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(7,3.499188);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(8,2.379268);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(9,1.72128);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(10,1.210758);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(11,0.8889229);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(12,0.7520578);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(13,0.6358389);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(14,0.4529256);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(15,0.3272872);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(16,0.3010928);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(17,0.2790205);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(18,0.2153754);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(19,0.1463441);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(20,0.1000803);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(21,0.05680622);
   VH_DHZfirst_Sphericity_stack_3->SetEntries(404285);

   ci = TColor::GetColor("#cc00cc");
   VH_DHZfirst_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_3->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_3,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_4 = new TH1D("VH_DHZfirst_Sphericity_stack_4","",25,0,1);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(1,536.853);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(2,483.3807);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(3,277.6204);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(4,169.2947);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(5,104.5246);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(6,48.60502);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(7,11.79611);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(8,1.836416);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(9,0.3376575);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(10,0.1184324);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(12,0.5196902);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(13,0.09858954);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(1,16.11188);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(2,16.49759);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(3,11.29463);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(4,8.975454);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(5,7.461246);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(6,4.718594);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(7,2.466273);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(8,0.5344963);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(9,0.262238);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(10,0.08411548);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(12,0.3572597);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(13,0.07069384);
   VH_DHZfirst_Sphericity_stack_4->SetEntries(11990);

   ci = TColor::GetColor("#00cccc");
   VH_DHZfirst_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_4->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_4,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_5 = new TH1D("VH_DHZfirst_Sphericity_stack_5","",25,0,1);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(1,326.2348);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(2,287.7159);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(3,172.7871);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(4,85.10526);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(5,55.75024);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(6,25.64921);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(7,6.814795);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(8,0.4564212);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(9,1.226632);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(10,1.476517);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(11,4.682426);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(12,0.02266769);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(13,0.2775462);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(15,0.03599154);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(16,0.02900008);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(17,0.04276445);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(18,0.0002245513);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(1,21.35354);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(2,20.86643);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(3,17.31928);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(4,9.148159);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(5,9.509275);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(6,7.812955);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(7,1.843596);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(8,0.2296057);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(9,0.8445487);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(10,1.0703);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(11,4.645109);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(12,0.02266769);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(13,0.2773033);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(15,0.03599154);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(16,0.02900008);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(17,0.04276445);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(18,0.0002245513);
   VH_DHZfirst_Sphericity_stack_5->SetEntries(8227);

   ci = TColor::GetColor("#ff99cc");
   VH_DHZfirst_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_5->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_5,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_6 = new TH1D("VH_DHZfirst_Sphericity_stack_6","",25,0,1);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(1,3.480588);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(2,2.248943);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(3,0.7611498);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(4,0.9918771);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(5,0.6116564);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(6,0.2740819);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(8,0.1538023);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(1,0.6333666);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(2,0.5092159);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(3,0.2928233);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(4,0.344817);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(5,0.2527574);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(6,0.1952395);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(8,0.1289642);
   VH_DHZfirst_Sphericity_stack_6->SetEntries(78);

   ci = TColor::GetColor("#9933ff");
   VH_DHZfirst_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_6->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_6,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_7 = new TH1D("VH_DHZfirst_Sphericity_stack_7","",25,0,1);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(1,12.14845);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(2,9.832581);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(3,5.05575);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(4,2.556893);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(5,1.243025);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(6,0.477552);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(7,0.3064393);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(8,0.08675966);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(9,0.09033457);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(13,0.076327);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(1,1.074137);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(2,0.9645293);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(3,0.6814841);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(4,0.4836801);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(5,0.3499172);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(6,0.2140105);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(7,0.1771958);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(8,0.08675966);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(9,0.09033457);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(13,0.076327);
   VH_DHZfirst_Sphericity_stack_7->SetEntries(350);

   ci = TColor::GetColor("#3399ff");
   VH_DHZfirst_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_7->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_7,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_8 = new TH1D("VH_DHZfirst_Sphericity_stack_8","",25,0,1);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(1,8.27763);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(2,6.932179);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(3,4.881272);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(4,1.698786);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(5,1.224474);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(1,1.319652);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(2,1.243867);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(3,1.035169);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(4,0.5987462);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(5,0.5505172);
   VH_DHZfirst_Sphericity_stack_8->SetEntries(110);

   ci = TColor::GetColor("#33ff99");
   VH_DHZfirst_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_8->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_8,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_9 = new TH1D("VH_DHZfirst_Sphericity_stack_9","",25,0,1);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(1,3.261018);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(2,3.183759);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(3,1.857972);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(4,1.316351);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(5,0.8461648);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(6,0.3724969);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(7,0.1305281);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(8,0.03075282);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(9,0.00456867);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(10,0.003789444);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(11,0.001125144);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(13,0.001917888);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(1,0.06316136);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(2,0.06192353);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(3,0.04747483);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(4,0.04004286);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(5,0.03222837);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(6,0.02157681);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(7,0.01284885);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(8,0.006090716);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(9,0.002300645);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(10,0.001954133);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(11,0.001125144);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(13,0.001356726);
   VH_DHZfirst_Sphericity_stack_9->SetEntries(9404);

   ci = TColor::GetColor("#cccc00");
   VH_DHZfirst_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_9->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_9,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_10 = new TH1D("VH_DHZfirst_Sphericity_stack_10","",25,0,1);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(1,1.426673);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(2,1.429153);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(3,0.8093857);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(4,0.4998665);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(5,0.2974147);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(6,0.140219);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(7,0.04291749);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(8,0.01813926);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(9,0.005773384);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(10,0.002317671);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(11,0.0009323161);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(12,0.0008915953);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(13,0.0003953291);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(14,0.0004011046);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(15,0.0003162757);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(1,0.02108218);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(2,0.02093999);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(3,0.01571602);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(4,0.0123806);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(5,0.009569394);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(6,0.006639161);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(7,0.003621909);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(8,0.002371823);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(9,0.00130838);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(10,0.000796827);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(11,0.0005393063);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(12,0.000463664);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(13,0.000317364);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(14,0.0004011046);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(15,0.0003162757);
   VH_DHZfirst_Sphericity_stack_10->SetEntries(15848);

   ci = TColor::GetColor("#0000cc");
   VH_DHZfirst_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_10->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_10,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_11 = new TH1D("VH_DHZfirst_Sphericity_stack_11","",25,0,1);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(1,0.1051545);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(2,0.07319467);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(3,0.06294384);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(4,0.03990658);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(5,0.02048198);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(6,0.01882713);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(8,0.001461375);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(1,0.01465603);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(2,0.01203404);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(3,0.01093266);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(4,0.009019967);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(5,0.006259533);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(6,0.006298138);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(8,0.001461375);
   VH_DHZfirst_Sphericity_stack_11->SetEntries(167);

   ci = TColor::GetColor("#cc0000");
   VH_DHZfirst_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_11->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_11,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_12 = new TH1D("VH_DHZfirst_Sphericity_stack_12","",25,0,1);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(1,0.03774007);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(2,0.03851043);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(3,0.01972609);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(4,0.01437937);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(5,0.005618595);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(6,0.004181967);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(7,0.001105314);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(8,0.0002978436);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(9,0.0002772462);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(1,0.003247179);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(2,0.003263702);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(3,0.00236272);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(4,0.002004246);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(5,0.001251052);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(6,0.001085369);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(7,0.0005540038);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(8,0.0002978436);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(9,0.0002772462);
   VH_DHZfirst_Sphericity_stack_12->SetEntries(452);

   ci = TColor::GetColor("#00cc00");
   VH_DHZfirst_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_12->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_DHZfirst_Sphericity__229 = new TH1D("VH_DHZfirst_Sphericity__229","",25,0,1);
   VH_DHZfirst_Sphericity__229->SetBinContent(1,126526);
   VH_DHZfirst_Sphericity__229->SetBinContent(2,116566);
   VH_DHZfirst_Sphericity__229->SetBinContent(3,63324);
   VH_DHZfirst_Sphericity__229->SetBinContent(4,33868);
   VH_DHZfirst_Sphericity__229->SetBinContent(5,16917);
   VH_DHZfirst_Sphericity__229->SetBinContent(6,7304);
   VH_DHZfirst_Sphericity__229->SetBinContent(7,2578);
   VH_DHZfirst_Sphericity__229->SetBinContent(8,894);
   VH_DHZfirst_Sphericity__229->SetBinContent(9,393);
   VH_DHZfirst_Sphericity__229->SetBinContent(10,206);
   VH_DHZfirst_Sphericity__229->SetBinContent(11,108);
   VH_DHZfirst_Sphericity__229->SetBinContent(12,64);
   VH_DHZfirst_Sphericity__229->SetBinContent(13,50);
   VH_DHZfirst_Sphericity__229->SetBinContent(14,25);
   VH_DHZfirst_Sphericity__229->SetBinContent(15,22);
   VH_DHZfirst_Sphericity__229->SetBinContent(16,19);
   VH_DHZfirst_Sphericity__229->SetBinContent(17,10);
   VH_DHZfirst_Sphericity__229->SetBinContent(18,4);
   VH_DHZfirst_Sphericity__229->SetBinContent(19,3);
   VH_DHZfirst_Sphericity__229->SetBinContent(20,2);
   VH_DHZfirst_Sphericity__229->SetBinContent(22,1);
   VH_DHZfirst_Sphericity__229->SetEntries(368908);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__229->SetLineColor(ci);
   VH_DHZfirst_Sphericity__229->SetLineWidth(2);
   VH_DHZfirst_Sphericity__229->SetMarkerStyle(20);
   VH_DHZfirst_Sphericity__229->SetMarkerSize(1.2);
   VH_DHZfirst_Sphericity__229->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity__229->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__229->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__229->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__229->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__229->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__229->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__229->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__229->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__229->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_Sphericity_fx1229[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fy1229[25] = { 91684.58, 90008.23, 48667.59, 21784.93, 12210.01, 5140.349, 2770.246, 398.8853, 271.5226, 360.4982, 48.43531, 38.57466, 31.41182, 27.64621, 2.690647, 2.289213, 3.844737,
   22.77503, 0.7280326, 0.1951181, 0.08016771, 0, 0, 0, 0 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fex1229[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fey1229[25] = { 4700.781, 4216.991, 3451.043, 1878.805, 1582.028, 795.8935, 987.6183, 152.8798, 191.8059, 309.4404, 18.9251, 22.20742, 16.30698, 20.94934, 0.3777248, 0.310392, 1.972073,
   21.69311, 0.2738526, 0.1000803, 0.05680622, 0, 0, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VH_DHZfirst_Sphericity_fx1229,Graph_from_VH_DHZfirst_Sphericity_fy1229,Graph_from_VH_DHZfirst_Sphericity_fex1229,Graph_from_VH_DHZfirst_Sphericity_fey1229);
   gre->SetName("Graph_from_VH_DHZfirst_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_Sphericity1229 = new TH1F("Graph_Graph_from_VH_DHZfirst_Sphericity1229","",100,0,1.1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->SetMinimum(0);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->SetMaximum(106023.9);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_Sphericity1229);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Sphericity","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZZ","F");

   ci = TColor::GetColor("#33ff99");
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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","WZ","F");

   ci = TColor::GetColor("#3399ff");
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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","WW","F");

   ci = TColor::GetColor("#9933ff");
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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","Single top","F");

   ci = TColor::GetColor("#660066");
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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_DHZfirst_Sphericity","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_DHZfirst_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__230 = new TH1D("data_mc_ratio__230","",25,0,1);
   data_mc_ratio__230->SetBinContent(1,1.380014);
   data_mc_ratio__230->SetBinContent(2,1.295059);
   data_mc_ratio__230->SetBinContent(3,1.301153);
   data_mc_ratio__230->SetBinContent(4,1.554652);
   data_mc_ratio__230->SetBinContent(5,1.385502);
   data_mc_ratio__230->SetBinContent(6,1.420915);
   data_mc_ratio__230->SetBinContent(7,0.9306034);
   data_mc_ratio__230->SetBinContent(8,2.241246);
   data_mc_ratio__230->SetBinContent(9,1.447393);
   data_mc_ratio__230->SetBinContent(10,0.5714314);
   data_mc_ratio__230->SetBinContent(11,2.229778);
   data_mc_ratio__230->SetBinContent(12,1.65912);
   data_mc_ratio__230->SetBinContent(13,1.591757);
   data_mc_ratio__230->SetBinContent(14,0.9042831);
   data_mc_ratio__230->SetBinContent(15,8.176472);
   data_mc_ratio__230->SetBinContent(16,8.299794);
   data_mc_ratio__230->SetBinContent(17,2.600958);
   data_mc_ratio__230->SetBinContent(18,0.1756309);
   data_mc_ratio__230->SetBinContent(19,4.120695);
   data_mc_ratio__230->SetBinContent(20,10.2502);
   data_mc_ratio__230->SetBinError(1,0.003879659);
   data_mc_ratio__230->SetBinError(2,0.003793182);
   data_mc_ratio__230->SetBinError(3,0.00517064);
   data_mc_ratio__230->SetBinError(4,0.008447701);
   data_mc_ratio__230->SetBinError(5,0.01065235);
   data_mc_ratio__230->SetBinError(6,0.016626);
   data_mc_ratio__230->SetBinError(7,0.01832834);
   data_mc_ratio__230->SetBinError(8,0.07495848);
   data_mc_ratio__230->SetBinError(9,0.07301134);
   data_mc_ratio__230->SetBinError(10,0.03981351);
   data_mc_ratio__230->SetBinError(11,0.2145605);
   data_mc_ratio__230->SetBinError(12,0.20739);
   data_mc_ratio__230->SetBinError(13,0.2251085);
   data_mc_ratio__230->SetBinError(14,0.1808566);
   data_mc_ratio__230->SetBinError(15,1.74323);
   data_mc_ratio__230->SetBinError(16,1.904103);
   data_mc_ratio__230->SetBinError(17,0.8224952);
   data_mc_ratio__230->SetBinError(18,0.08781546);
   data_mc_ratio__230->SetBinError(19,2.379084);
   data_mc_ratio__230->SetBinError(20,7.247988);
   data_mc_ratio__230->SetMinimum(0.4);
   data_mc_ratio__230->SetMaximum(1.6);
   data_mc_ratio__230->SetEntries(27.23527);
   data_mc_ratio__230->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__230->SetLineColor(ci);
   data_mc_ratio__230->SetLineWidth(2);
   data_mc_ratio__230->SetMarkerStyle(20);
   data_mc_ratio__230->SetMarkerSize(1.2);
   data_mc_ratio__230->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__230->GetXaxis()->SetRange(1,25);
   data_mc_ratio__230->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__230->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__230->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__230->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__230->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__230->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__230->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__230->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__230->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__230->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__230->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__230->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__230->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1230[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_mc_statistical_error_fy1230[25] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1230[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_mc_statistical_error_fey1230[25] = { 0.05127123, 0.04685117, 0.0709105, 0.08624331, 0.1295681, 0.1548326, 0.3565093, 0.3832677, 0.7064087, 0.8583686, 0.3907294, 0.5756995, 0.519135, 0.7577652, 0.1403844, 0.1355889, 0.5129279,
   0.9524952, 0.3761543, 0.5129217, 0.7085923, 0, 0, 0, 0 };
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1230,Graph_from_mc_statistical_error_fy1230,Graph_from_mc_statistical_error_fex1230,Graph_from_mc_statistical_error_fey1230);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1230 = new TH1F("Graph_Graph_from_mc_statistical_error1230","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1230->SetMinimum(0.04275436);
   Graph_Graph_from_mc_statistical_error1230->SetMaximum(2.142994);
   Graph_Graph_from_mc_statistical_error1230->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1230->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1230->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1230);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_DHZfirst_16->cd();
   Sphericity_DHZfirst_16->Modified();
   Sphericity_DHZfirst_16->cd();
   Sphericity_DHZfirst_16->SetSelected(Sphericity_DHZfirst_16);
}
