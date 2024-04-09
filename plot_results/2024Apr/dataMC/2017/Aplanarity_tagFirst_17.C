#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_17()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_17/Aplanarity_tagFirst_17
//=========  (Mon Apr  8 11:54:22 2024) by ROOT version 6.28/10
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
   topPad->Range(-0.1532254,-3752.496,1.052419,3748754);
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
   st->SetMaximum(3373503);
   
   TH1F *st_stack_191 = new TH1F("st_stack_191","",50,0,1);
   st_stack_191->SetMinimum(0.01);
   st_stack_191->SetMaximum(3373503);
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
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(1,1241152);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(2,149792.8);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(3,36953.06);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(4,13644.05);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(5,8252.353);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(6,2038.315);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(7,1084.67);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(8,911.6973);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(9,542.3183);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(10,334.9917);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(11,199.6259);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(12,71.4183);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(13,41.44421);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(14,39.58562);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(15,22.50284);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(16,0.4388301);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(17,12.30786);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(18,43.11937);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(1,35285.12);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(2,5350.797);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(3,2770.72);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(4,1705.958);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(5,3133.729);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(6,403.558);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(7,288.7253);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(8,277.9092);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(9,193.1549);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(10,214.9873);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(11,59.09076);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(12,28.50437);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(13,13.65527);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(14,23.72626);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(15,9.879678);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(16,0.4388301);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(17,8.497938);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(18,30.56996);
   VH_tagFirst_Aplanarity_stack_1->SetEntries(174902);

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
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(1,14203.35);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(2,2001.166);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(3,524.5375);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(4,171.9558);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(5,75.72982);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(6,37.84875);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(7,23.14456);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(8,11.76117);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(9,5.710474);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(10,4.348297);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(11,3.962809);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(12,2.939791);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(13,0.5386933);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(14,1.225696);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(15,0.3753027);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(16,0.1598668);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(17,0.01210886);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(18,0.5939782);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(19,0.1874611);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(1,57.36082);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(2,21.57642);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(3,11.21119);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(4,6.199483);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(5,4.054818);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(6,2.933447);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(7,2.820157);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(8,1.344688);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(9,1.02884);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(10,0.947955);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(11,1.099747);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(12,0.90741);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(13,0.2807293);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(14,0.5108525);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(15,0.2641562);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(16,0.08301065);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(17,0.01210886);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(18,0.4255788);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(19,0.1874611);
   VH_tagFirst_Aplanarity_stack_2->SetEntries(206172);

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
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(0,0.05764326);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(1,246196.6);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(2,33686.8);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(3,8844.75);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(4,3247.247);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(5,1452.978);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(6,753.5956);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(7,420.7248);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(8,250.9245);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(9,156.2839);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(10,99.72882);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(11,64.31787);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(12,41.2584);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(13,28.34124);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(14,16.77479);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(15,11.02737);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(16,6.158165);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(17,3.805252);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(18,1.638303);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(19,0.6255779);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(20,0.7417882);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(21,0.3286827);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(22,0.2506557);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(0,0.05764326);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(1,142.7709);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(2,52.27155);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(3,26.936);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(4,16.44567);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(5,10.9853);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(6,7.95173);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(7,5.88569);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(8,4.759571);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(9,3.7414);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(10,2.948674);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(11,2.259737);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(12,1.856581);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(13,1.617459);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(14,1.148293);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(15,0.9676376);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(16,0.6557881);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(17,0.6368342);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(18,0.3214211);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(19,0.1900758);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(20,0.1971766);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(21,0.1737621);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(22,0.1783518);
   VH_tagFirst_Aplanarity_stack_3->SetEntries(4972393);

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
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(1,10501.97);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(2,1166.492);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(3,311.8826);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(4,111.5397);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(5,42.93919);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(6,18.27978);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(7,10.49324);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(8,6.142244);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(9,3.767568);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(10,2.909818);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(11,2.626163);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(12,0.5668236);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(13,0.2706409);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(14,0.4352009);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(15,0.1296841);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(16,0.1196562);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(17,0.1133002);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(1,67.46825);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(2,25.23604);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(3,16.07447);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(4,7.996355);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(5,3.513363);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(6,1.818837);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(7,1.776372);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(8,2.244322);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(9,0.8836108);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(10,0.6724299);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(11,0.9148285);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(12,0.2536454);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(13,0.1441618);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(14,0.211075);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(15,0.09207578);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(16,0.1196562);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(17,0.08022596);
   VH_tagFirst_Aplanarity_stack_4->SetEntries(91786);

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
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(1,5634.488);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(2,597.333);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(3,144.0295);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(4,58.36713);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(5,21.99466);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(6,14.93333);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(7,5.861928);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(8,3.054272);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(9,4.015223);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(10,0.6100053);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(11,0.9274155);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(12,0.5792122);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(13,0.1013895);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(14,0.08032678);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(16,0.03250475);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(1,78.79758);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(2,27.99469);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(3,14.07557);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(4,7.71151);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(5,3.745871);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(6,5.079175);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(7,1.696868);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(8,0.9142432);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(9,2.576949);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(10,0.3091674);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(11,0.2752315);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(12,0.3451909);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(13,0.08738069);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(14,0.075933);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(16,0.03250475);
   VH_tagFirst_Aplanarity_stack_5->SetEntries(44209);

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
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(1,50.69355);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(2,7.281433);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(3,1.416739);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(4,0.692247);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(6,0.2611829);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(8,0.1686304);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(1,4.338515);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(2,1.689639);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(3,0.7611536);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(4,0.3624366);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(6,0.2611829);
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
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(1,131.6403);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(2,15.4772);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(3,2.753447);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(4,1.357695);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(5,0.2061255);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(6,0.8384539);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(8,0.1216993);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(11,0.5424682);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(1,6.587636);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(2,2.349223);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(3,1.04625);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(4,0.5565141);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(5,0.2061255);
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
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(1,110.8746);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(2,11.61009);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(3,4.354695);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(4,0.7375593);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(6,0.7626167);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(1,6.443799);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(2,1.88746);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(3,1.368426);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(4,0.4480842);
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
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(1,55.01348);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(2,5.373554);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(3,1.269988);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(4,0.4110257);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(5,0.206049);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(6,0.06894345);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(7,0.05521976);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(8,0.01337757);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(9,0.01468712);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(10,0.01783036);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(11,0.004666374);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(12,0.01129395);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(13,0.003274319);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(19,0.005490325);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(1,0.3477132);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(2,0.1100669);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(3,0.05367213);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(4,0.03089157);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(5,0.02189902);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(6,0.01191952);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(7,0.01171939);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(8,0.004385031);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(9,0.005100606);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(10,0.009567786);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(11,0.002735942);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(12,0.007022197);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(13,0.002473239);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(19,0.003540414);
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
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(1,37.90949);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(2,4.254641);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(3,1.0251);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(4,0.3567128);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(5,0.1673038);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(6,0.0664501);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(7,0.0501775);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(8,0.02427938);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(9,0.01366801);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(10,0.008846928);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(11,0.005648664);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(12,0.003073645);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(13,0.002393912);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(14,0.00194444);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(16,0.000575281);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(17,0.0003936398);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(19,0.0009189826);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(21,0.0004182815);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(1,0.1218228);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(2,0.04025694);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(3,0.01980306);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(4,0.01187351);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(5,0.00819775);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(6,0.005065503);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(7,0.004470987);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(8,0.003091504);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(9,0.002308809);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(10,0.001787628);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(11,0.001653618);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(12,0.001079844);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(13,0.0009870363);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(14,0.0008741623);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(16,0.0004182607);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(17,0.0003936398);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(19,0.000653351);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(21,0.0004182815);
   VH_tagFirst_Aplanarity_stack_10->SetEntries(118380);

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
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(1,1.310505);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(2,0.1171994);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(3,0.02448301);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(4,0.01407391);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(5,0.003769742);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(6,0.001290917);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(7,0.0001481517);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(9,0.001064883);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(11,0.0009156332);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(1,0.04545116);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(2,0.01369033);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(3,0.006655205);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(4,0.004561593);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(5,0.002177518);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(6,0.001290917);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(7,0.0001481517);
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
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(1,0.6510664);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(2,0.07794274);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(3,0.01720281);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(4,0.005566444);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(5,0.00250862);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(6,0.0002958805);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(7,0.0007757456);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(8,0.001198057);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(10,0.0001482523);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(11,0.0008430725);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(1,0.01166563);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(2,0.004217915);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(3,0.001941965);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(4,0.001157414);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(5,0.000690103);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(6,0.0002215981);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(7,0.000353572);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(8,0.0006203505);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(10,0.0001482523);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(11,0.0004308263);
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
   VH_tagFirst_Aplanarity__381->SetBinContent(1,1183682);
   VH_tagFirst_Aplanarity__381->SetBinContent(2,157055);
   VH_tagFirst_Aplanarity__381->SetBinContent(3,40605);
   VH_tagFirst_Aplanarity__381->SetBinContent(4,13882);
   VH_tagFirst_Aplanarity__381->SetBinContent(5,5759);
   VH_tagFirst_Aplanarity__381->SetBinContent(6,2762);
   VH_tagFirst_Aplanarity__381->SetBinContent(7,1552);
   VH_tagFirst_Aplanarity__381->SetBinContent(8,857);
   VH_tagFirst_Aplanarity__381->SetBinContent(9,514);
   VH_tagFirst_Aplanarity__381->SetBinContent(10,329);
   VH_tagFirst_Aplanarity__381->SetBinContent(11,219);
   VH_tagFirst_Aplanarity__381->SetBinContent(12,122);
   VH_tagFirst_Aplanarity__381->SetBinContent(13,90);
   VH_tagFirst_Aplanarity__381->SetBinContent(14,49);
   VH_tagFirst_Aplanarity__381->SetBinContent(15,37);
   VH_tagFirst_Aplanarity__381->SetBinContent(16,19);
   VH_tagFirst_Aplanarity__381->SetBinContent(17,9);
   VH_tagFirst_Aplanarity__381->SetBinContent(18,10);
   VH_tagFirst_Aplanarity__381->SetBinContent(19,1);
   VH_tagFirst_Aplanarity__381->SetBinContent(21,2);
   VH_tagFirst_Aplanarity__381->SetEntries(1407604);

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
   Double_t Graph_from_VH_tagFirst_Aplanarity_fy1381[50] = { 1518076, 187288.8, 46789.12, 17236.74, 9846.581, 2864.972, 1545.001, 1183.909, 712.1248, 442.6155, 272.0147, 116.7769, 70.70184, 58.10357, 34.0352, 6.909598, 16.23891,
   45.35165, 0.8194483, 0.7417882, 0.3291009, 0.2506557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fex1381[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fey1381[50] = { 35285.61, 5351.229, 2770.957, 1706.085, 3133.755, 403.6843, 288.8095, 277.9638, 193.213, 215.0109, 59.15438, 28.58239, 13.75462, 23.76058, 9.930892, 0.8030536, 8.522153,
   30.57461, 0.2669896, 0.1971766, 0.1737626, 0.1783518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   Graph_Graph_from_VH_tagFirst_Aplanarity1381->SetMaximum(1708698);
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
   data_mc_ratio__382->SetBinContent(1,0.7797249);
   data_mc_ratio__382->SetBinContent(2,0.8385713);
   data_mc_ratio__382->SetBinContent(3,0.86783);
   data_mc_ratio__382->SetBinContent(4,0.8053729);
   data_mc_ratio__382->SetBinContent(5,0.5848731);
   data_mc_ratio__382->SetBinContent(6,0.9640584);
   data_mc_ratio__382->SetBinContent(7,1.00453);
   data_mc_ratio__382->SetBinContent(8,0.7238735);
   data_mc_ratio__382->SetBinContent(9,0.7217836);
   data_mc_ratio__382->SetBinContent(10,0.7433089);
   data_mc_ratio__382->SetBinContent(11,0.8051035);
   data_mc_ratio__382->SetBinContent(12,1.044727);
   data_mc_ratio__382->SetBinContent(13,1.272951);
   data_mc_ratio__382->SetBinContent(14,0.8433217);
   data_mc_ratio__382->SetBinContent(15,1.08711);
   data_mc_ratio__382->SetBinContent(16,2.749798);
   data_mc_ratio__382->SetBinContent(17,0.5542243);
   data_mc_ratio__382->SetBinContent(18,0.2204991);
   data_mc_ratio__382->SetBinContent(19,1.220333);
   data_mc_ratio__382->SetBinContent(21,6.077163);
   data_mc_ratio__382->SetBinError(1,0.0007166777);
   data_mc_ratio__382->SetBinError(2,0.002115992);
   data_mc_ratio__382->SetBinError(3,0.004306703);
   data_mc_ratio__382->SetBinError(4,0.006835511);
   data_mc_ratio__382->SetBinError(5,0.007707048);
   data_mc_ratio__382->SetBinError(6,0.01834389);
   data_mc_ratio__382->SetBinError(7,0.02549865);
   data_mc_ratio__382->SetBinError(8,0.02472705);
   data_mc_ratio__382->SetBinError(9,0.03183651);
   data_mc_ratio__382->SetBinError(10,0.04097994);
   data_mc_ratio__382->SetBinError(11,0.05440386);
   data_mc_ratio__382->SetBinError(12,0.09458516);
   data_mc_ratio__382->SetBinError(13,0.1341809);
   data_mc_ratio__382->SetBinError(14,0.1204745);
   data_mc_ratio__382->SetBinError(15,0.1787198);
   data_mc_ratio__382->SetBinError(16,0.630847);
   data_mc_ratio__382->SetBinError(17,0.1847414);
   data_mc_ratio__382->SetBinError(18,0.06972795);
   data_mc_ratio__382->SetBinError(19,1.220333);
   data_mc_ratio__382->SetBinError(21,4.297203);
   data_mc_ratio__382->SetMinimum(0.4);
   data_mc_ratio__382->SetMaximum(1.6);
   data_mc_ratio__382->SetEntries(17.97164);
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
   Double_t Graph_from_mc_statistical_error_fey1382[50] = { 0.02324364, 0.02857208, 0.05922225, 0.0989796, 0.3182582, 0.1409034, 0.1869316, 0.2347849, 0.2713191, 0.4857736, 0.2174676, 0.2447606, 0.1945441, 0.408935, 0.291783, 0.1162229, 0.5247982,
   0.6741675, 0.3258163, 0.2658125, 0.5279917, 0.7115409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   Graph_Graph_from_mc_statistical_error1382->SetMinimum(0.1461509);
   Graph_Graph_from_mc_statistical_error1382->SetMaximum(1.853849);
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
