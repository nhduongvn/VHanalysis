void Aplanarity_tags_17_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Thu Aug 10 12:20:18 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(0,0,1,1);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetFillStyle(4000);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetFrameFillStyle(1000);
   Aplanarity_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.914327,1.052419,14.06258);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(6.164974e+11);
   
   TH1F *st_stack_62 = new TH1F("st_stack_62","",50,0,1);
   st_stack_62->SetMinimum(0.00126663);
   st_stack_62->SetMaximum(2.316789e+12);
   st_stack_62->SetDirectory(0);
   st_stack_62->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_62->SetLineColor(ci);
   st_stack_62->GetXaxis()->SetRange(1,50);
   st_stack_62->GetXaxis()->SetLabelFont(42);
   st_stack_62->GetXaxis()->SetLabelSize(0.035);
   st_stack_62->GetXaxis()->SetTitleSize(0.035);
   st_stack_62->GetXaxis()->SetTitleFont(42);
   st_stack_62->GetYaxis()->SetTitle("Events/0.02");
   st_stack_62->GetYaxis()->SetLabelFont(42);
   st_stack_62->GetYaxis()->SetLabelSize(0.05);
   st_stack_62->GetYaxis()->SetTitleSize(0.057);
   st_stack_62->GetYaxis()->SetTitleOffset(1.2);
   st_stack_62->GetYaxis()->SetTitleFont(42);
   st_stack_62->GetZaxis()->SetLabelFont(42);
   st_stack_62->GetZaxis()->SetLabelSize(0.035);
   st_stack_62->GetZaxis()->SetTitleSize(0.035);
   st_stack_62->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_62);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,181693.3);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,42496.83);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,4421.708);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,2443.612);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,641.9645);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,163.5954);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,65.45972);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,64.68673);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,225.6827);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,29.05215);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,33.45759);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,16287.52);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,21764.95);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,844.5812);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,713.8552);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,345.6233);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,56.72336);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,34.63156);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,38.25001);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,196.5802);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,24.26578);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,27.2344);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(9821);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,791.9027);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,112.7852);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,33.62371);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,11.50605);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,6.418408);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,2.409662);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,1.576522);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.4755868);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.136814);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.4352691);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.04228498);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.3575468);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.02530778);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.07522378);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,12.41683);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,4.680027);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,2.598093);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,1.482562);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,1.138779);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.6707055);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.581777);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.1691301);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.1265589);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.3209468);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.03111897);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.2351788);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.02530778);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.07522378);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(11223);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,16939.39);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,2472.523);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,670.6074);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,248.7287);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,115.3348);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,56.11845);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,31.48739);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,19.22005);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,11.74888);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,6.75042);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,3.939324);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,2.506677);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,2.39747);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,0.9944813);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,0.8068184);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,0.7767227);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,0.1040013);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,0.3202566);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(19,0.08867438);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(20,0.08477316);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,35.48165);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,13.49922);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,7.018551);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,4.252238);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,2.887101);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,2.02068);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,1.506878);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,1.185811);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,0.9097772);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,0.6847702);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,0.536289);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,0.4291066);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,0.4324469);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,0.2747586);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.2380863);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.2325068);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.07492405);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.1613997);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(19,0.08867438);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(20,0.08477316);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(306587);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,2288.084);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,262.7829);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,61.03365);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,18.16507);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,9.608163);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,4.625436);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,3.256347);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,1.613274);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,0.5978664);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,0.9378458);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,0.1768701);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.265414);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.3330272);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(15,0.06924107);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(16,0.109069);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,33.77482);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,13.57692);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,6.02462);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,1.935866);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,1.530772);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,0.9927903);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,0.9164441);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,0.5774843);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,0.2303321);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,0.4535111);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.1251095);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.1549342);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.1694482);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(15,0.06924107);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(16,0.109069);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(17505);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_5 = new TH1D("VbbHcc_tags_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(1,224.4214);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(2,24.91768);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(3,7.711368);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(4,2.249451);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(5,0.3365224);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(6,0.5132803);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(7,0.1058055);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(8,5.717757);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(9,0.1271904);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(11,0.09174464);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(1,12.74413);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(2,3.989685);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(3,1.980906);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(4,0.5976256);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(5,0.2030236);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(6,0.3081065);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(7,0.1058055);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(8,5.564363);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(9,0.1271904);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(11,0.09174464);
   VbbHcc_tags_Aplanarity_stack_5->SetEntries(2189);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_6 = new TH1D("VbbHcc_tags_Aplanarity_stack_6","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(1,1.274555);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(2,0.3402984);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(1,0.6495702);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(2,0.3402984);
   VbbHcc_tags_Aplanarity_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_7 = new TH1D("VbbHcc_tags_Aplanarity_stack_7","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(1,5.379913);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(2,0.7461792);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(3,0.3152355);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(5,0.2655071);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(1,1.248619);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(2,0.4381061);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(3,0.3152355);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(5,0.2655071);
   VbbHcc_tags_Aplanarity_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_8 = new TH1D("VbbHcc_tags_Aplanarity_stack_8","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(1,45.60083);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(2,2.944029);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(3,0.1983113);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(4,0.3221285);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(5,0.3152691);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(1,3.652349);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(2,0.9196014);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(3,0.1983113);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(4,0.3221285);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(5,0.3152691);
   VbbHcc_tags_Aplanarity_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,46.29023);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,3.528831);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,0.6054842);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.2188713);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.08597302);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.07517665);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.01777605);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.03122125);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.009977926);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.00376868);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.006244505);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(12,0.00591481);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(13,0.002099697);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(16,0.002081758);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.3043838);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.08340075);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.03464879);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.02039043);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.01290944);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.01232173);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.00557262);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.007840284);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.004496208);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.002665493);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.003438708);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(12,0.003537344);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(13,0.002099697);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(16,0.002081758);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(27953);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,18.8713);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,1.992918);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,0.4580364);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.1712048);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.06368304);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.03394654);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.02264495);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.01087029);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.01022685);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.00627555);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.002241959);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.001849532);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.002160997);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.0009737663);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(15,0.0004326543);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0004554951);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.0004512559);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(18,0.001462825);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.09201867);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.02988102);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.01430013);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.008707123);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.005313447);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.00388279);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.003169187);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.002181891);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.002140699);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.001683308);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.001012501);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.0009270259);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.000966558);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.0006885632);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(15,0.0004326543);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0004554951);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.0004512559);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(18,0.0008446158);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(48968);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_11 = new TH1D("VbbHcc_tags_Aplanarity_stack_11","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(1,0.1362349);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(2,0.0139349);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(3,0.001441091);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(6,0.004298681);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(1,0.01587294);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(2,0.005146052);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(3,0.001441091);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(6,0.00305499);
   VbbHcc_tags_Aplanarity_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_12 = new TH1D("VbbHcc_tags_Aplanarity_stack_12","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(1,0.05604047);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(2,0.006285649);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(3,0.00153676);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(4,0.0005574675);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(6,0.0001082815);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(12,0.0003097436);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(1,0.003681944);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(2,0.001239775);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(3,0.0006363561);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(4,0.000394743);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(6,0.0001082815);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(12,0.0003097436);
   VbbHcc_tags_Aplanarity_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Aplanarity__169 = new TH1D("VbbHcc_tags_Aplanarity__169","",50,0,1);
   VbbHcc_tags_Aplanarity__169->SetBinContent(1,53214);
   VbbHcc_tags_Aplanarity__169->SetBinContent(2,6767);
   VbbHcc_tags_Aplanarity__169->SetBinContent(3,2005);
   VbbHcc_tags_Aplanarity__169->SetBinContent(4,808);
   VbbHcc_tags_Aplanarity__169->SetBinContent(5,415);
   VbbHcc_tags_Aplanarity__169->SetBinContent(6,204);
   VbbHcc_tags_Aplanarity__169->SetBinContent(7,114);
   VbbHcc_tags_Aplanarity__169->SetBinContent(8,89);
   VbbHcc_tags_Aplanarity__169->SetBinContent(9,43);
   VbbHcc_tags_Aplanarity__169->SetBinContent(10,26);
   VbbHcc_tags_Aplanarity__169->SetBinContent(11,21);
   VbbHcc_tags_Aplanarity__169->SetBinContent(12,13);
   VbbHcc_tags_Aplanarity__169->SetBinContent(13,12);
   VbbHcc_tags_Aplanarity__169->SetBinContent(14,3);
   VbbHcc_tags_Aplanarity__169->SetBinContent(15,8);
   VbbHcc_tags_Aplanarity__169->SetBinContent(16,1);
   VbbHcc_tags_Aplanarity__169->SetEntries(63792);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity__169->SetLineColor(ci);
   VbbHcc_tags_Aplanarity__169->SetLineWidth(2);
   VbbHcc_tags_Aplanarity__169->SetMarkerStyle(20);
   VbbHcc_tags_Aplanarity__169->SetMarkerSize(1.2);
   VbbHcc_tags_Aplanarity__169->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity__169->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__169->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__169->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__169->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__169->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__169->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__169->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__169->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity__169->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__169->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__169->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__169->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__169->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__169->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fx1123[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fy1123[50] = {
   202054.7,
   45379.41,
   5196.264,
   2724.974,
   774.3928,
   227.3757,
   101.9262,
   91.75549,
   238.3136,
   37.18573,
   37.7163,
   3.137712,
   2.760066,
   1.070679,
   0.8764921,
   0.8883289,
   0.1044525,
   0.3217194,
   0.08867438,
   0.08477316,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fex1123[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fey1123[50] = {
   16287.61,
   21764.96,
   844.6382,
   713.8723,
   345.6409,
   56.77282,
   34.68148,
   38.67549,
   196.5825,
   24.2818,
   27.24014,
   0.5132831,
   0.4651546,
   0.2848708,
   0.2479508,
   0.2568268,
   0.07492541,
   0.1614019,
   0.08867438,
   0.08477316,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_Aplanarity_fx1123,Graph_from_VbbHcc_tags_Aplanarity_fy1123,Graph_from_VbbHcc_tags_Aplanarity_fex1123,Graph_from_VbbHcc_tags_Aplanarity_fey1123);
   gre->SetName("Graph_from_VbbHcc_tags_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Aplanarity1123 = new TH1F("Graph_Graph_from_VbbHcc_tags_Aplanarity1123","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->SetMinimum(240.1766);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->SetMaximum(240176.6);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Aplanarity1123);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Aplanarity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__170 = new TH1D("data_mc_ratio__170","",50,0,1);
   data_mc_ratio__170->SetBinContent(1,0.2633643);
   data_mc_ratio__170->SetBinContent(2,0.1491205);
   data_mc_ratio__170->SetBinContent(3,0.3858541);
   data_mc_ratio__170->SetBinContent(4,0.2965166);
   data_mc_ratio__170->SetBinContent(5,0.5359038);
   data_mc_ratio__170->SetBinContent(6,0.8971934);
   data_mc_ratio__170->SetBinContent(7,1.118456);
   data_mc_ratio__170->SetBinContent(8,0.9699692);
   data_mc_ratio__170->SetBinContent(9,0.1804345);
   data_mc_ratio__170->SetBinContent(10,0.699193);
   data_mc_ratio__170->SetBinContent(11,0.5567884);
   data_mc_ratio__170->SetBinContent(12,4.143146);
   data_mc_ratio__170->SetBinContent(13,4.347723);
   data_mc_ratio__170->SetBinContent(14,2.801961);
   data_mc_ratio__170->SetBinContent(15,9.127293);
   data_mc_ratio__170->SetBinContent(16,1.125709);
   data_mc_ratio__170->SetBinError(1,0.001141679);
   data_mc_ratio__170->SetBinError(2,0.001812755);
   data_mc_ratio__170->SetBinError(3,0.008617196);
   data_mc_ratio__170->SetBinError(4,0.01043142);
   data_mc_ratio__170->SetBinError(5,0.02630648);
   data_mc_ratio__170->SetBinError(6,0.0628161);
   data_mc_ratio__170->SetBinError(7,0.104753);
   data_mc_ratio__170->SetBinError(8,0.1028165);
   data_mc_ratio__170->SetBinError(9,0.02751601);
   data_mc_ratio__170->SetBinError(10,0.137123);
   data_mc_ratio__170->SetBinError(11,0.1215012);
   data_mc_ratio__170->SetBinError(12,1.149102);
   data_mc_ratio__170->SetBinError(13,1.255079);
   data_mc_ratio__170->SetBinError(14,1.617713);
   data_mc_ratio__170->SetBinError(15,3.226985);
   data_mc_ratio__170->SetBinError(16,1.125709);
   data_mc_ratio__170->SetMinimum(0.4);
   data_mc_ratio__170->SetMaximum(1.6);
   data_mc_ratio__170->SetEntries(28.84512);
   data_mc_ratio__170->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__170->SetLineColor(ci);
   data_mc_ratio__170->SetLineWidth(2);
   data_mc_ratio__170->SetMarkerStyle(20);
   data_mc_ratio__170->SetMarkerSize(1.2);
   data_mc_ratio__170->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__170->GetXaxis()->SetRange(1,50);
   data_mc_ratio__170->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__170->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__170->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__170->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__170->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__170->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__170->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__170->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__170->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__170->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__170->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__170->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__170->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__170->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__170->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__170->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__170->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1124[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_mc_statistical_error_fy1124[50] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1124[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_mc_statistical_error_fey1124[50] = {
   0.08060986,
   0.479622,
   0.1625472,
   0.261974,
   0.446338,
   0.2496872,
   0.3402607,
   0.421506,
   0.8248901,
   0.652987,
   0.722238,
   0.1635852,
   0.1685303,
   0.2660656,
   0.28289,
   0.2891122,
   0.7173156,
   0.5016854,
   1,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1124,Graph_from_mc_statistical_error_fy1124,Graph_from_mc_statistical_error_fex1124,Graph_from_mc_statistical_error_fey1124);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1124 = new TH1F("Graph_Graph_from_mc_statistical_error1124","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1124->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1124->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1124->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1124->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1124->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1124->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1124->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1124);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}
