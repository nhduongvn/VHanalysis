void H_dR_both_17()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Fri Jul 14 13:38:45 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(0,0,1,1);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetFillStyle(4000);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetFrameFillStyle(1000);
   H_dR_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-517.7847,6.525,517276.9);
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
   st->SetMaximum(443330.9);
   
   TH1F *st_stack_214 = new TH1F("st_stack_214","",30,0,6);
   st_stack_214->SetMinimum(0.01);
   st_stack_214->SetMaximum(465497.4);
   st_stack_214->SetDirectory(0);
   st_stack_214->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_214->SetLineColor(ci);
   st_stack_214->GetXaxis()->SetRange(1,31);
   st_stack_214->GetXaxis()->SetLabelFont(42);
   st_stack_214->GetXaxis()->SetLabelSize(0.035);
   st_stack_214->GetXaxis()->SetTitleSize(0.035);
   st_stack_214->GetXaxis()->SetTitleFont(42);
   st_stack_214->GetYaxis()->SetTitle("Events/0.2");
   st_stack_214->GetYaxis()->SetLabelFont(42);
   st_stack_214->GetYaxis()->SetLabelSize(0.05);
   st_stack_214->GetYaxis()->SetTitleSize(0.057);
   st_stack_214->GetYaxis()->SetTitleOffset(1.2);
   st_stack_214->GetYaxis()->SetTitleFont(42);
   st_stack_214->GetZaxis()->SetLabelFont(42);
   st_stack_214->GetZaxis()->SetLabelSize(0.035);
   st_stack_214->GetZaxis()->SetTitleSize(0.035);
   st_stack_214->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_214);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,44.80413);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,78649.88);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,79020.05);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,64184.92);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,60026.68);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,57523.37);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,61707.43);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,72408.73);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,75894.51);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,97367.23);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,87041.35);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,101316.1);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,111880.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,142955.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,162018.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,87263.65);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,68347.92);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,51791.66);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,41991.26);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,29684.31);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,21483.09);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,25708.29);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,11704.09);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,8513.867);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,3581.634);
   VbbHcc_both_H_dR_stack_1->SetBinContent(27,1574.988);
   VbbHcc_both_H_dR_stack_1->SetBinContent(28,280.7187);
   VbbHcc_both_H_dR_stack_1->SetBinContent(29,4.70468);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,32.6375);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,2891.863);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,3321.423);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,3215.859);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,2929.248);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,2743.096);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,3153.765);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,15098.03);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,3996.557);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,14299.84);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,3916.925);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,4187.456);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,3893.412);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,5638.669);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,18530.67);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,3541.11);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,3428.966);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,3106.265);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,2742.931);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,1951.533);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,1509.067);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,10568.94);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,1209.345);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,1120.347);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,569.4953);
   VbbHcc_both_H_dR_stack_1->SetBinError(27,497.1081);
   VbbHcc_both_H_dR_stack_1->SetBinError(28,61.13842);
   VbbHcc_both_H_dR_stack_1->SetBinError(29,3.726686);
   VbbHcc_both_H_dR_stack_1->SetEntries(166831);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(2,0.6575792);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,736.573);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,995.7432);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,927.4968);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,857.5379);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,749.7046);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,720.7369);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,735.6946);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,814.3602);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,928.6706);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,1084.331);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,1287.232);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,1455.653);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,1652.945);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,1695.007);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,1038.917);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,703.9652);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,512.2614);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,359.8378);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,250.5989);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,174.3406);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,111.5405);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,77.58043);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,41.72675);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,19.74004);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,8.550812);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,2.422946);
   VbbHcc_both_H_dR_stack_2->SetBinContent(29,0.05259139);
   VbbHcc_both_H_dR_stack_2->SetBinError(2,0.3431097);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,13.22704);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,15.12212);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,14.22112);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,13.3328);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,12.41203);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,12.33531);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,12.39863);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,13.01064);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,13.88932);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,15.05003);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,16.33455);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,17.28237);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,18.33978);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,18.2759);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,13.65738);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,10.81035);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,9.078972);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,7.26078);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,5.897428);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,4.87176);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,3.846441);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,3.101229);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,2.27872);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,1.476579);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,0.9106039);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,0.5238074);
   VbbHcc_both_H_dR_stack_2->SetBinError(29,0.05259139);
   VbbHcc_both_H_dR_stack_2->SetEntries(217888);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_stack_3 = new TH1D("VbbHcc_both_H_dR_stack_3","",30,0,6);
   VbbHcc_both_H_dR_stack_3->SetBinContent(2,7.721529);
   VbbHcc_both_H_dR_stack_3->SetBinContent(3,9040.294);
   VbbHcc_both_H_dR_stack_3->SetBinContent(4,15285.52);
   VbbHcc_both_H_dR_stack_3->SetBinContent(5,17107.87);
   VbbHcc_both_H_dR_stack_3->SetBinContent(6,17120.82);
   VbbHcc_both_H_dR_stack_3->SetBinContent(7,15357.75);
   VbbHcc_both_H_dR_stack_3->SetBinContent(8,14261.57);
   VbbHcc_both_H_dR_stack_3->SetBinContent(9,14554.91);
   VbbHcc_both_H_dR_stack_3->SetBinContent(10,15856.91);
   VbbHcc_both_H_dR_stack_3->SetBinContent(11,18129.23);
   VbbHcc_both_H_dR_stack_3->SetBinContent(12,21210.25);
   VbbHcc_both_H_dR_stack_3->SetBinContent(13,24954.33);
   VbbHcc_both_H_dR_stack_3->SetBinContent(14,29047.76);
   VbbHcc_both_H_dR_stack_3->SetBinContent(15,33101.73);
   VbbHcc_both_H_dR_stack_3->SetBinContent(16,33824.09);
   VbbHcc_both_H_dR_stack_3->SetBinContent(17,19411.78);
   VbbHcc_both_H_dR_stack_3->SetBinContent(18,12199.24);
   VbbHcc_both_H_dR_stack_3->SetBinContent(19,8008.956);
   VbbHcc_both_H_dR_stack_3->SetBinContent(20,5356.985);
   VbbHcc_both_H_dR_stack_3->SetBinContent(21,3545.701);
   VbbHcc_both_H_dR_stack_3->SetBinContent(22,2266.86);
   VbbHcc_both_H_dR_stack_3->SetBinContent(23,1432.883);
   VbbHcc_both_H_dR_stack_3->SetBinContent(24,852.8791);
   VbbHcc_both_H_dR_stack_3->SetBinContent(25,452.3666);
   VbbHcc_both_H_dR_stack_3->SetBinContent(26,213.0712);
   VbbHcc_both_H_dR_stack_3->SetBinContent(27,86.59475);
   VbbHcc_both_H_dR_stack_3->SetBinContent(28,18.9785);
   VbbHcc_both_H_dR_stack_3->SetBinContent(29,1.280808);
   VbbHcc_both_H_dR_stack_3->SetBinError(2,0.7554808);
   VbbHcc_both_H_dR_stack_3->SetBinError(3,26.26702);
   VbbHcc_both_H_dR_stack_3->SetBinError(4,34.14828);
   VbbHcc_both_H_dR_stack_3->SetBinError(5,36.16318);
   VbbHcc_both_H_dR_stack_3->SetBinError(6,36.18732);
   VbbHcc_both_H_dR_stack_3->SetBinError(7,34.28153);
   VbbHcc_both_H_dR_stack_3->SetBinError(8,33.0278);
   VbbHcc_both_H_dR_stack_3->SetBinError(9,33.37886);
   VbbHcc_both_H_dR_stack_3->SetBinError(10,34.89013);
   VbbHcc_both_H_dR_stack_3->SetBinError(11,37.35935);
   VbbHcc_both_H_dR_stack_3->SetBinError(12,40.46205);
   VbbHcc_both_H_dR_stack_3->SetBinError(13,43.95516);
   VbbHcc_both_H_dR_stack_3->SetBinError(14,47.52062);
   VbbHcc_both_H_dR_stack_3->SetBinError(15,50.7854);
   VbbHcc_both_H_dR_stack_3->SetBinError(16,51.37494);
   VbbHcc_both_H_dR_stack_3->SetBinError(17,38.78504);
   VbbHcc_both_H_dR_stack_3->SetBinError(18,30.60722);
   VbbHcc_both_H_dR_stack_3->SetBinError(19,24.68152);
   VbbHcc_both_H_dR_stack_3->SetBinError(20,20.03048);
   VbbHcc_both_H_dR_stack_3->SetBinError(21,16.19724);
   VbbHcc_both_H_dR_stack_3->SetBinError(22,12.86127);
   VbbHcc_both_H_dR_stack_3->SetBinError(23,10.13741);
   VbbHcc_both_H_dR_stack_3->SetBinError(24,7.782947);
   VbbHcc_both_H_dR_stack_3->SetBinError(25,5.603763);
   VbbHcc_both_H_dR_stack_3->SetBinError(26,3.827807);
   VbbHcc_both_H_dR_stack_3->SetBinError(27,2.408629);
   VbbHcc_both_H_dR_stack_3->SetBinError(28,1.090315);
   VbbHcc_both_H_dR_stack_3->SetBinError(29,0.2784059);
   VbbHcc_both_H_dR_stack_3->SetEntries(4843140);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_stack_4 = new TH1D("VbbHcc_both_H_dR_stack_4","",30,0,6);
   VbbHcc_both_H_dR_stack_4->SetBinContent(2,0.4875637);
   VbbHcc_both_H_dR_stack_4->SetBinContent(3,600.1601);
   VbbHcc_both_H_dR_stack_4->SetBinContent(4,670.5679);
   VbbHcc_both_H_dR_stack_4->SetBinContent(5,607.9961);
   VbbHcc_both_H_dR_stack_4->SetBinContent(6,598.8141);
   VbbHcc_both_H_dR_stack_4->SetBinContent(7,576.8198);
   VbbHcc_both_H_dR_stack_4->SetBinContent(8,583.2573);
   VbbHcc_both_H_dR_stack_4->SetBinContent(9,601.2858);
   VbbHcc_both_H_dR_stack_4->SetBinContent(10,627.2209);
   VbbHcc_both_H_dR_stack_4->SetBinContent(11,645.8178);
   VbbHcc_both_H_dR_stack_4->SetBinContent(12,760.8611);
   VbbHcc_both_H_dR_stack_4->SetBinContent(13,933.5957);
   VbbHcc_both_H_dR_stack_4->SetBinContent(14,1055.417);
   VbbHcc_both_H_dR_stack_4->SetBinContent(15,1201.84);
   VbbHcc_both_H_dR_stack_4->SetBinContent(16,1250.053);
   VbbHcc_both_H_dR_stack_4->SetBinContent(17,726.6598);
   VbbHcc_both_H_dR_stack_4->SetBinContent(18,520.4363);
   VbbHcc_both_H_dR_stack_4->SetBinContent(19,360.294);
   VbbHcc_both_H_dR_stack_4->SetBinContent(20,279.995);
   VbbHcc_both_H_dR_stack_4->SetBinContent(21,203.4384);
   VbbHcc_both_H_dR_stack_4->SetBinContent(22,135.3587);
   VbbHcc_both_H_dR_stack_4->SetBinContent(23,90.1344);
   VbbHcc_both_H_dR_stack_4->SetBinContent(24,56.28463);
   VbbHcc_both_H_dR_stack_4->SetBinContent(25,28.14183);
   VbbHcc_both_H_dR_stack_4->SetBinContent(26,11.66716);
   VbbHcc_both_H_dR_stack_4->SetBinContent(27,7.101742);
   VbbHcc_both_H_dR_stack_4->SetBinContent(28,1.138983);
   VbbHcc_both_H_dR_stack_4->SetBinContent(29,0.02468319);
   VbbHcc_both_H_dR_stack_4->SetBinError(2,0.3522129);
   VbbHcc_both_H_dR_stack_4->SetBinError(3,14.29384);
   VbbHcc_both_H_dR_stack_4->SetBinError(4,14.69629);
   VbbHcc_both_H_dR_stack_4->SetBinError(5,14.38587);
   VbbHcc_both_H_dR_stack_4->SetBinError(6,18.62155);
   VbbHcc_both_H_dR_stack_4->SetBinError(7,18.1005);
   VbbHcc_both_H_dR_stack_4->SetBinError(8,18.98727);
   VbbHcc_both_H_dR_stack_4->SetBinError(9,18.16139);
   VbbHcc_both_H_dR_stack_4->SetBinError(10,19.55474);
   VbbHcc_both_H_dR_stack_4->SetBinError(11,14.61611);
   VbbHcc_both_H_dR_stack_4->SetBinError(12,18.89621);
   VbbHcc_both_H_dR_stack_4->SetBinError(13,22.39071);
   VbbHcc_both_H_dR_stack_4->SetBinError(14,22.23646);
   VbbHcc_both_H_dR_stack_4->SetBinError(15,23.82265);
   VbbHcc_both_H_dR_stack_4->SetBinError(16,24.77269);
   VbbHcc_both_H_dR_stack_4->SetBinError(17,16.75648);
   VbbHcc_both_H_dR_stack_4->SetBinError(18,15.65988);
   VbbHcc_both_H_dR_stack_4->SetBinError(19,12.14869);
   VbbHcc_both_H_dR_stack_4->SetBinError(20,12.47479);
   VbbHcc_both_H_dR_stack_4->SetBinError(21,10.12744);
   VbbHcc_both_H_dR_stack_4->SetBinError(22,8.221732);
   VbbHcc_both_H_dR_stack_4->SetBinError(23,5.324386);
   VbbHcc_both_H_dR_stack_4->SetBinError(24,3.519026);
   VbbHcc_both_H_dR_stack_4->SetBinError(25,3.406773);
   VbbHcc_both_H_dR_stack_4->SetBinError(26,1.345581);
   VbbHcc_both_H_dR_stack_4->SetBinError(27,1.302827);
   VbbHcc_both_H_dR_stack_4->SetBinError(28,0.4790835);
   VbbHcc_both_H_dR_stack_4->SetBinError(29,0.02468319);
   VbbHcc_both_H_dR_stack_4->SetEntries(99118);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_stack_5 = new TH1D("VbbHcc_both_H_dR_stack_5","",30,0,6);
   VbbHcc_both_H_dR_stack_5->SetBinContent(2,0.07302196);
   VbbHcc_both_H_dR_stack_5->SetBinContent(3,380.1322);
   VbbHcc_both_H_dR_stack_5->SetBinContent(4,477.5013);
   VbbHcc_both_H_dR_stack_5->SetBinContent(5,408.7003);
   VbbHcc_both_H_dR_stack_5->SetBinContent(6,392.227);
   VbbHcc_both_H_dR_stack_5->SetBinContent(7,347.5787);
   VbbHcc_both_H_dR_stack_5->SetBinContent(8,352.1124);
   VbbHcc_both_H_dR_stack_5->SetBinContent(9,321.9457);
   VbbHcc_both_H_dR_stack_5->SetBinContent(10,364.7674);
   VbbHcc_both_H_dR_stack_5->SetBinContent(11,376.9296);
   VbbHcc_both_H_dR_stack_5->SetBinContent(12,384.3741);
   VbbHcc_both_H_dR_stack_5->SetBinContent(13,474.3731);
   VbbHcc_both_H_dR_stack_5->SetBinContent(14,523.1847);
   VbbHcc_both_H_dR_stack_5->SetBinContent(15,572.2003);
   VbbHcc_both_H_dR_stack_5->SetBinContent(16,677.8229);
   VbbHcc_both_H_dR_stack_5->SetBinContent(17,347.7773);
   VbbHcc_both_H_dR_stack_5->SetBinContent(18,233.1049);
   VbbHcc_both_H_dR_stack_5->SetBinContent(19,177.8036);
   VbbHcc_both_H_dR_stack_5->SetBinContent(20,135.5752);
   VbbHcc_both_H_dR_stack_5->SetBinContent(21,106.119);
   VbbHcc_both_H_dR_stack_5->SetBinContent(22,88.19273);
   VbbHcc_both_H_dR_stack_5->SetBinContent(23,63.93203);
   VbbHcc_both_H_dR_stack_5->SetBinContent(24,28.52617);
   VbbHcc_both_H_dR_stack_5->SetBinContent(25,19.44583);
   VbbHcc_both_H_dR_stack_5->SetBinContent(26,6.937367);
   VbbHcc_both_H_dR_stack_5->SetBinContent(27,10.99315);
   VbbHcc_both_H_dR_stack_5->SetBinContent(28,1.732703);
   VbbHcc_both_H_dR_stack_5->SetBinContent(29,0.03406838);
   VbbHcc_both_H_dR_stack_5->SetBinError(2,0.05439093);
   VbbHcc_both_H_dR_stack_5->SetBinError(3,15.84683);
   VbbHcc_both_H_dR_stack_5->SetBinError(4,23.92781);
   VbbHcc_both_H_dR_stack_5->SetBinError(5,23.2594);
   VbbHcc_both_H_dR_stack_5->SetBinError(6,28.65336);
   VbbHcc_both_H_dR_stack_5->SetBinError(7,23.47095);
   VbbHcc_both_H_dR_stack_5->SetBinError(8,23.80227);
   VbbHcc_both_H_dR_stack_5->SetBinError(9,20.12333);
   VbbHcc_both_H_dR_stack_5->SetBinError(10,22.30274);
   VbbHcc_both_H_dR_stack_5->SetBinError(11,22.51788);
   VbbHcc_both_H_dR_stack_5->SetBinError(12,22.05635);
   VbbHcc_both_H_dR_stack_5->SetBinError(13,25.74766);
   VbbHcc_both_H_dR_stack_5->SetBinError(14,25.52433);
   VbbHcc_both_H_dR_stack_5->SetBinError(15,25.76582);
   VbbHcc_both_H_dR_stack_5->SetBinError(16,33.93644);
   VbbHcc_both_H_dR_stack_5->SetBinError(17,18.00144);
   VbbHcc_both_H_dR_stack_5->SetBinError(18,11.17452);
   VbbHcc_both_H_dR_stack_5->SetBinError(19,15.37718);
   VbbHcc_both_H_dR_stack_5->SetBinError(20,10.69029);
   VbbHcc_both_H_dR_stack_5->SetBinError(21,7.331887);
   VbbHcc_both_H_dR_stack_5->SetBinError(22,14.08867);
   VbbHcc_both_H_dR_stack_5->SetBinError(23,11.04885);
   VbbHcc_both_H_dR_stack_5->SetBinError(24,3.500494);
   VbbHcc_both_H_dR_stack_5->SetBinError(25,3.391848);
   VbbHcc_both_H_dR_stack_5->SetBinError(26,1.003872);
   VbbHcc_both_H_dR_stack_5->SetBinError(27,7.575266);
   VbbHcc_both_H_dR_stack_5->SetBinError(28,1.180187);
   VbbHcc_both_H_dR_stack_5->SetBinError(29,0.03406838);
   VbbHcc_both_H_dR_stack_5->SetEntries(45557);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_stack_6 = new TH1D("VbbHcc_both_H_dR_stack_6","",30,0,6);
   VbbHcc_both_H_dR_stack_6->SetBinContent(3,3.001572);
   VbbHcc_both_H_dR_stack_6->SetBinContent(4,3.343159);
   VbbHcc_both_H_dR_stack_6->SetBinContent(5,3.302747);
   VbbHcc_both_H_dR_stack_6->SetBinContent(6,2.24835);
   VbbHcc_both_H_dR_stack_6->SetBinContent(7,2.993479);
   VbbHcc_both_H_dR_stack_6->SetBinContent(8,1.859756);
   VbbHcc_both_H_dR_stack_6->SetBinContent(9,0.7481368);
   VbbHcc_both_H_dR_stack_6->SetBinContent(10,2.880509);
   VbbHcc_both_H_dR_stack_6->SetBinContent(11,2.228378);
   VbbHcc_both_H_dR_stack_6->SetBinContent(12,1.948673);
   VbbHcc_both_H_dR_stack_6->SetBinContent(13,3.303893);
   VbbHcc_both_H_dR_stack_6->SetBinContent(14,2.536576);
   VbbHcc_both_H_dR_stack_6->SetBinContent(15,4.559547);
   VbbHcc_both_H_dR_stack_6->SetBinContent(16,3.935794);
   VbbHcc_both_H_dR_stack_6->SetBinContent(17,1.834451);
   VbbHcc_both_H_dR_stack_6->SetBinContent(18,1.96667);
   VbbHcc_both_H_dR_stack_6->SetBinContent(19,0.6228721);
   VbbHcc_both_H_dR_stack_6->SetBinContent(20,0.4678262);
   VbbHcc_both_H_dR_stack_6->SetBinContent(21,0.2081639);
   VbbHcc_both_H_dR_stack_6->SetBinError(3,0.8051648);
   VbbHcc_both_H_dR_stack_6->SetBinError(4,0.8758758);
   VbbHcc_both_H_dR_stack_6->SetBinError(5,0.8697222);
   VbbHcc_both_H_dR_stack_6->SetBinError(6,0.7175974);
   VbbHcc_both_H_dR_stack_6->SetBinError(7,0.8423641);
   VbbHcc_both_H_dR_stack_6->SetBinError(8,0.6614865);
   VbbHcc_both_H_dR_stack_6->SetBinError(9,0.4322558);
   VbbHcc_both_H_dR_stack_6->SetBinError(10,0.8131549);
   VbbHcc_both_H_dR_stack_6->SetBinError(11,0.6881712);
   VbbHcc_both_H_dR_stack_6->SetBinError(12,0.6598657);
   VbbHcc_both_H_dR_stack_6->SetBinError(13,0.8760555);
   VbbHcc_both_H_dR_stack_6->SetBinError(14,0.7783505);
   VbbHcc_both_H_dR_stack_6->SetBinError(15,1.012726);
   VbbHcc_both_H_dR_stack_6->SetBinError(16,0.9438723);
   VbbHcc_both_H_dR_stack_6->SetBinError(17,0.6463304);
   VbbHcc_both_H_dR_stack_6->SetBinError(18,0.6595708);
   VbbHcc_both_H_dR_stack_6->SetBinError(19,0.3602013);
   VbbHcc_both_H_dR_stack_6->SetBinError(20,0.3464318);
   VbbHcc_both_H_dR_stack_6->SetBinError(21,0.2081639);
   VbbHcc_both_H_dR_stack_6->SetEntries(204);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_stack_7 = new TH1D("VbbHcc_both_H_dR_stack_7","",30,0,6);
   VbbHcc_both_H_dR_stack_7->SetBinContent(3,5.922974);
   VbbHcc_both_H_dR_stack_7->SetBinContent(4,11.7862);
   VbbHcc_both_H_dR_stack_7->SetBinContent(5,7.791804);
   VbbHcc_both_H_dR_stack_7->SetBinContent(6,4.961776);
   VbbHcc_both_H_dR_stack_7->SetBinContent(7,2.538094);
   VbbHcc_both_H_dR_stack_7->SetBinContent(8,2.890198);
   VbbHcc_both_H_dR_stack_7->SetBinContent(9,5.459154);
   VbbHcc_both_H_dR_stack_7->SetBinContent(10,3.003066);
   VbbHcc_both_H_dR_stack_7->SetBinContent(11,3.848622);
   VbbHcc_both_H_dR_stack_7->SetBinContent(12,5.766088);
   VbbHcc_both_H_dR_stack_7->SetBinContent(13,6.231808);
   VbbHcc_both_H_dR_stack_7->SetBinContent(14,6.442186);
   VbbHcc_both_H_dR_stack_7->SetBinContent(15,9.081251);
   VbbHcc_both_H_dR_stack_7->SetBinContent(16,9.08344);
   VbbHcc_both_H_dR_stack_7->SetBinContent(17,6.775766);
   VbbHcc_both_H_dR_stack_7->SetBinContent(18,3.387945);
   VbbHcc_both_H_dR_stack_7->SetBinContent(19,1.694659);
   VbbHcc_both_H_dR_stack_7->SetBinContent(20,1.618017);
   VbbHcc_both_H_dR_stack_7->SetBinContent(21,0.7404624);
   VbbHcc_both_H_dR_stack_7->SetBinContent(22,0.8003906);
   VbbHcc_both_H_dR_stack_7->SetBinContent(24,0.05969659);
   VbbHcc_both_H_dR_stack_7->SetBinContent(25,0.1762365);
   VbbHcc_both_H_dR_stack_7->SetBinError(3,0.9791449);
   VbbHcc_both_H_dR_stack_7->SetBinError(4,1.417925);
   VbbHcc_both_H_dR_stack_7->SetBinError(5,1.15315);
   VbbHcc_both_H_dR_stack_7->SetBinError(6,0.9148887);
   VbbHcc_both_H_dR_stack_7->SetBinError(7,0.6534477);
   VbbHcc_both_H_dR_stack_7->SetBinError(8,0.7074197);
   VbbHcc_both_H_dR_stack_7->SetBinError(9,0.9631185);
   VbbHcc_both_H_dR_stack_7->SetBinError(10,0.6982553);
   VbbHcc_both_H_dR_stack_7->SetBinError(11,0.7957848);
   VbbHcc_both_H_dR_stack_7->SetBinError(12,0.9773506);
   VbbHcc_both_H_dR_stack_7->SetBinError(13,1.06034);
   VbbHcc_both_H_dR_stack_7->SetBinError(14,1.046733);
   VbbHcc_both_H_dR_stack_7->SetBinError(15,1.233098);
   VbbHcc_both_H_dR_stack_7->SetBinError(16,1.244015);
   VbbHcc_both_H_dR_stack_7->SetBinError(17,1.082553);
   VbbHcc_both_H_dR_stack_7->SetBinError(18,0.7651379);
   VbbHcc_both_H_dR_stack_7->SetBinError(19,0.5462469);
   VbbHcc_both_H_dR_stack_7->SetBinError(20,0.5217249);
   VbbHcc_both_H_dR_stack_7->SetBinError(21,0.3436586);
   VbbHcc_both_H_dR_stack_7->SetBinError(22,0.3602423);
   VbbHcc_both_H_dR_stack_7->SetBinError(24,0.05969659);
   VbbHcc_both_H_dR_stack_7->SetBinError(25,0.1762365);
   VbbHcc_both_H_dR_stack_7->SetEntries(620);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_stack_8 = new TH1D("VbbHcc_both_H_dR_stack_8","",30,0,6);
   VbbHcc_both_H_dR_stack_8->SetBinContent(3,6.175331);
   VbbHcc_both_H_dR_stack_8->SetBinContent(4,10.35118);
   VbbHcc_both_H_dR_stack_8->SetBinContent(5,12.72478);
   VbbHcc_both_H_dR_stack_8->SetBinContent(6,6.082401);
   VbbHcc_both_H_dR_stack_8->SetBinContent(7,4.333268);
   VbbHcc_both_H_dR_stack_8->SetBinContent(8,3.377488);
   VbbHcc_both_H_dR_stack_8->SetBinContent(9,2.980448);
   VbbHcc_both_H_dR_stack_8->SetBinContent(10,3.730774);
   VbbHcc_both_H_dR_stack_8->SetBinContent(11,6.062961);
   VbbHcc_both_H_dR_stack_8->SetBinContent(12,5.367442);
   VbbHcc_both_H_dR_stack_8->SetBinContent(13,5.672809);
   VbbHcc_both_H_dR_stack_8->SetBinContent(14,6.427097);
   VbbHcc_both_H_dR_stack_8->SetBinContent(15,7.315852);
   VbbHcc_both_H_dR_stack_8->SetBinContent(16,8.7485);
   VbbHcc_both_H_dR_stack_8->SetBinContent(17,4.849133);
   VbbHcc_both_H_dR_stack_8->SetBinContent(18,1.745463);
   VbbHcc_both_H_dR_stack_8->SetBinContent(19,1.003761);
   VbbHcc_both_H_dR_stack_8->SetBinContent(20,1.413727);
   VbbHcc_both_H_dR_stack_8->SetBinContent(21,1.0693);
   VbbHcc_both_H_dR_stack_8->SetBinContent(22,0.4452105);
   VbbHcc_both_H_dR_stack_8->SetBinContent(23,0.4206514);
   VbbHcc_both_H_dR_stack_8->SetBinContent(24,0.3567517);
   VbbHcc_both_H_dR_stack_8->SetBinContent(25,0.1856008);
   VbbHcc_both_H_dR_stack_8->SetBinError(3,1.168556);
   VbbHcc_both_H_dR_stack_8->SetBinError(4,1.515479);
   VbbHcc_both_H_dR_stack_8->SetBinError(5,1.685528);
   VbbHcc_both_H_dR_stack_8->SetBinError(6,1.144316);
   VbbHcc_both_H_dR_stack_8->SetBinError(7,0.9785453);
   VbbHcc_both_H_dR_stack_8->SetBinError(8,0.8639687);
   VbbHcc_both_H_dR_stack_8->SetBinError(9,0.8343547);
   VbbHcc_both_H_dR_stack_8->SetBinError(10,0.8756408);
   VbbHcc_both_H_dR_stack_8->SetBinError(11,1.157408);
   VbbHcc_both_H_dR_stack_8->SetBinError(12,1.104971);
   VbbHcc_both_H_dR_stack_8->SetBinError(13,1.129004);
   VbbHcc_both_H_dR_stack_8->SetBinError(14,1.160511);
   VbbHcc_both_H_dR_stack_8->SetBinError(15,1.251937);
   VbbHcc_both_H_dR_stack_8->SetBinError(16,1.38185);
   VbbHcc_both_H_dR_stack_8->SetBinError(17,1.009983);
   VbbHcc_both_H_dR_stack_8->SetBinError(18,0.6276971);
   VbbHcc_both_H_dR_stack_8->SetBinError(19,0.4382345);
   VbbHcc_both_H_dR_stack_8->SetBinError(20,0.5460225);
   VbbHcc_both_H_dR_stack_8->SetBinError(21,0.4858596);
   VbbHcc_both_H_dR_stack_8->SetBinError(22,0.316169);
   VbbHcc_both_H_dR_stack_8->SetBinError(23,0.2975645);
   VbbHcc_both_H_dR_stack_8->SetBinError(24,0.2547636);
   VbbHcc_both_H_dR_stack_8->SetBinError(25,0.1856008);
   VbbHcc_both_H_dR_stack_8->SetEntries(481);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_stack_9 = new TH1D("VbbHcc_both_H_dR_stack_9","",30,0,6);
   VbbHcc_both_H_dR_stack_9->SetBinContent(2,0.004195886);
   VbbHcc_both_H_dR_stack_9->SetBinContent(3,4.913691);
   VbbHcc_both_H_dR_stack_9->SetBinContent(4,7.201204);
   VbbHcc_both_H_dR_stack_9->SetBinContent(5,6.525326);
   VbbHcc_both_H_dR_stack_9->SetBinContent(6,4.748171);
   VbbHcc_both_H_dR_stack_9->SetBinContent(7,3.142136);
   VbbHcc_both_H_dR_stack_9->SetBinContent(8,2.366094);
   VbbHcc_both_H_dR_stack_9->SetBinContent(9,2.364943);
   VbbHcc_both_H_dR_stack_9->SetBinContent(10,2.535748);
   VbbHcc_both_H_dR_stack_9->SetBinContent(11,3.020578);
   VbbHcc_both_H_dR_stack_9->SetBinContent(12,3.529306);
   VbbHcc_both_H_dR_stack_9->SetBinContent(13,4.382242);
   VbbHcc_both_H_dR_stack_9->SetBinContent(14,5.157374);
   VbbHcc_both_H_dR_stack_9->SetBinContent(15,6.197728);
   VbbHcc_both_H_dR_stack_9->SetBinContent(16,6.116182);
   VbbHcc_both_H_dR_stack_9->SetBinContent(17,2.815296);
   VbbHcc_both_H_dR_stack_9->SetBinContent(18,1.448409);
   VbbHcc_both_H_dR_stack_9->SetBinContent(19,0.9526829);
   VbbHcc_both_H_dR_stack_9->SetBinContent(20,0.649786);
   VbbHcc_both_H_dR_stack_9->SetBinContent(21,0.4464046);
   VbbHcc_both_H_dR_stack_9->SetBinContent(22,0.3036048);
   VbbHcc_both_H_dR_stack_9->SetBinContent(23,0.1473316);
   VbbHcc_both_H_dR_stack_9->SetBinContent(24,0.1200143);
   VbbHcc_both_H_dR_stack_9->SetBinContent(25,0.06444081);
   VbbHcc_both_H_dR_stack_9->SetBinContent(26,0.03509859);
   VbbHcc_both_H_dR_stack_9->SetBinContent(27,0.008194664);
   VbbHcc_both_H_dR_stack_9->SetBinError(2,0.002968271);
   VbbHcc_both_H_dR_stack_9->SetBinError(3,0.09787886);
   VbbHcc_both_H_dR_stack_9->SetBinError(4,0.1176447);
   VbbHcc_both_H_dR_stack_9->SetBinError(5,0.1124232);
   VbbHcc_both_H_dR_stack_9->SetBinError(6,0.09568374);
   VbbHcc_both_H_dR_stack_9->SetBinError(7,0.07747615);
   VbbHcc_both_H_dR_stack_9->SetBinError(8,0.0665046);
   VbbHcc_both_H_dR_stack_9->SetBinError(9,0.06685017);
   VbbHcc_both_H_dR_stack_9->SetBinError(10,0.06838657);
   VbbHcc_both_H_dR_stack_9->SetBinError(11,0.07564853);
   VbbHcc_both_H_dR_stack_9->SetBinError(12,0.08166583);
   VbbHcc_both_H_dR_stack_9->SetBinError(13,0.09076116);
   VbbHcc_both_H_dR_stack_9->SetBinError(14,0.09856566);
   VbbHcc_both_H_dR_stack_9->SetBinError(15,0.1086333);
   VbbHcc_both_H_dR_stack_9->SetBinError(16,0.1077948);
   VbbHcc_both_H_dR_stack_9->SetBinError(17,0.07295721);
   VbbHcc_both_H_dR_stack_9->SetBinError(18,0.05195038);
   VbbHcc_both_H_dR_stack_9->SetBinError(19,0.04192567);
   VbbHcc_both_H_dR_stack_9->SetBinError(20,0.03481522);
   VbbHcc_both_H_dR_stack_9->SetBinError(21,0.02868224);
   VbbHcc_both_H_dR_stack_9->SetBinError(22,0.02379449);
   VbbHcc_both_H_dR_stack_9->SetBinError(23,0.0160239);
   VbbHcc_both_H_dR_stack_9->SetBinError(24,0.01471116);
   VbbHcc_both_H_dR_stack_9->SetBinError(25,0.01061725);
   VbbHcc_both_H_dR_stack_9->SetBinError(26,0.007831958);
   VbbHcc_both_H_dR_stack_9->SetBinError(27,0.003453639);
   VbbHcc_both_H_dR_stack_9->SetEntries(39482);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_stack_10 = new TH1D("VbbHcc_both_H_dR_stack_10","",30,0,6);
   VbbHcc_both_H_dR_stack_10->SetBinContent(2,0.0005007782);
   VbbHcc_both_H_dR_stack_10->SetBinContent(3,2.878997);
   VbbHcc_both_H_dR_stack_10->SetBinContent(4,4.691177);
   VbbHcc_both_H_dR_stack_10->SetBinContent(5,4.854812);
   VbbHcc_both_H_dR_stack_10->SetBinContent(6,4.396757);
   VbbHcc_both_H_dR_stack_10->SetBinContent(7,3.200871);
   VbbHcc_both_H_dR_stack_10->SetBinContent(8,2.399544);
   VbbHcc_both_H_dR_stack_10->SetBinContent(9,2.279825);
   VbbHcc_both_H_dR_stack_10->SetBinContent(10,2.402942);
   VbbHcc_both_H_dR_stack_10->SetBinContent(11,2.807798);
   VbbHcc_both_H_dR_stack_10->SetBinContent(12,3.2401);
   VbbHcc_both_H_dR_stack_10->SetBinContent(13,3.835991);
   VbbHcc_both_H_dR_stack_10->SetBinContent(14,4.49452);
   VbbHcc_both_H_dR_stack_10->SetBinContent(15,5.007267);
   VbbHcc_both_H_dR_stack_10->SetBinContent(16,5.081081);
   VbbHcc_both_H_dR_stack_10->SetBinContent(17,2.742624);
   VbbHcc_both_H_dR_stack_10->SetBinContent(18,1.765263);
   VbbHcc_both_H_dR_stack_10->SetBinContent(19,1.178834);
   VbbHcc_both_H_dR_stack_10->SetBinContent(20,0.822095);
   VbbHcc_both_H_dR_stack_10->SetBinContent(21,0.5924163);
   VbbHcc_both_H_dR_stack_10->SetBinContent(22,0.3705224);
   VbbHcc_both_H_dR_stack_10->SetBinContent(23,0.247278);
   VbbHcc_both_H_dR_stack_10->SetBinContent(24,0.1686369);
   VbbHcc_both_H_dR_stack_10->SetBinContent(25,0.08233091);
   VbbHcc_both_H_dR_stack_10->SetBinContent(26,0.05173293);
   VbbHcc_both_H_dR_stack_10->SetBinContent(27,0.02112517);
   VbbHcc_both_H_dR_stack_10->SetBinContent(28,0.004630069);
   VbbHcc_both_H_dR_stack_10->SetBinError(2,0.0005007782);
   VbbHcc_both_H_dR_stack_10->SetBinError(3,0.03573785);
   VbbHcc_both_H_dR_stack_10->SetBinError(4,0.04565341);
   VbbHcc_both_H_dR_stack_10->SetBinError(5,0.0465042);
   VbbHcc_both_H_dR_stack_10->SetBinError(6,0.04426818);
   VbbHcc_both_H_dR_stack_10->SetBinError(7,0.03773219);
   VbbHcc_both_H_dR_stack_10->SetBinError(8,0.03260665);
   VbbHcc_both_H_dR_stack_10->SetBinError(9,0.0317513);
   VbbHcc_both_H_dR_stack_10->SetBinError(10,0.03262736);
   VbbHcc_both_H_dR_stack_10->SetBinError(11,0.03524831);
   VbbHcc_both_H_dR_stack_10->SetBinError(12,0.0378428);
   VbbHcc_both_H_dR_stack_10->SetBinError(13,0.04120802);
   VbbHcc_both_H_dR_stack_10->SetBinError(14,0.04459258);
   VbbHcc_both_H_dR_stack_10->SetBinError(15,0.04708175);
   VbbHcc_both_H_dR_stack_10->SetBinError(16,0.04743095);
   VbbHcc_both_H_dR_stack_10->SetBinError(17,0.03482173);
   VbbHcc_both_H_dR_stack_10->SetBinError(18,0.0278275);
   VbbHcc_both_H_dR_stack_10->SetBinError(19,0.02273564);
   VbbHcc_both_H_dR_stack_10->SetBinError(20,0.01894691);
   VbbHcc_both_H_dR_stack_10->SetBinError(21,0.01601871);
   VbbHcc_both_H_dR_stack_10->SetBinError(22,0.01262531);
   VbbHcc_both_H_dR_stack_10->SetBinError(23,0.01029846);
   VbbHcc_both_H_dR_stack_10->SetBinError(24,0.008502547);
   VbbHcc_both_H_dR_stack_10->SetBinError(25,0.005867375);
   VbbHcc_both_H_dR_stack_10->SetBinError(26,0.004630485);
   VbbHcc_both_H_dR_stack_10->SetBinError(27,0.002944066);
   VbbHcc_both_H_dR_stack_10->SetBinError(28,0.001351033);
   VbbHcc_both_H_dR_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_stack_11 = new TH1D("VbbHcc_both_H_dR_stack_11","",30,0,6);
   VbbHcc_both_H_dR_stack_11->SetBinContent(3,0.05510359);
   VbbHcc_both_H_dR_stack_11->SetBinContent(4,0.1654346);
   VbbHcc_both_H_dR_stack_11->SetBinContent(5,0.2098564);
   VbbHcc_both_H_dR_stack_11->SetBinContent(6,0.2600734);
   VbbHcc_both_H_dR_stack_11->SetBinContent(7,0.2177106);
   VbbHcc_both_H_dR_stack_11->SetBinContent(8,0.1646959);
   VbbHcc_both_H_dR_stack_11->SetBinContent(9,0.06590347);
   VbbHcc_both_H_dR_stack_11->SetBinContent(10,0.0726653);
   VbbHcc_both_H_dR_stack_11->SetBinContent(11,0.07660149);
   VbbHcc_both_H_dR_stack_11->SetBinContent(12,0.07090667);
   VbbHcc_both_H_dR_stack_11->SetBinContent(13,0.07246272);
   VbbHcc_both_H_dR_stack_11->SetBinContent(14,0.1341629);
   VbbHcc_both_H_dR_stack_11->SetBinContent(15,0.1245588);
   VbbHcc_both_H_dR_stack_11->SetBinContent(16,0.1298627);
   VbbHcc_both_H_dR_stack_11->SetBinContent(17,0.05261914);
   VbbHcc_both_H_dR_stack_11->SetBinContent(18,0.02703248);
   VbbHcc_both_H_dR_stack_11->SetBinContent(19,0.01593299);
   VbbHcc_both_H_dR_stack_11->SetBinContent(20,0.007393158);
   VbbHcc_both_H_dR_stack_11->SetBinContent(21,0.007916343);
   VbbHcc_both_H_dR_stack_11->SetBinContent(22,0.004982426);
   VbbHcc_both_H_dR_stack_11->SetBinContent(23,0.001217642);
   VbbHcc_both_H_dR_stack_11->SetBinContent(25,0.0007844206);
   VbbHcc_both_H_dR_stack_11->SetBinError(3,0.01029392);
   VbbHcc_both_H_dR_stack_11->SetBinError(4,0.01802829);
   VbbHcc_both_H_dR_stack_11->SetBinError(5,0.0201024);
   VbbHcc_both_H_dR_stack_11->SetBinError(6,0.02229604);
   VbbHcc_both_H_dR_stack_11->SetBinError(7,0.02021379);
   VbbHcc_both_H_dR_stack_11->SetBinError(8,0.01732462);
   VbbHcc_both_H_dR_stack_11->SetBinError(9,0.01073647);
   VbbHcc_both_H_dR_stack_11->SetBinError(10,0.01169756);
   VbbHcc_both_H_dR_stack_11->SetBinError(11,0.01150213);
   VbbHcc_both_H_dR_stack_11->SetBinError(12,0.01151185);
   VbbHcc_both_H_dR_stack_11->SetBinError(13,0.0117022);
   VbbHcc_both_H_dR_stack_11->SetBinError(14,0.01581472);
   VbbHcc_both_H_dR_stack_11->SetBinError(15,0.01501212);
   VbbHcc_both_H_dR_stack_11->SetBinError(16,0.01544764);
   VbbHcc_both_H_dR_stack_11->SetBinError(17,0.009867474);
   VbbHcc_both_H_dR_stack_11->SetBinError(18,0.007285381);
   VbbHcc_both_H_dR_stack_11->SetBinError(19,0.005506086);
   VbbHcc_both_H_dR_stack_11->SetBinError(20,0.003766945);
   VbbHcc_both_H_dR_stack_11->SetBinError(21,0.003958401);
   VbbHcc_both_H_dR_stack_11->SetBinError(22,0.002893697);
   VbbHcc_both_H_dR_stack_11->SetBinError(23,0.001217642);
   VbbHcc_both_H_dR_stack_11->SetBinError(25,0.0007844206);
   VbbHcc_both_H_dR_stack_11->SetEntries(1123);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_stack_12 = new TH1D("VbbHcc_both_H_dR_stack_12","",30,0,6);
   VbbHcc_both_H_dR_stack_12->SetBinContent(3,0.02611222);
   VbbHcc_both_H_dR_stack_12->SetBinContent(4,0.05555948);
   VbbHcc_both_H_dR_stack_12->SetBinContent(5,0.09127693);
   VbbHcc_both_H_dR_stack_12->SetBinContent(6,0.1151826);
   VbbHcc_both_H_dR_stack_12->SetBinContent(7,0.1124582);
   VbbHcc_both_H_dR_stack_12->SetBinContent(8,0.08622071);
   VbbHcc_both_H_dR_stack_12->SetBinContent(9,0.05470295);
   VbbHcc_both_H_dR_stack_12->SetBinContent(10,0.04739656);
   VbbHcc_both_H_dR_stack_12->SetBinContent(11,0.04483625);
   VbbHcc_both_H_dR_stack_12->SetBinContent(12,0.04667821);
   VbbHcc_both_H_dR_stack_12->SetBinContent(13,0.04828414);
   VbbHcc_both_H_dR_stack_12->SetBinContent(14,0.05055862);
   VbbHcc_both_H_dR_stack_12->SetBinContent(15,0.05613516);
   VbbHcc_both_H_dR_stack_12->SetBinContent(16,0.05656307);
   VbbHcc_both_H_dR_stack_12->SetBinContent(17,0.03103902);
   VbbHcc_both_H_dR_stack_12->SetBinContent(18,0.01880301);
   VbbHcc_both_H_dR_stack_12->SetBinContent(19,0.01067623);
   VbbHcc_both_H_dR_stack_12->SetBinContent(20,0.008300049);
   VbbHcc_both_H_dR_stack_12->SetBinContent(21,0.003715561);
   VbbHcc_both_H_dR_stack_12->SetBinContent(22,0.002005867);
   VbbHcc_both_H_dR_stack_12->SetBinContent(23,0.001471459);
   VbbHcc_both_H_dR_stack_12->SetBinContent(24,0.0006959996);
   VbbHcc_both_H_dR_stack_12->SetBinContent(25,0.0004982586);
   VbbHcc_both_H_dR_stack_12->SetBinError(3,0.00254093);
   VbbHcc_both_H_dR_stack_12->SetBinError(4,0.003654473);
   VbbHcc_both_H_dR_stack_12->SetBinError(5,0.004679753);
   VbbHcc_both_H_dR_stack_12->SetBinError(6,0.00523897);
   VbbHcc_both_H_dR_stack_12->SetBinError(7,0.005225878);
   VbbHcc_both_H_dR_stack_12->SetBinError(8,0.004563756);
   VbbHcc_both_H_dR_stack_12->SetBinError(9,0.003622261);
   VbbHcc_both_H_dR_stack_12->SetBinError(10,0.003358382);
   VbbHcc_both_H_dR_stack_12->SetBinError(11,0.003297395);
   VbbHcc_both_H_dR_stack_12->SetBinError(12,0.003370301);
   VbbHcc_both_H_dR_stack_12->SetBinError(13,0.003393073);
   VbbHcc_both_H_dR_stack_12->SetBinError(14,0.003455755);
   VbbHcc_both_H_dR_stack_12->SetBinError(15,0.003682103);
   VbbHcc_both_H_dR_stack_12->SetBinError(16,0.00366722);
   VbbHcc_both_H_dR_stack_12->SetBinError(17,0.002738399);
   VbbHcc_both_H_dR_stack_12->SetBinError(18,0.002125247);
   VbbHcc_both_H_dR_stack_12->SetBinError(19,0.001597005);
   VbbHcc_both_H_dR_stack_12->SetBinError(20,0.001363912);
   VbbHcc_both_H_dR_stack_12->SetBinError(21,0.0008830656);
   VbbHcc_both_H_dR_stack_12->SetBinError(22,0.000659164);
   VbbHcc_both_H_dR_stack_12->SetBinError(23,0.0005692195);
   VbbHcc_both_H_dR_stack_12->SetBinError(24,0.0003683439);
   VbbHcc_both_H_dR_stack_12->SetBinError(25,0.0002902506);
   VbbHcc_both_H_dR_stack_12->SetEntries(4223);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR__427 = new TH1D("VbbHcc_both_H_dR__427","",30,0,6);
   VbbHcc_both_H_dR__427->SetBinContent(2,22);
   VbbHcc_both_H_dR__427->SetBinContent(3,24252);
   VbbHcc_both_H_dR__427->SetBinContent(4,27995);
   VbbHcc_both_H_dR__427->SetBinContent(5,23397);
   VbbHcc_both_H_dR__427->SetBinContent(6,22817);
   VbbHcc_both_H_dR__427->SetBinContent(7,22512);
   VbbHcc_both_H_dR__427->SetBinContent(8,23445);
   VbbHcc_both_H_dR__427->SetBinContent(9,25220);
   VbbHcc_both_H_dR__427->SetBinContent(10,27418);
   VbbHcc_both_H_dR__427->SetBinContent(11,29762);
   VbbHcc_both_H_dR__427->SetBinContent(12,33980);
   VbbHcc_both_H_dR__427->SetBinContent(13,38192);
   VbbHcc_both_H_dR__427->SetBinContent(14,42727);
   VbbHcc_both_H_dR__427->SetBinContent(15,48097);
   VbbHcc_both_H_dR__427->SetBinContent(16,50569);
   VbbHcc_both_H_dR__427->SetBinContent(17,33413);
   VbbHcc_both_H_dR__427->SetBinContent(18,24279);
   VbbHcc_both_H_dR__427->SetBinContent(19,18477);
   VbbHcc_both_H_dR__427->SetBinContent(20,14125);
   VbbHcc_both_H_dR__427->SetBinContent(21,10654);
   VbbHcc_both_H_dR__427->SetBinContent(22,7659);
   VbbHcc_both_H_dR__427->SetBinContent(23,5470);
   VbbHcc_both_H_dR__427->SetBinContent(24,3586);
   VbbHcc_both_H_dR__427->SetBinContent(25,2204);
   VbbHcc_both_H_dR__427->SetBinContent(26,1132);
   VbbHcc_both_H_dR__427->SetBinContent(27,467);
   VbbHcc_both_H_dR__427->SetBinContent(28,136);
   VbbHcc_both_H_dR__427->SetBinContent(29,9);
   VbbHcc_both_H_dR__427->SetEntries(562016);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR__427->SetLineColor(ci);
   VbbHcc_both_H_dR__427->SetLineWidth(2);
   VbbHcc_both_H_dR__427->SetMarkerStyle(20);
   VbbHcc_both_H_dR__427->SetMarkerSize(1.2);
   VbbHcc_both_H_dR__427->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR__427->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__427->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__427->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__427->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__427->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__427->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__427->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__427->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR__427->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__427->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__427->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__427->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__427->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__427->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_fx1427[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_VbbHcc_both_H_dR_fy1427[30] = {
   0,
   53.74852,
   89430.01,
   96486.97,
   83272.48,
   79018.89,
   74571.76,
   77638.25,
   88636.52,
   93572.44,
   117466,
   110501.1,
   128989.1,
   143988,
   179516.5,
   199498.9,
   108807.9,
   82015.03,
   60856.45,
   48128.64,
   33793.24,
   24149.77,
   27407.6,
   12720.06,
   9056.057,
   3833.137,
   1688.257,
   304.9965,
   6.096831,
   0};
   Double_t Graph_from_VbbHcc_both_H_dR_fex1427[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_both_H_dR_fey1427[30] = {
   0,
   32.64999,
   2892.092,
   3321.752,
   3216.21,
   2929.701,
   2743.499,
   3154.11,
   15098.1,
   3996.841,
   14299.92,
   3917.271,
   4187.858,
   3893.888,
   5639.037,
   18530.79,
   3541.434,
   3429.174,
   3106.438,
   2743.064,
   1951.649,
   1509.218,
   10568.96,
   1209.384,
   1120.374,
   569.5126,
   497.1742,
   61.16365,
   3.737677,
   0};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_fx1427,Graph_from_VbbHcc_both_H_dR_fy1427,Graph_from_VbbHcc_both_H_dR_fex1427,Graph_from_VbbHcc_both_H_dR_fey1427);
   gre->SetName("Graph_from_VbbHcc_both_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR1427 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR1427","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR1427->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_H_dR1427->SetMaximum(239832.6);
   Graph_Graph_from_VbbHcc_both_H_dR1427->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR1427->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR1427->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR1427);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_both_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
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
   
   TH1D *data_mc_ratio__428 = new TH1D("data_mc_ratio__428","",30,0,6);
   data_mc_ratio__428->SetBinContent(2,0.4093136);
   data_mc_ratio__428->SetBinContent(3,0.2711841);
   data_mc_ratio__428->SetBinContent(4,0.2901428);
   data_mc_ratio__428->SetBinContent(5,0.2809692);
   data_mc_ratio__428->SetBinContent(6,0.2887537);
   data_mc_ratio__428->SetBinContent(7,0.3018837);
   data_mc_ratio__428->SetBinContent(8,0.3019774);
   data_mc_ratio__428->SetBinContent(9,0.2845328);
   data_mc_ratio__428->SetBinContent(10,0.2930136);
   data_mc_ratio__428->SetBinContent(11,0.253367);
   data_mc_ratio__428->SetBinContent(12,0.3075082);
   data_mc_ratio__428->SetBinContent(13,0.2960869);
   data_mc_ratio__428->SetBinContent(14,0.29674);
   data_mc_ratio__428->SetBinContent(15,0.2679253);
   data_mc_ratio__428->SetBinContent(16,0.2534801);
   data_mc_ratio__428->SetBinContent(17,0.3070825);
   data_mc_ratio__428->SetBinContent(18,0.2960311);
   data_mc_ratio__428->SetBinContent(19,0.3036161);
   data_mc_ratio__428->SetBinContent(20,0.2934843);
   data_mc_ratio__428->SetBinContent(21,0.3152702);
   data_mc_ratio__428->SetBinContent(22,0.3171459);
   data_mc_ratio__428->SetBinContent(23,0.1995797);
   data_mc_ratio__428->SetBinContent(24,0.2819168);
   data_mc_ratio__428->SetBinContent(25,0.243373);
   data_mc_ratio__428->SetBinContent(26,0.2953195);
   data_mc_ratio__428->SetBinContent(27,0.2766166);
   data_mc_ratio__428->SetBinContent(28,0.4459068);
   data_mc_ratio__428->SetBinContent(29,1.476177);
   data_mc_ratio__428->SetBinError(2,0.08726595);
   data_mc_ratio__428->SetBinError(3,0.001741368);
   data_mc_ratio__428->SetBinError(4,0.00173409);
   data_mc_ratio__428->SetBinError(5,0.001836871);
   data_mc_ratio__428->SetBinError(6,0.001911606);
   data_mc_ratio__428->SetBinError(7,0.002012022);
   data_mc_ratio__428->SetBinError(8,0.001972193);
   data_mc_ratio__428->SetBinError(9,0.001791677);
   data_mc_ratio__428->SetBinError(10,0.001769579);
   data_mc_ratio__428->SetBinError(11,0.001468652);
   data_mc_ratio__428->SetBinError(12,0.001668188);
   data_mc_ratio__428->SetBinError(13,0.001515071);
   data_mc_ratio__428->SetBinError(14,0.001435572);
   data_mc_ratio__428->SetBinError(15,0.001221672);
   data_mc_ratio__428->SetBinError(16,0.001127202);
   data_mc_ratio__428->SetBinError(17,0.001679954);
   data_mc_ratio__428->SetBinError(18,0.001899862);
   data_mc_ratio__428->SetBinError(19,0.002233619);
   data_mc_ratio__428->SetBinError(20,0.002469395);
   data_mc_ratio__428->SetBinError(21,0.003054404);
   data_mc_ratio__428->SetBinError(22,0.003623874);
   data_mc_ratio__428->SetBinError(23,0.002698502);
   data_mc_ratio__428->SetBinError(24,0.004707777);
   data_mc_ratio__428->SetBinError(25,0.005184019);
   data_mc_ratio__428->SetBinError(26,0.008777461);
   data_mc_ratio__428->SetBinError(27,0.01280029);
   data_mc_ratio__428->SetBinError(28,0.03823619);
   data_mc_ratio__428->SetBinError(29,0.4920589);
   data_mc_ratio__428->SetMinimum(0.4);
   data_mc_ratio__428->SetMaximum(1.6);
   data_mc_ratio__428->SetEntries(76.75901);
   data_mc_ratio__428->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__428->SetLineColor(ci);
   data_mc_ratio__428->SetLineWidth(2);
   data_mc_ratio__428->SetMarkerStyle(20);
   data_mc_ratio__428->SetMarkerSize(1.2);
   data_mc_ratio__428->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__428->GetXaxis()->SetRange(1,31);
   data_mc_ratio__428->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__428->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__428->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__428->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__428->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__428->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__428->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__428->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__428->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__428->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__428->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__428->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__428->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__428->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__428->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__428->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__428->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1428[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1428[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1428[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1428[30] = {
   0,
   0.6074584,
   0.03233917,
   0.03442695,
   0.03862273,
   0.03707596,
   0.03679005,
   0.04062572,
   0.1703372,
   0.04271387,
   0.1217367,
   0.03545006,
   0.03246675,
   0.02704314,
   0.03141237,
   0.09288671,
   0.03254759,
   0.04181153,
   0.05104534,
   0.05699441,
   0.05775265,
   0.06249412,
   0.3856213,
   0.0950769,
   0.1237154,
   0.1485761,
   0.2944896,
   0.2005389,
   0.6130525,
   0};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1428,Graph_from_mc_statistical_error_fy1428,Graph_from_mc_statistical_error_fex1428,Graph_from_mc_statistical_error_fey1428);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1428 = new TH1F("Graph_Graph_from_mc_statistical_error1428","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1428->SetMinimum(0.264337);
   Graph_Graph_from_mc_statistical_error1428->SetMaximum(1.735663);
   Graph_Graph_from_mc_statistical_error1428->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1428->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1428->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1428->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1428->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1428->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1428->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1428->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1428->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1428->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1428);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->SetSelected(H_dR_both_17);
}
