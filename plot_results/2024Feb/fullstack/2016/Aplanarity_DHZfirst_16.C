#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_DHZfirst_16()
{
//=========Macro generated from canvas: Aplanarity_DHZfirst_16/Aplanarity_DHZfirst_16
//=========  (Wed Feb 14 12:33:03 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_DHZfirst_16 = new TCanvas("Aplanarity_DHZfirst_16", "Aplanarity_DHZfirst_16",0,0,600,600);
   Aplanarity_DHZfirst_16->SetHighLightColor(2);
   Aplanarity_DHZfirst_16->Range(0,0,1,1);
   Aplanarity_DHZfirst_16->SetFillColor(0);
   Aplanarity_DHZfirst_16->SetFillStyle(4000);
   Aplanarity_DHZfirst_16->SetBorderMode(0);
   Aplanarity_DHZfirst_16->SetBorderSize(2);
   Aplanarity_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_DHZfirst_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-778.8727,1.052419,778103.8);
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
   st->SetMaximum(700215.6);
   
   TH1F *st_stack_118 = new TH1F("st_stack_118","",50,0,1);
   st_stack_118->SetMinimum(0.01);
   st_stack_118->SetMaximum(700215.6);
   st_stack_118->SetDirectory(nullptr);
   st_stack_118->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_118->SetLineColor(ci);
   st_stack_118->SetLineWidth(0);
   st_stack_118->GetXaxis()->SetRange(1,50);
   st_stack_118->GetXaxis()->SetLabelFont(42);
   st_stack_118->GetXaxis()->SetTitleOffset(1);
   st_stack_118->GetXaxis()->SetTitleFont(42);
   st_stack_118->GetYaxis()->SetTitle("Events/0.02");
   st_stack_118->GetYaxis()->SetLabelFont(42);
   st_stack_118->GetYaxis()->SetLabelSize(0.05);
   st_stack_118->GetYaxis()->SetTitleSize(0.057);
   st_stack_118->GetYaxis()->SetTitleOffset(1.2);
   st_stack_118->GetYaxis()->SetTitleFont(42);
   st_stack_118->GetZaxis()->SetLabelFont(42);
   st_stack_118->GetZaxis()->SetTitleOffset(1);
   st_stack_118->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_118);
   
   
   TH1D *VH_DHZfirst_Aplanarity_stack_1 = new TH1D("VH_DHZfirst_Aplanarity_stack_1","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(1,212941.7);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(2,30702.46);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(3,4167.782);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(4,499.3339);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(5,89.98154);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(6,34.37986);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(9,5.971246);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(13,21.69202);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(14,1.950933);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(1,6966.689);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(2,3207.241);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(3,825.2651);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(4,285.0405);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(5,40.71436);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(6,18.01756);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(9,5.971246);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(13,21.69202);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(14,1.950933);
   VH_DHZfirst_Aplanarity_stack_1->SetEntries(13092);

   ci = TColor::GetColor("#ff6600");
   VH_DHZfirst_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_1->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_1,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_2 = new TH1D("VH_DHZfirst_Aplanarity_stack_2","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(1,1686.888);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(2,250.2958);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(3,55.30635);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(4,15.50772);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(5,4.334142);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(6,2.435524);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(7,0.6758358);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(8,0.3970106);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(9,0.1474334);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(10,0.0104707);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(11,0.0751264);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(12,0.03352842);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(13,0.04422065);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(1,14.16261);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(2,5.528293);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(3,2.580971);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(4,1.431377);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(5,0.7506403);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(6,0.6109552);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(7,0.264428);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(8,0.2148103);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(9,0.07446934);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(10,0.0104707);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(11,0.04379815);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(12,0.03352842);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(13,0.03222744);
   VH_DHZfirst_Aplanarity_stack_2->SetEntries(36916);

   ci = TColor::GetColor("#660066");
   VH_DHZfirst_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_2->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_2,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_3 = new TH1D("VH_DHZfirst_Aplanarity_stack_3","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(1,16876.12);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(2,2544.997);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(3,601.9129);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(4,175.6958);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(5,63.80557);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(6,25.4234);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(7,11.49121);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(8,6.175665);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(9,2.325213);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(10,1.46455);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(11,0.9193634);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(12,0.4022109);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(13,0.3128907);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(14,0.08460796);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(15,0.05976182);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(16,0.04268345);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(17,0.05566966);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(18,0.04306931);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(1,30.14285);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(2,11.53996);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(3,5.576887);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(4,2.992046);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(5,1.783949);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(6,1.122196);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(7,0.7435385);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(8,0.5560425);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(9,0.3398794);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(10,0.2663454);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(11,0.2167135);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(12,0.1361287);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(13,0.1226302);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(14,0.05996071);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(15,0.05976182);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(16,0.04268345);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(17,0.05566966);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(18,0.04306931);
   VH_DHZfirst_Aplanarity_stack_3->SetEntries(404285);

   ci = TColor::GetColor("#cc00cc");
   VH_DHZfirst_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_3->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_3,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_4 = new TH1D("VH_DHZfirst_Aplanarity_stack_4","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(1,1427.024);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(2,159.3768);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(3,39.83291);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(4,5.311982);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(5,3.113319);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(6,0.1445363);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(7,0.1232594);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(8,0.04021705);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(10,0.01882639);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(1,25.97939);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(2,10.41716);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(3,5.997849);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(4,1.64915);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(5,1.498529);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(6,0.08820552);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(7,0.0872726);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(8,0.04021705);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(10,0.01882639);
   VH_DHZfirst_Aplanarity_stack_4->SetEntries(11990);

   ci = TColor::GetColor("#00cccc");
   VH_DHZfirst_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_4->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_4,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_5 = new TH1D("VH_DHZfirst_Aplanarity_stack_5","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(1,834.2336);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(2,97.16187);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(3,28.90248);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(4,2.4378);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(5,0.9268082);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(6,4.64498);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(1,34.37304);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(2,12.18261);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(3,10.01923);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(4,1.129215);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(5,0.5547115);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(6,4.644958);
   VH_DHZfirst_Aplanarity_stack_5->SetEntries(8227);

   ci = TColor::GetColor("#ff99cc");
   VH_DHZfirst_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_5->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_5,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_6 = new TH1D("VH_DHZfirst_Aplanarity_stack_6","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(1,7.614926);
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(2,0.6984388);
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(3,0.2087329);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(1,0.9418739);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(2,0.2718368);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(3,0.1507089);
   VH_DHZfirst_Aplanarity_stack_6->SetEntries(78);

   ci = TColor::GetColor("#9933ff");
   VH_DHZfirst_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_6->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_6,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_7 = new TH1D("VH_DHZfirst_Aplanarity_stack_7","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(1,29.40255);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(2,1.931284);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(3,0.2674445);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(4,0.1965115);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(6,0.076327);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(1,1.667755);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(2,0.4158749);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(3,0.1544338);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(4,0.1399025);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(6,0.076327);
   VH_DHZfirst_Aplanarity_stack_7->SetEntries(350);

   ci = TColor::GetColor("#3399ff");
   VH_DHZfirst_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_7->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_7,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_8 = new TH1D("VH_DHZfirst_Aplanarity_stack_8","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(1,21.17931);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(2,1.649139);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(3,0.1858961);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(1,2.154347);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(2,0.5882684);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(3,0.1858961);
   VH_DHZfirst_Aplanarity_stack_8->SetEntries(110);

   ci = TColor::GetColor("#33ff99");
   VH_DHZfirst_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_8->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_8,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_9 = new TH1D("VH_DHZfirst_Aplanarity_stack_9","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(1,10.0725);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(2,0.7799988);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(3,0.1286295);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(4,0.02053356);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(5,0.007250103);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(8,0.0005438122);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(10,0.000986875);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(1,0.1109152);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(2,0.03027468);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(3,0.01216577);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(4,0.004772798);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(5,0.003001083);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(8,0.0005438122);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(10,0.000986875);
   VH_DHZfirst_Aplanarity_stack_9->SetEntries(9404);

   ci = TColor::GetColor("#cccc00");
   VH_DHZfirst_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_9->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_9,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_10 = new TH1D("VH_DHZfirst_Aplanarity_stack_10","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(1,4.183236);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(2,0.3967219);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(3,0.07528458);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(4,0.01376586);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(5,0.004395135);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(6,0.0006832322);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(7,0.0004843288);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(8,0.0002248249);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(1,0.03596347);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(2,0.01092846);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(3,0.004703601);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(4,0.002051278);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(5,0.001155742);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(6,0.0004221831);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(7,0.0003545881);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(8,0.0002248249);
   VH_DHZfirst_Aplanarity_stack_10->SetEntries(15848);

   ci = TColor::GetColor("#0000cc");
   VH_DHZfirst_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_10->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_10,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_11 = new TH1D("VH_DHZfirst_Aplanarity_stack_11","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(1,0.2908559);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(2,0.02735804);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(3,0.00375606);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(1,0.02406673);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(2,0.0074279);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(3,0.002665142);
   VH_DHZfirst_Aplanarity_stack_11->SetEntries(167);

   ci = TColor::GetColor("#cc0000");
   VH_DHZfirst_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_11->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_11,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_12 = new TH1D("VH_DHZfirst_Aplanarity_stack_12","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(1,0.1088417);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(2,0.01061353);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(3,0.001583194);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(4,0.0005791065);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(5,0.0002193485);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(1,0.005519653);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(2,0.00169739);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(3,0.0006673354);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(4,0.0004121481);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(5,0.0002193485);
   VH_DHZfirst_Aplanarity_stack_12->SetEntries(452);

   ci = TColor::GetColor("#00cc00");
   VH_DHZfirst_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_12->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_DHZfirst_Aplanarity__235 = new TH1D("VH_DHZfirst_Aplanarity__235","",50,0,1);
   VH_DHZfirst_Aplanarity__235->SetBinContent(1,315097);
   VH_DHZfirst_Aplanarity__235->SetBinContent(2,41693);
   VH_DHZfirst_Aplanarity__235->SetBinContent(3,8910);
   VH_DHZfirst_Aplanarity__235->SetBinContent(4,2265);
   VH_DHZfirst_Aplanarity__235->SetBinContent(5,603);
   VH_DHZfirst_Aplanarity__235->SetBinContent(6,193);
   VH_DHZfirst_Aplanarity__235->SetBinContent(7,66);
   VH_DHZfirst_Aplanarity__235->SetBinContent(8,18);
   VH_DHZfirst_Aplanarity__235->SetBinContent(9,17);
   VH_DHZfirst_Aplanarity__235->SetBinContent(10,11);
   VH_DHZfirst_Aplanarity__235->SetBinContent(11,2);
   VH_DHZfirst_Aplanarity__235->SetBinContent(12,2);
   VH_DHZfirst_Aplanarity__235->SetBinContent(13,2);
   VH_DHZfirst_Aplanarity__235->SetBinContent(14,2);
   VH_DHZfirst_Aplanarity__235->SetBinContent(16,2);
   VH_DHZfirst_Aplanarity__235->SetBinContent(19,1);
   VH_DHZfirst_Aplanarity__235->SetEntries(368933);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__235->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__235->SetLineWidth(2);
   VH_DHZfirst_Aplanarity__235->SetMarkerStyle(20);
   VH_DHZfirst_Aplanarity__235->SetMarkerSize(1.2);
   VH_DHZfirst_Aplanarity__235->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity__235->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__235->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__235->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__235->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__235->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__235->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__235->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__235->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__235->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fx1235[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fy1235[50] = { 233838.8, 33759.79, 4894.608, 698.5186, 162.1733, 67.10531, 12.29079, 6.613661, 8.443892, 1.494834, 0.9944898, 0.4357393, 22.04913, 2.03554, 0.05976182, 0.04268345, 0.05566966,
   0.04306931, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fex1235[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fey1235[50] = { 6966.902, 3207.307, 825.3707, 285.0669, 40.79164, 18.65085, 0.79397, 0.5974483, 5.981375, 0.267217, 0.221095, 0.140197, 21.69239, 1.951854, 0.05976182, 0.04268345, 0.05566966,
   0.04306931, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_DHZfirst_Aplanarity_fx1235,Graph_from_VH_DHZfirst_Aplanarity_fy1235,Graph_from_VH_DHZfirst_Aplanarity_fex1235,Graph_from_VH_DHZfirst_Aplanarity_fey1235);
   gre->SetName("Graph_from_VH_DHZfirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_Aplanarity1235 = new TH1F("Graph_Graph_from_VH_DHZfirst_Aplanarity1235","",100,0,1.1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->SetMinimum(0);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->SetMaximum(264886.2);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_Aplanarity1235);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Aplanarity","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_DHZfirst_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_DHZfirst_16->cd();
  
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
   
   TH1D *data_mc_ratio__236 = new TH1D("data_mc_ratio__236","",50,0,1);
   data_mc_ratio__236->SetBinContent(1,1.347497);
   data_mc_ratio__236->SetBinContent(2,1.23499);
   data_mc_ratio__236->SetBinContent(3,1.82037);
   data_mc_ratio__236->SetBinContent(4,3.242577);
   data_mc_ratio__236->SetBinContent(5,3.718246);
   data_mc_ratio__236->SetBinContent(6,2.876077);
   data_mc_ratio__236->SetBinContent(7,5.369874);
   data_mc_ratio__236->SetBinContent(8,2.721639);
   data_mc_ratio__236->SetBinContent(9,2.01329);
   data_mc_ratio__236->SetBinContent(10,7.358679);
   data_mc_ratio__236->SetBinContent(11,2.011082);
   data_mc_ratio__236->SetBinContent(12,4.5899);
   data_mc_ratio__236->SetBinContent(13,0.09070654);
   data_mc_ratio__236->SetBinContent(14,0.98254);
   data_mc_ratio__236->SetBinContent(16,46.85656);
   data_mc_ratio__236->SetBinError(1,0.002400522);
   data_mc_ratio__236->SetBinError(2,0.00604828);
   data_mc_ratio__236->SetBinError(3,0.01928506);
   data_mc_ratio__236->SetBinError(4,0.06813278);
   data_mc_ratio__236->SetBinError(5,0.1514187);
   data_mc_ratio__236->SetBinError(6,0.2070245);
   data_mc_ratio__236->SetBinError(7,0.6609858);
   data_mc_ratio__236->SetBinError(8,0.6414965);
   data_mc_ratio__236->SetBinError(9,0.4882944);
   data_mc_ratio__236->SetBinError(10,2.218725);
   data_mc_ratio__236->SetBinError(11,1.422049);
   data_mc_ratio__236->SetBinError(12,3.245549);
   data_mc_ratio__236->SetBinError(13,0.06413921);
   data_mc_ratio__236->SetBinError(14,0.6947607);
   data_mc_ratio__236->SetBinError(16,33.13259);
   data_mc_ratio__236->SetMinimum(0.4);
   data_mc_ratio__236->SetMaximum(1.6);
   data_mc_ratio__236->SetEntries(2.237813);
   data_mc_ratio__236->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__236->SetLineColor(ci);
   data_mc_ratio__236->SetLineWidth(2);
   data_mc_ratio__236->SetMarkerStyle(20);
   data_mc_ratio__236->SetMarkerSize(1.2);
   data_mc_ratio__236->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__236->GetXaxis()->SetRange(1,50);
   data_mc_ratio__236->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__236->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__236->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__236->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__236->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__236->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__236->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__236->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__236->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__236->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__236->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__236->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__236->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__236->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__236->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__236->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1236[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1236[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1236[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1236[50] = { 0.02979361, 0.09500376, 0.1686286, 0.408102, 0.2515313, 0.277934, 0.06459877, 0.09033548, 0.708367, 0.1787604, 0.22232, 0.321745, 0.9838206, 0.9588872, 1, 1, 1,
   1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1236,Graph_from_mc_statistical_error_fy1236,Graph_from_mc_statistical_error_fex1236,Graph_from_mc_statistical_error_fey1236);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1236 = new TH1F("Graph_Graph_from_mc_statistical_error1236","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1236->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1236->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1236->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1236->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1236->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1236);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_DHZfirst_16->cd();
   Aplanarity_DHZfirst_16->Modified();
   Aplanarity_DHZfirst_16->cd();
   Aplanarity_DHZfirst_16->SetSelected(Aplanarity_DHZfirst_16);
}
