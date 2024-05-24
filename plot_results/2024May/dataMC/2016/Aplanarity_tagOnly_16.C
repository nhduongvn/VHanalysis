#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagOnly_16()
{
//=========Macro generated from canvas: Aplanarity_tagOnly_16/Aplanarity_tagOnly_16
//=========  (Thu May 23 12:59:53 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagOnly_16 = new TCanvas("Aplanarity_tagOnly_16", "Aplanarity_tagOnly_16",0,0,600,600);
   Aplanarity_tagOnly_16->SetHighLightColor(2);
   Aplanarity_tagOnly_16->Range(0,0,1,1);
   Aplanarity_tagOnly_16->SetFillColor(0);
   Aplanarity_tagOnly_16->SetFillStyle(4000);
   Aplanarity_tagOnly_16->SetBorderMode(0);
   Aplanarity_tagOnly_16->SetBorderSize(2);
   Aplanarity_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_tagOnly_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-7428.538,1.052419,7421119);
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
   st->SetMaximum(6678264);
   
   TH1F *st_stack_46 = new TH1F("st_stack_46","",50,0,1);
   st_stack_46->SetMinimum(0.01);
   st_stack_46->SetMaximum(6678264);
   st_stack_46->SetDirectory(nullptr);
   st_stack_46->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_46->SetLineColor(ci);
   st_stack_46->SetLineWidth(0);
   st_stack_46->GetXaxis()->SetRange(1,50);
   st_stack_46->GetXaxis()->SetLabelFont(42);
   st_stack_46->GetXaxis()->SetTitleOffset(1);
   st_stack_46->GetXaxis()->SetTitleFont(42);
   st_stack_46->GetYaxis()->SetTitle("Events/0.02");
   st_stack_46->GetYaxis()->SetLabelFont(42);
   st_stack_46->GetYaxis()->SetLabelSize(0.05);
   st_stack_46->GetYaxis()->SetTitleSize(0.057);
   st_stack_46->GetYaxis()->SetTitleOffset(1.2);
   st_stack_46->GetYaxis()->SetTitleFont(42);
   st_stack_46->GetZaxis()->SetLabelFont(42);
   st_stack_46->GetZaxis()->SetTitleOffset(1);
   st_stack_46->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_46);
   
   
   TH1D *VH_tagOnly_Aplanarity_stack_1 = new TH1D("VH_tagOnly_Aplanarity_stack_1","",50,0,1);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(1,1832984);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(2,265472.1);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(3,66024.2);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(4,21842.97);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(5,6027.993);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(6,3152.806);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(7,2110.428);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(8,647.1312);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(9,1000.154);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(10,128.9899);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(11,170.8952);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(12,349.5123);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(13,97.29942);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(14,11.18534);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(15,38.4539);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(16,0.4282265);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(17,13.62232);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(1,28678.74);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(2,17762.46);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(3,4151.444);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(4,2219.393);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(5,853.4622);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(6,618.5111);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(7,489.5344);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(8,94.27131);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(9,364.9482);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(10,39.18975);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(11,46.98071);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(12,232.6575);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(13,37.09874);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(14,8.60168);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(15,18.0459);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(16,0.4282265);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(17,9.441003);
   VH_tagOnly_Aplanarity_stack_1->SetEntries(176350);

   ci = TColor::GetColor("#ff6600");
   VH_tagOnly_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_1->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_1,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_2 = new TH1D("VH_tagOnly_Aplanarity_stack_2","",50,0,1);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(1,20047.33);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(2,2886.549);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(3,742.3939);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(4,253.2446);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(5,93.44817);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(6,47.32651);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(7,27.21365);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(8,13.82609);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(9,9.857424);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(10,7.013435);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(11,3.826484);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(12,1.54429);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(13,1.819879);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(14,0.9093203);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(15,0.6235668);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(16,0.3739054);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(17,0.1106258);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(18,0.4991102);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(19,0.0701326);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(20,0.3759491);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(1,52.43981);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(2,19.63041);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(3,10.07211);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(4,5.926623);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(5,3.521038);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(6,2.649115);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(7,2.072923);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(8,1.398438);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(9,1.229675);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(10,1.081816);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(11,0.7352571);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(12,0.3970577);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(13,0.4879128);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(14,0.3917604);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(15,0.2741586);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(16,0.2202026);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(17,0.06493686);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(18,0.3561938);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(19,0.04981902);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(20,0.3071843);
   VH_tagOnly_Aplanarity_stack_2->SetEntries(390931);

   ci = TColor::GetColor("#660066");
   VH_tagOnly_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_2->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_2,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_3 = new TH1D("VH_tagOnly_Aplanarity_stack_3","",50,0,1);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(1,322632.3);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(2,45887.93);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(3,11995.03);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(4,4324.164);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(5,1897.6);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(6,964.1414);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(7,522.1854);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(8,304.6647);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(9,187.5604);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(10,111.2936);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(11,73.23742);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(12,45.961);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(13,28.57979);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(14,19.41891);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(15,12.60744);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(16,5.958553);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(17,3.882608);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(18,2.364019);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(19,1.452018);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(20,0.1502042);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(21,0.3549959);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(22,0.1345586);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(1,144.7392);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(2,53.92326);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(3,27.56273);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(4,16.56931);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(5,10.98684);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(6,7.866263);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(7,5.791992);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(8,4.435526);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(9,3.483999);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(10,2.679215);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(11,2.185404);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(12,1.752017);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(13,1.376025);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(14,1.14268);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(15,0.9281473);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(16,0.6228128);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(17,0.5069317);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(18,0.3965454);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(19,0.3080063);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(20,0.07512884);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(21,0.1620034);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(22,0.09525813);
   VH_tagOnly_Aplanarity_stack_3->SetEntries(6624793);

   ci = TColor::GetColor("#cc00cc");
   VH_tagOnly_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_3->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_3,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_4 = new TH1D("VH_tagOnly_Aplanarity_stack_4","",50,0,1);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(1,14845.19);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(2,1692.327);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(3,435.4886);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(4,139.0449);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(5,56.4722);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(6,24.9162);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(7,15.90951);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(8,7.604233);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(9,3.176311);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(10,7.6881);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(11,1.89743);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(12,1.570758);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(13,0.6730252);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(14,0.7635971);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(15,0.1484544);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(16,0.3193688);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(1,76.4959);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(2,30.19506);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(3,15.70836);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(4,8.776631);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(5,5.078821);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(6,2.494745);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(7,1.479625);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(8,0.9728364);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(9,0.5333101);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(10,3.098189);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(11,0.4796581);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(12,0.4514099);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(13,0.2162553);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(14,0.3451599);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(15,0.1072434);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(16,0.2608187);
   VH_tagOnly_Aplanarity_stack_4->SetEntries(161332);

   ci = TColor::GetColor("#00cccc");
   VH_tagOnly_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_4->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_4,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_5 = new TH1D("VH_tagOnly_Aplanarity_stack_5","",50,0,1);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(1,8799.723);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(2,928.6712);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(3,262.2287);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(4,86.2511);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(5,29.00994);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(6,25.39478);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(7,21.92218);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(8,5.185014);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(9,2.242176);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(10,2.859935);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(11,0.8783151);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(12,1.242777);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(13,0.4085634);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(14,0.0002168231);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(15,0.1683859);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(20,0.1187145);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(1,88.86118);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(2,31.57783);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(3,20.08597);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(4,10.98317);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(5,3.600347);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(6,6.569492);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(7,8.401952);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(8,1.281614);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(9,0.6117671);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(10,1.504003);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(11,0.2703185);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(12,0.539585);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(13,0.1913917);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(14,0.0002168231);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(15,0.1683859);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(20,0.09043222);
   VH_tagOnly_Aplanarity_stack_5->SetEntries(110079);

   ci = TColor::GetColor("#ff99cc");
   VH_tagOnly_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_5->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_5,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_6 = new TH1D("VH_tagOnly_Aplanarity_stack_6","",50,0,1);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(1,76.28871);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(2,7.704682);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(3,1.876927);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(4,0.7492838);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(5,0.6278226);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(6,0.1080637);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(7,0.1969203);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(1,3.040422);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(2,0.9320073);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(3,0.4480539);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(4,0.3097005);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(5,0.2875252);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(6,0.1080637);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(7,0.1392489);
   VH_tagOnly_Aplanarity_stack_6->SetEntries(766);

   ci = TColor::GetColor("#9933ff");
   VH_tagOnly_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_6->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_6,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_7 = new TH1D("VH_tagOnly_Aplanarity_stack_7","",50,0,1);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(1,202.0091);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(2,21.22948);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(3,3.728733);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(4,2.38568);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(5,0.5809405);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(6,0.6044059);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(7,0.0996435);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(8,0.07601985);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(1,4.425148);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(2,1.417969);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(3,0.5966815);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(4,0.4862976);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(5,0.2413274);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(6,0.250102);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(7,0.0996435);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(8,0.07601985);
   VH_tagOnly_Aplanarity_stack_7->SetEntries(2496);

   ci = TColor::GetColor("#3399ff");
   VH_tagOnly_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_7->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_7,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_8 = new TH1D("VH_tagOnly_Aplanarity_stack_8","",50,0,1);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(1,144.189);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(2,16.87199);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(3,3.563198);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(4,1.237765);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(5,0.7960226);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(6,0.6878721);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(8,0.2290902);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(1,5.527608);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(2,1.863418);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(3,0.8384271);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(4,0.5120562);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(5,0.4053771);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(6,0.3518065);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(8,0.2290902);
   VH_tagOnly_Aplanarity_stack_8->SetEntries(834);

   ci = TColor::GetColor("#33ff99");
   VH_tagOnly_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_8->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_8,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_9 = new TH1D("VH_tagOnly_Aplanarity_stack_9","",50,0,1);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(1,64.75394);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(2,6.489112);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(3,1.488152);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(4,0.4644918);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(5,0.209353);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(6,0.1030875);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(7,0.06195071);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(8,0.02843102);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(9,0.01888296);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(10,0.0153631);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(11,0.0039714);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(12,0.005016503);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(13,0.003963109);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(15,0.002294612);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(17,0.0008848379);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(20,0.001478358);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(1,0.2711102);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(2,0.08500589);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(3,0.04148636);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(4,0.0231666);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(5,0.01543806);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(6,0.01104641);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(7,0.008679979);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(8,0.005618348);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(9,0.004646659);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(10,0.004560608);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(11,0.001986464);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(12,0.002580139);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(13,0.002308917);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(15,0.001644687);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(17,0.0008848379);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(20,0.001478358);
   VH_tagOnly_Aplanarity_stack_9->SetEntries(67909);

   ci = TColor::GetColor("#cccc00");
   VH_tagOnly_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_9->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_9,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_10 = new TH1D("VH_tagOnly_Aplanarity_stack_10","",50,0,1);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(1,33.51468);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(2,3.739769);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(3,0.8871428);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(4,0.3030088);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(5,0.1524319);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(6,0.05989753);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(7,0.0466004);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(8,0.02021532);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(9,0.01228549);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(10,0.008549418);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(11,0.004730765);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(12,0.003286026);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(13,0.001702238);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(14,0.001678832);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(16,0.0004966983);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(17,0.0003398691);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(19,0.0004381463);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(21,0.0003611448);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(1,0.105878);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(2,0.03487359);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(3,0.01701445);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(4,0.01013257);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(5,0.007247133);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(6,0.004410469);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(7,0.004004984);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(8,0.002630945);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(9,0.002042812);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(10,0.001634921);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(11,0.001378125);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(12,0.001035173);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(13,0.0007702438);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(14,0.0007547528);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(16,0.0003611268);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(17,0.0003398691);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(19,0.0004381463);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(21,0.0003611448);
   VH_tagOnly_Aplanarity_stack_10->SetEntries(122178);

   ci = TColor::GetColor("#0000cc");
   VH_tagOnly_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_10->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_10,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_11 = new TH1D("VH_tagOnly_Aplanarity_stack_11","",50,0,1);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(1,1.564113);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(2,0.1446119);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(3,0.03251455);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(4,0.01257971);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(6,0.001736123);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(1,0.0567808);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(2,0.0173493);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(3,0.008012246);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(4,0.005226104);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(6,0.001736123);
   VH_tagOnly_Aplanarity_stack_11->SetEntries(888);

   ci = TColor::GetColor("#cc0000");
   VH_tagOnly_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_11->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_11,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_12 = new TH1D("VH_tagOnly_Aplanarity_stack_12","",50,0,1);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(1,0.7466573);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(2,0.08078894);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(3,0.02065006);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(4,0.007250189);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(5,0.002633383);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(6,0.0009468242);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(7,0.0006445096);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(8,0.001458604);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(9,0.0004297189);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(17,0.0002685819);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(1,0.01470872);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(2,0.004812859);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(3,0.002429019);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(4,0.001513212);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(5,0.0008911909);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(6,0.0004856896);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(7,0.0004612644);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(8,0.0006179336);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(9,0.0004297189);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(17,0.0002685819);
   VH_tagOnly_Aplanarity_stack_12->SetEntries(3081);

   ci = TColor::GetColor("#00cc00");
   VH_tagOnly_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_12->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_tagOnly_Aplanarity__91 = new TH1D("VH_tagOnly_Aplanarity__91","",50,0,1);
   VH_tagOnly_Aplanarity__91->SetBinContent(0,1);
   VH_tagOnly_Aplanarity__91->SetBinContent(1,3005219);
   VH_tagOnly_Aplanarity__91->SetBinContent(2,418992);
   VH_tagOnly_Aplanarity__91->SetBinContent(3,106195);
   VH_tagOnly_Aplanarity__91->SetBinContent(4,34830);
   VH_tagOnly_Aplanarity__91->SetBinContent(5,13496);
   VH_tagOnly_Aplanarity__91->SetBinContent(6,6431);
   VH_tagOnly_Aplanarity__91->SetBinContent(7,3408);
   VH_tagOnly_Aplanarity__91->SetBinContent(8,1878);
   VH_tagOnly_Aplanarity__91->SetBinContent(9,1128);
   VH_tagOnly_Aplanarity__91->SetBinContent(10,695);
   VH_tagOnly_Aplanarity__91->SetBinContent(11,413);
   VH_tagOnly_Aplanarity__91->SetBinContent(12,269);
   VH_tagOnly_Aplanarity__91->SetBinContent(13,186);
   VH_tagOnly_Aplanarity__91->SetBinContent(14,98);
   VH_tagOnly_Aplanarity__91->SetBinContent(15,81);
   VH_tagOnly_Aplanarity__91->SetBinContent(16,30);
   VH_tagOnly_Aplanarity__91->SetBinContent(17,21);
   VH_tagOnly_Aplanarity__91->SetBinContent(18,11);
   VH_tagOnly_Aplanarity__91->SetBinContent(19,10);
   VH_tagOnly_Aplanarity__91->SetBinContent(20,8);
   VH_tagOnly_Aplanarity__91->SetBinError(0,1);
   VH_tagOnly_Aplanarity__91->SetBinError(1,1733.557);
   VH_tagOnly_Aplanarity__91->SetBinError(2,647.2959);
   VH_tagOnly_Aplanarity__91->SetBinError(3,325.8757);
   VH_tagOnly_Aplanarity__91->SetBinError(4,186.628);
   VH_tagOnly_Aplanarity__91->SetBinError(5,116.1723);
   VH_tagOnly_Aplanarity__91->SetBinError(6,80.19352);
   VH_tagOnly_Aplanarity__91->SetBinError(7,58.37808);
   VH_tagOnly_Aplanarity__91->SetBinError(8,43.3359);
   VH_tagOnly_Aplanarity__91->SetBinError(9,33.58571);
   VH_tagOnly_Aplanarity__91->SetBinError(10,26.36285);
   VH_tagOnly_Aplanarity__91->SetBinError(11,20.3224);
   VH_tagOnly_Aplanarity__91->SetBinError(12,16.40122);
   VH_tagOnly_Aplanarity__91->SetBinError(13,13.63818);
   VH_tagOnly_Aplanarity__91->SetBinError(14,9.899495);
   VH_tagOnly_Aplanarity__91->SetBinError(15,9);
   VH_tagOnly_Aplanarity__91->SetBinError(16,5.477226);
   VH_tagOnly_Aplanarity__91->SetBinError(17,4.582576);
   VH_tagOnly_Aplanarity__91->SetBinError(18,3.316625);
   VH_tagOnly_Aplanarity__91->SetBinError(19,3.162278);
   VH_tagOnly_Aplanarity__91->SetBinError(20,2.828427);
   VH_tagOnly_Aplanarity__91->SetEntries(3593449);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__91->SetLineColor(ci);
   VH_tagOnly_Aplanarity__91->SetLineWidth(2);
   VH_tagOnly_Aplanarity__91->SetMarkerStyle(20);
   VH_tagOnly_Aplanarity__91->SetMarkerSize(1.2);
   VH_tagOnly_Aplanarity__91->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity__91->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__91->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__91->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__91->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__91->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__91->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__91->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__91->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__91->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_Aplanarity_fx1091[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fy1091[50] = { 2199831, 316923.8, 79470.94, 26650.83, 8106.893, 4216.151, 2698.064, 978.7664, 1203.022, 257.8689, 250.7435, 399.8394, 128.7863, 32.27906, 52.00405, 7.08055, 17.61704,
   2.863129, 1.522589, 0.6463462, 0.355357, 0.1345586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fex1091[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fey1091[50] = { 28679.4, 17762.61, 4151.626, 2219.508, 853.5631, 618.6069, 489.6474, 94.39998, 364.9678, 39.44675, 47.04048, 232.6655, 37.12858, 8.692941, 18.07293, 0.8293307, 9.454826,
   0.5330312, 0.3120096, 0.3289175, 0.1620038, 0.09525813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_tagOnly_Aplanarity_fx1091,Graph_from_VH_tagOnly_Aplanarity_fy1091,Graph_from_VH_tagOnly_Aplanarity_fex1091,Graph_from_VH_tagOnly_Aplanarity_fey1091);
   gre->SetName("Graph_from_VH_tagOnly_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_Aplanarity1091 = new TH1F("Graph_Graph_from_VH_tagOnly_Aplanarity1091","",100,0,1.1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->SetMinimum(0);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->SetMaximum(2451362);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_Aplanarity1091);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagOnly_Aplanarity","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagOnly_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_tagOnly_16->cd();
  
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
   
   TH1D *data_mc_ratio__92 = new TH1D("data_mc_ratio__92","",50,0,1);
   data_mc_ratio__92->SetBinContent(1,1.366113);
   data_mc_ratio__92->SetBinContent(2,1.322059);
   data_mc_ratio__92->SetBinContent(3,1.336275);
   data_mc_ratio__92->SetBinContent(4,1.306901);
   data_mc_ratio__92->SetBinContent(5,1.664756);
   data_mc_ratio__92->SetBinContent(6,1.525325);
   data_mc_ratio__92->SetBinContent(7,1.263128);
   data_mc_ratio__92->SetBinContent(8,1.918742);
   data_mc_ratio__92->SetBinContent(9,0.9376389);
   data_mc_ratio__92->SetBinContent(10,2.695168);
   data_mc_ratio__92->SetBinContent(11,1.647101);
   data_mc_ratio__92->SetBinContent(12,0.6727701);
   data_mc_ratio__92->SetBinContent(13,1.444253);
   data_mc_ratio__92->SetBinContent(14,3.036024);
   data_mc_ratio__92->SetBinContent(15,1.557571);
   data_mc_ratio__92->SetBinContent(16,4.236959);
   data_mc_ratio__92->SetBinContent(17,1.192027);
   data_mc_ratio__92->SetBinContent(18,3.841951);
   data_mc_ratio__92->SetBinContent(19,6.567762);
   data_mc_ratio__92->SetBinContent(20,12.37727);
   data_mc_ratio__92->SetBinError(1,0.0007880408);
   data_mc_ratio__92->SetBinError(2,0.002042434);
   data_mc_ratio__92->SetBinError(3,0.004100565);
   data_mc_ratio__92->SetBinError(4,0.007002707);
   data_mc_ratio__92->SetBinError(5,0.01433006);
   data_mc_ratio__92->SetBinError(6,0.01902055);
   data_mc_ratio__92->SetBinError(7,0.02163702);
   data_mc_ratio__92->SetBinError(8,0.04427604);
   data_mc_ratio__92->SetBinError(9,0.02791779);
   data_mc_ratio__92->SetBinError(10,0.1022336);
   data_mc_ratio__92->SetBinError(11,0.08104857);
   data_mc_ratio__92->SetBinError(12,0.04101952);
   data_mc_ratio__92->SetBinError(13,0.1058977);
   data_mc_ratio__92->SetBinError(14,0.3066847);
   data_mc_ratio__92->SetBinError(15,0.1730635);
   data_mc_ratio__92->SetBinError(16,0.7735593);
   data_mc_ratio__92->SetBinError(17,0.2601217);
   data_mc_ratio__92->SetBinError(18,1.158392);
   data_mc_ratio__92->SetBinError(19,2.076909);
   data_mc_ratio__92->SetBinError(20,4.376025);
   data_mc_ratio__92->SetMinimum(0.4);
   data_mc_ratio__92->SetMaximum(1.6);
   data_mc_ratio__92->SetEntries(38.4371);
   data_mc_ratio__92->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__92->SetLineColor(ci);
   data_mc_ratio__92->SetLineWidth(2);
   data_mc_ratio__92->SetMarkerStyle(20);
   data_mc_ratio__92->SetMarkerSize(1.2);
   data_mc_ratio__92->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__92->GetXaxis()->SetRange(1,50);
   data_mc_ratio__92->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__92->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__92->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__92->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__92->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__92->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__92->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__92->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__92->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__92->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__92->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__92->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__92->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__92->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__92->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__92->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1092[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1092[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1092[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1092[50] = { 0.01303709, 0.05604694, 0.0522408, 0.08328099, 0.1052886, 0.1467231, 0.181481, 0.09644791, 0.3033759, 0.1529721, 0.187604, 0.5818974, 0.2882959, 0.2693059, 0.3475294, 0.117128, 0.5366863,
   0.1861709, 0.2049205, 0.5088875, 0.4558903, 0.7079305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1092,Graph_from_mc_statistical_error_fy1092,Graph_from_mc_statistical_error_fex1092,Graph_from_mc_statistical_error_fey1092);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1092 = new TH1F("Graph_Graph_from_mc_statistical_error1092","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1092->SetMinimum(0.1504834);
   Graph_Graph_from_mc_statistical_error1092->SetMaximum(1.849517);
   Graph_Graph_from_mc_statistical_error1092->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1092->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1092->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1092);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagOnly_16->cd();
   Aplanarity_tagOnly_16->Modified();
   Aplanarity_tagOnly_16->cd();
   Aplanarity_tagOnly_16->SetSelected(Aplanarity_tagOnly_16);
}
