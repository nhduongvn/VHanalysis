#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_17()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_17/Aplanarity_tagFirst_17
//=========  (Wed Feb 14 12:33:09 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagFirst_17 = new TCanvas("Aplanarity_tagFirst_17", "Aplanarity_tagFirst_17",0,0,600,600);
   Aplanarity_tagFirst_17->SetHighLightColor(2);
   Aplanarity_tagFirst_17->Range(0,0,1,1);
   Aplanarity_tagFirst_17->SetFillColor(0);
   Aplanarity_tagFirst_17->SetFillStyle(4000);
   Aplanarity_tagFirst_17->SetBorderMode(0);
   Aplanarity_tagFirst_17->SetBorderSize(2);
   Aplanarity_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-3820.877,1.052419,3817066);
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
   st->SetMaximum(3434977);
   
   TH1F *st_stack_191 = new TH1F("st_stack_191","",50,0,1);
   st_stack_191->SetMinimum(0.01);
   st_stack_191->SetMaximum(3434977);
   st_stack_191->SetDirectory(nullptr);
   st_stack_191->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_191->SetLineColor(ci);
   st_stack_191->SetLineWidth(0);
   st_stack_191->GetXaxis()->SetRange(1,50);
   st_stack_191->GetXaxis()->SetLabelFont(42);
   st_stack_191->GetXaxis()->SetTitleOffset(1);
   st_stack_191->GetXaxis()->SetTitleFont(42);
   st_stack_191->GetYaxis()->SetTitle("Events/0.02");
   st_stack_191->GetYaxis()->SetLabelFont(42);
   st_stack_191->GetYaxis()->SetLabelSize(0.05);
   st_stack_191->GetYaxis()->SetTitleSize(0.057);
   st_stack_191->GetYaxis()->SetTitleOffset(1.2);
   st_stack_191->GetYaxis()->SetTitleFont(42);
   st_stack_191->GetZaxis()->SetLabelFont(42);
   st_stack_191->GetZaxis()->SetTitleOffset(1);
   st_stack_191->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_191);
   
   
   TH1D *VH_tagFirst_Aplanarity_stack_1 = new TH1D("VH_tagFirst_Aplanarity_stack_1","",50,0,1);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(1,1269280);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(2,150430.5);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(3,36079.31);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(4,14515.3);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(5,8305.684);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(6,2847.534);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(7,734.3715);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(8,697.3334);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(9,510.4034);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(10,360.0113);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(11,173.5257);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(12,83.01416);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(13,35.66913);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(14,43.36206);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(15,14.5654);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(16,0.4388301);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(17,35.08532);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(18,20.11066);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(1,47315.57);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(2,5567.719);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(3,2762.852);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(4,1813.564);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(5,3043.552);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(6,624.9613);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(7,104.2957);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(8,172.0912);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(9,203.3576);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(10,229.6585);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(11,55.88643);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(12,29.07433);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(13,12.62326);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(14,23.90947);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(15,8.099795);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(16,0.4388301);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(17,24.41454);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(18,19.7088);
   VH_tagFirst_Aplanarity_stack_1->SetEntries(173225);

   ci = TColor::GetColor("#ff6600");
   VH_tagFirst_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_1->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_1,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_2 = new TH1D("VH_tagFirst_Aplanarity_stack_2","",50,0,1);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(1,14201.82);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(2,2001.448);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(3,535.755);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(4,173.2141);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(5,78.92294);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(6,38.27963);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(7,21.11899);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(8,10.98644);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(9,6.10107);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(10,4.577686);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(11,3.43988);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(12,2.835184);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(13,1.028794);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(14,1.887592);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(15,1.705571);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(16,0.25744);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(17,0.0115226);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(18,0.4923726);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(19,0.216379);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(1,57.18224);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(2,21.55659);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(3,11.39919);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(4,6.111595);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(5,4.214153);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(6,3.198222);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(7,2.377636);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(8,1.497322);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(9,1.056777);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(10,0.9890721);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(11,1.038604);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(12,0.9075233);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(13,0.3776122);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(14,0.6928019);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(15,1.035643);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(16,0.1083195);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(17,0.0115226);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(18,0.419288);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(19,0.1823863);
   VH_tagFirst_Aplanarity_stack_2->SetEntries(211934);

   ci = TColor::GetColor("#660066");
   VH_tagFirst_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_2->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_2,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_3 = new TH1D("VH_tagFirst_Aplanarity_stack_3","",50,0,1);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(0,0.1250932);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(1,245742.3);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(2,33804.13);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(3,9026.665);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(4,3333.227);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(5,1501.324);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(6,770.3896);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(7,440.2188);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(8,262.3761);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(9,160.1301);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(10,96.78282);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(11,66.28802);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(12,45.2358);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(13,29.09538);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(14,18.92817);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(15,10.65071);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(16,6.424312);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(17,3.764815);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(18,1.591919);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(19,1.066868);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(20,0.7656837);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(21,0.173147);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(22,0.1756961);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(23,0.0653322);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(0,0.1250932);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(1,144.1667);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(2,52.91441);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(3,27.52584);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(4,16.79048);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(5,11.26172);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(6,8.147483);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(7,6.164692);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(8,4.889986);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(9,3.754605);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(10,2.926395);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(11,2.368767);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(12,1.915634);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(13,1.663852);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(14,1.288118);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(15,0.9200658);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(16,0.7684199);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(17,0.6270124);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(18,0.326815);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(19,0.2975901);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(20,0.2030448);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(21,0.09091492);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(22,0.1463131);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(23,0.0653322);
   VH_tagFirst_Aplanarity_stack_3->SetEntries(4872916);

   ci = TColor::GetColor("#cc00cc");
   VH_tagFirst_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_3->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_3,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_4 = new TH1D("VH_tagFirst_Aplanarity_stack_4","",50,0,1);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(1,10502.13);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(2,1144.608);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(3,318.1314);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(4,117.7843);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(5,44.97269);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(6,18.34362);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(7,10.42409);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(8,6.855106);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(9,3.76797);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(10,2.28372);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(11,2.672233);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(12,1.017525);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(13,0.253105);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(14,0.4719848);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(15,0.1398433);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(16,0.1196562);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(17,0.04996708);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(18,0.05962828);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(1,66.33704);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(2,24.02232);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(3,15.86779);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(4,9.898834);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(5,3.498915);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(6,1.917455);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(7,1.702273);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(8,2.198401);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(9,0.8835762);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(10,0.5810466);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(11,0.9263126);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(12,0.3734825);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(13,0.1155564);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(14,0.2100241);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(15,0.09064727);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(16,0.1196562);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(17,0.04996708);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(18,0.05962828);
   VH_tagFirst_Aplanarity_stack_4->SetEntries(95528);

   ci = TColor::GetColor("#00cccc");
   VH_tagFirst_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_4->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_4,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_5 = new TH1D("VH_tagFirst_Aplanarity_stack_5","",50,0,1);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(1,5625.82);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(2,611.1962);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(3,145.0645);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(4,60.58665);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(5,18.98991);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(6,14.75996);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(7,6.825985);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(8,4.713179);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(9,2.452756);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(10,0.7065531);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(11,0.9805612);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(12,0.3452802);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(13,0.1055197);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(14,0.08396621);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(16,0.03250475);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(1,83.74636);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(2,31.22876);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(3,15.5869);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(4,9.004328);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(5,3.279304);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(6,5.110251);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(7,1.821858);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(8,2.645393);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(9,0.7546777);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(10,0.3233359);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(11,0.3441546);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(12,0.2610939);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(13,0.09144932);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(14,0.07956625);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(16,0.03250475);
   VH_tagFirst_Aplanarity_stack_5->SetEntries(43392);

   ci = TColor::GetColor("#ff99cc");
   VH_tagFirst_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_5->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_5,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_6 = new TH1D("VH_tagFirst_Aplanarity_stack_6","",50,0,1);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(1,50.37229);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(2,7.266408);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(3,1.753018);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(4,0.692247);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(7,0.2611829);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(8,0.1686304);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(1,4.326604);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(2,1.686713);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(3,0.8321286);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(4,0.3624366);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(7,0.2611829);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(8,0.1686304);
   VH_tagFirst_Aplanarity_stack_6->SetEntries(204);

   ci = TColor::GetColor("#9933ff");
   VH_tagFirst_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_6->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_6,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_7 = new TH1D("VH_tagFirst_Aplanarity_stack_7","",50,0,1);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(1,131.9271);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(2,15.02019);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(3,2.923564);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(4,1.019394);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(5,0.544426);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(6,0.8384539);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(8,0.1216993);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(11,0.5424682);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(1,6.592759);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(2,2.3286);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(3,1.05999);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(4,0.4418832);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(5,0.3961501);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(6,0.6151703);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(8,0.1216993);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(11,0.5424682);
   VH_tagFirst_Aplanarity_stack_7->SetEntries(620);

   ci = TColor::GetColor("#3399ff");
   VH_tagFirst_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_7->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_7,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_8 = new TH1D("VH_tagFirst_Aplanarity_stack_8","",50,0,1);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(1,110.9042);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(2,11.43801);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(3,4.702882);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(4,0.5319046);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(6,0.7626167);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(1,6.455238);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(2,1.839413);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(3,1.395136);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(4,0.3981025);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(6,0.7626167);
   VH_tagFirst_Aplanarity_stack_8->SetEntries(481);

   ci = TColor::GetColor("#33ff99");
   VH_tagFirst_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_8->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_8,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_9 = new TH1D("VH_tagFirst_Aplanarity_stack_9","",50,0,1);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(1,54.94611);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(2,5.405816);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(3,1.290267);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(4,0.4177396);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(5,0.2020038);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(6,0.07606039);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(7,0.06359322);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(8,0.01004913);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(9,0.01141633);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(10,0.01842661);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(11,0.007340908);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(12,0.008434001);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(13,0.006134266);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(18,0.003579848);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(19,0.001910477);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(1,0.3475199);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(2,0.1104171);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(3,0.05373051);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(4,0.03156651);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(5,0.02152894);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(6,0.01242779);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(7,0.01246846);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(8,0.003679539);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(9,0.004540223);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(10,0.009586346);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(11,0.003540116);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(12,0.006679839);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(13,0.003287539);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(18,0.002980706);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(19,0.001910477);
   VH_tagFirst_Aplanarity_stack_9->SetEntries(39482);

   ci = TColor::GetColor("#cccc00");
   VH_tagFirst_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_9->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_9,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_10 = new TH1D("VH_tagFirst_Aplanarity_stack_10","",50,0,1);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(1,37.93922);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(2,4.286094);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(3,1.040419);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(4,0.3559003);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(5,0.1733782);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(6,0.07685421);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(7,0.05028446);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(8,0.02513023);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(9,0.01483746);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(10,0.009403624);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(11,0.00438793);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(12,0.003429707);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(13,0.001994671);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(14,0.001076011);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(15,0.0003658511);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(16,0.0010686);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(17,0.0001895566);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(18,0.0007100256);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(19,0.0003564561);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(20,0.0003987348);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(21,0.0003623154);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(1,0.1133517);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(2,0.03759669);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(3,0.01855007);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(4,0.01102757);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(5,0.007743579);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(6,0.005123894);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(7,0.004181429);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(8,0.002926466);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(9,0.002222977);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(10,0.001778839);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(11,0.001345064);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(12,0.001067369);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(13,0.0008237161);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(14,0.0006214914);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(15,0.0003658511);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(16,0.0006221313);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(17,0.0001895566);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(18,0.0005161074);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(19,0.0003564561);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(20,0.0003987348);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(21,0.0003623154);
   VH_tagFirst_Aplanarity_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VH_tagFirst_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_10->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_10,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_11 = new TH1D("VH_tagFirst_Aplanarity_stack_11","",50,0,1);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(1,1.307038);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(2,0.1170071);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(3,0.02702701);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(4,0.01386875);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(5,0.005158842);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(7,0.001370109);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(9,0.001064883);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(11,0.0009156332);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(1,0.04541059);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(2,0.01363754);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(3,0.006941042);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(4,0.004625889);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(5,0.002359518);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(7,0.001230905);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(9,0.001064883);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(11,0.0009156332);
   VH_tagFirst_Aplanarity_stack_11->SetEntries(1123);

   ci = TColor::GetColor("#cc0000");
   VH_tagFirst_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_11->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_11,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_12 = new TH1D("VH_tagFirst_Aplanarity_stack_12","",50,0,1);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(1,0.6500366);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(2,0.07713908);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(3,0.01920443);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(4,0.005398309);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(5,0.001977036);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(6,0.0008274645);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(7,0.0007570259);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(8,0.001216777);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(10,0.0002807692);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(11,0.0007105556);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(1,0.01165931);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(2,0.004193069);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(3,0.002060818);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(4,0.001104678);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(5,0.0005758221);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(6,0.0004402008);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(7,0.0003445164);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(8,0.0006254249);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(10,0.0002807692);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(11,0.0003588296);
   VH_tagFirst_Aplanarity_stack_12->SetEntries(4223);

   ci = TColor::GetColor("#00cc00");
   VH_tagFirst_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_12->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_tagFirst_Aplanarity__381 = new TH1D("VH_tagFirst_Aplanarity__381","",50,0,1);
   VH_tagFirst_Aplanarity__381->SetBinContent(1,1119169);
   VH_tagFirst_Aplanarity__381->SetBinContent(2,148172);
   VH_tagFirst_Aplanarity__381->SetBinContent(3,38637);
   VH_tagFirst_Aplanarity__381->SetBinContent(4,13388);
   VH_tagFirst_Aplanarity__381->SetBinContent(5,5547);
   VH_tagFirst_Aplanarity__381->SetBinContent(6,2704);
   VH_tagFirst_Aplanarity__381->SetBinContent(7,1461);
   VH_tagFirst_Aplanarity__381->SetBinContent(8,854);
   VH_tagFirst_Aplanarity__381->SetBinContent(9,482);
   VH_tagFirst_Aplanarity__381->SetBinContent(10,323);
   VH_tagFirst_Aplanarity__381->SetBinContent(11,197);
   VH_tagFirst_Aplanarity__381->SetBinContent(12,122);
   VH_tagFirst_Aplanarity__381->SetBinContent(13,97);
   VH_tagFirst_Aplanarity__381->SetBinContent(14,38);
   VH_tagFirst_Aplanarity__381->SetBinContent(15,43);
   VH_tagFirst_Aplanarity__381->SetBinContent(16,18);
   VH_tagFirst_Aplanarity__381->SetBinContent(17,6);
   VH_tagFirst_Aplanarity__381->SetBinContent(18,9);
   VH_tagFirst_Aplanarity__381->SetBinContent(19,2);
   VH_tagFirst_Aplanarity__381->SetBinContent(20,1);
   VH_tagFirst_Aplanarity__381->SetEntries(1331319);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__381->SetLineColor(ci);
   VH_tagFirst_Aplanarity__381->SetLineWidth(2);
   VH_tagFirst_Aplanarity__381->SetMarkerStyle(20);
   VH_tagFirst_Aplanarity__381->SetMarkerSize(1.2);
   VH_tagFirst_Aplanarity__381->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity__381->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__381->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__381->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__381->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__381->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__381->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__381->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__381->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__381->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_Aplanarity_fx1381[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fy1381[50] = { 1545740, 188035.5, 46116.68, 18203.15, 9950.821, 3691.061, 1213.337, 982.5909, 682.8826, 464.3902, 247.4622, 132.4598, 66.16006, 64.73485, 27.06188, 7.273811, 38.91181,
   22.25887, 1.285513, 0.7660824, 0.1735093, 0.1756961, 0.0653322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fex1381[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fey1381[50] = { 47315.95, 5568.153, 2763.103, 1813.701, 3043.58, 625.0472, 104.5348, 172.2017, 203.3983, 229.6803, 55.9576, 29.15506, 12.7389, 23.95522, 8.217905, 0.9000826, 24.42265,
   19.71606, 0.3490392, 0.2030452, 0.09091564, 0.1463131, 0.0653322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_tagFirst_Aplanarity_fx1381,Graph_from_VH_tagFirst_Aplanarity_fy1381,Graph_from_VH_tagFirst_Aplanarity_fex1381,Graph_from_VH_tagFirst_Aplanarity_fey1381);
   gre->SetName("Graph_from_VH_tagFirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_Aplanarity1381 = new TH1F("Graph_Graph_from_VH_tagFirst_Aplanarity1381","",100,0,1.1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->SetMinimum(0);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->SetMaximum(1752361);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_Aplanarity1381);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_Aplanarity","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagFirst_Aplanarity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_tagFirst_17->cd();
  
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
   
   TH1D *data_mc_ratio__382 = new TH1D("data_mc_ratio__382","",50,0,1);
   data_mc_ratio__382->SetBinContent(1,0.7240346);
   data_mc_ratio__382->SetBinContent(2,0.7880001);
   data_mc_ratio__382->SetBinContent(3,0.8378096);
   data_mc_ratio__382->SetBinContent(4,0.7354771);
   data_mc_ratio__382->SetBinContent(5,0.5574414);
   data_mc_ratio__382->SetBinContent(6,0.7325806);
   data_mc_ratio__382->SetBinContent(7,1.204118);
   data_mc_ratio__382->SetBinContent(8,0.8691308);
   data_mc_ratio__382->SetBinContent(9,0.7058315);
   data_mc_ratio__382->SetBinContent(10,0.6955358);
   data_mc_ratio__382->SetBinContent(11,0.7960811);
   data_mc_ratio__382->SetBinContent(12,0.9210341);
   data_mc_ratio__382->SetBinContent(13,1.466141);
   data_mc_ratio__382->SetBinContent(14,0.5870099);
   data_mc_ratio__382->SetBinContent(15,1.588951);
   data_mc_ratio__382->SetBinContent(16,2.474631);
   data_mc_ratio__382->SetBinContent(17,0.1541948);
   data_mc_ratio__382->SetBinContent(18,0.4043333);
   data_mc_ratio__382->SetBinContent(19,1.555799);
   data_mc_ratio__382->SetBinContent(20,1.305343);
   data_mc_ratio__382->SetBinError(1,0.0006844023);
   data_mc_ratio__382->SetBinError(2,0.00204712);
   data_mc_ratio__382->SetBinError(3,0.004262296);
   data_mc_ratio__382->SetBinError(4,0.006356401);
   data_mc_ratio__382->SetBinError(5,0.007484627);
   data_mc_ratio__382->SetBinError(6,0.01408809);
   data_mc_ratio__382->SetBinError(7,0.03150241);
   data_mc_ratio__382->SetBinError(8,0.02974104);
   data_mc_ratio__382->SetBinError(9,0.03214974);
   data_mc_ratio__382->SetBinError(10,0.03870065);
   data_mc_ratio__382->SetBinError(11,0.05671843);
   data_mc_ratio__382->SetBinError(12,0.08338651);
   data_mc_ratio__382->SetBinError(13,0.1488641);
   data_mc_ratio__382->SetBinError(14,0.09522558);
   data_mc_ratio__382->SetBinError(15,0.2423127);
   data_mc_ratio__382->SetBinError(16,0.5832761);
   data_mc_ratio__382->SetBinError(17,0.06294977);
   data_mc_ratio__382->SetBinError(18,0.1347778);
   data_mc_ratio__382->SetBinError(19,1.100116);
   data_mc_ratio__382->SetBinError(20,1.305343);
   data_mc_ratio__382->SetMinimum(0.4);
   data_mc_ratio__382->SetMaximum(1.6);
   data_mc_ratio__382->SetEntries(79.43926);
   data_mc_ratio__382->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__382->SetLineColor(ci);
   data_mc_ratio__382->SetLineWidth(2);
   data_mc_ratio__382->SetMarkerStyle(20);
   data_mc_ratio__382->SetMarkerSize(1.2);
   data_mc_ratio__382->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__382->GetXaxis()->SetRange(1,50);
   data_mc_ratio__382->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__382->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__382->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__382->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__382->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__382->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__382->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__382->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__382->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__382->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__382->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__382->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__382->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__382->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__382->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__382->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1382[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1382[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1382[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1382[50] = { 0.03061055, 0.02961224, 0.05991547, 0.09963667, 0.3058622, 0.1693408, 0.08615486, 0.1752526, 0.2978526, 0.4945847, 0.2261258, 0.220105, 0.1925467, 0.3700514, 0.3036709, 0.1237429, 0.6276409,
   0.8857621, 0.2715174, 0.2650435, 0.5239813, 0.8327623, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1382,Graph_from_mc_statistical_error_fy1382,Graph_from_mc_statistical_error_fex1382,Graph_from_mc_statistical_error_fey1382);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1382 = new TH1F("Graph_Graph_from_mc_statistical_error1382","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1382->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1382->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1382->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1382->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1382->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1382->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1382->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1382->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1382);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagFirst_17->cd();
   Aplanarity_tagFirst_17->Modified();
   Aplanarity_tagFirst_17->cd();
   Aplanarity_tagFirst_17->SetSelected(Aplanarity_tagFirst_17);
}
