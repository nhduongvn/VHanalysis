void H_mass_tags_18()
{
//=========Macro generated from canvas: H_mass_tags_18/H_mass_tags_18
//=========  (Thu Aug  3 10:20:52 2023) by ROOT version 6.14/09
   TCanvas *H_mass_tags_18 = new TCanvas("H_mass_tags_18", "H_mass_tags_18",0,0,600,600);
   H_mass_tags_18->SetHighLightColor(2);
   H_mass_tags_18->Range(0,0,1,1);
   H_mass_tags_18->SetFillColor(0);
   H_mass_tags_18->SetFillStyle(4000);
   H_mass_tags_18->SetBorderMode(0);
   H_mass_tags_18->SetBorderSize(2);
   H_mass_tags_18->SetFrameFillStyle(1000);
   H_mass_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-21.08602,315.7258,21074.94);
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
   st->SetMaximum(18062.22);
   
   TH1F *st_stack_7 = new TH1F("st_stack_7","",40,0,400);
   st_stack_7->SetMinimum(0.01);
   st_stack_7->SetMaximum(18965.33);
   st_stack_7->SetDirectory(0);
   st_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_7->SetLineColor(ci);
   st_stack_7->GetXaxis()->SetRange(1,30);
   st_stack_7->GetXaxis()->SetLabelFont(42);
   st_stack_7->GetXaxis()->SetLabelSize(0.035);
   st_stack_7->GetXaxis()->SetTitleSize(0.035);
   st_stack_7->GetXaxis()->SetTitleFont(42);
   st_stack_7->GetYaxis()->SetTitle("Events/10.0");
   st_stack_7->GetYaxis()->SetLabelFont(42);
   st_stack_7->GetYaxis()->SetLabelSize(0.05);
   st_stack_7->GetYaxis()->SetTitleSize(0.057);
   st_stack_7->GetYaxis()->SetTitleOffset(1.2);
   st_stack_7->GetYaxis()->SetTitleFont(42);
   st_stack_7->GetZaxis()->SetLabelFont(42);
   st_stack_7->GetZaxis()->SetLabelSize(0.035);
   st_stack_7->GetZaxis()->SetTitleSize(0.035);
   st_stack_7->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_7);
   
   
   TH1D *VbbHcc_tags_H_mass_stack_1 = new TH1D("VbbHcc_tags_H_mass_stack_1","",40,0,400);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(3,83.43461);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(4,1972.666);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(5,4654.134);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(6,6701.51);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(7,6947.522);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(8,6397.982);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(9,4088.456);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(10,5003.162);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(11,4793.37);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(12,4526.701);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(13,3232.619);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(14,5953.251);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(15,4149.613);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(16,4063.202);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(17,5912.158);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(18,3604.23);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(19,2060.628);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(20,3573.226);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(21,4728.703);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(22,2560.505);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(23,3904.613);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(24,3741.826);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(25,3190.722);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(26,2444.576);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(27,2493.896);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(28,3125.776);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(29,2325.877);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(30,1793.577);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(31,3880.778);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(32,2712.545);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(33,1918.142);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(34,1442.392);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(35,4568.871);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(36,1033.193);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(37,3629.989);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(38,1824.576);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(39,1770.521);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(40,2478.602);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(41,82343.87);
   VbbHcc_tags_H_mass_stack_1->SetBinError(3,47.22747);
   VbbHcc_tags_H_mass_stack_1->SetBinError(4,750.0576);
   VbbHcc_tags_H_mass_stack_1->SetBinError(5,1070.323);
   VbbHcc_tags_H_mass_stack_1->SetBinError(6,1307.779);
   VbbHcc_tags_H_mass_stack_1->SetBinError(7,1208.842);
   VbbHcc_tags_H_mass_stack_1->SetBinError(8,1031.187);
   VbbHcc_tags_H_mass_stack_1->SetBinError(9,783.5264);
   VbbHcc_tags_H_mass_stack_1->SetBinError(10,1009.803);
   VbbHcc_tags_H_mass_stack_1->SetBinError(11,1005.951);
   VbbHcc_tags_H_mass_stack_1->SetBinError(12,936.0771);
   VbbHcc_tags_H_mass_stack_1->SetBinError(13,577.7361);
   VbbHcc_tags_H_mass_stack_1->SetBinError(14,1907.443);
   VbbHcc_tags_H_mass_stack_1->SetBinError(15,931.7646);
   VbbHcc_tags_H_mass_stack_1->SetBinError(16,932.2392);
   VbbHcc_tags_H_mass_stack_1->SetBinError(17,1195.988);
   VbbHcc_tags_H_mass_stack_1->SetBinError(18,854.4535);
   VbbHcc_tags_H_mass_stack_1->SetBinError(19,421.7914);
   VbbHcc_tags_H_mass_stack_1->SetBinError(20,853.4798);
   VbbHcc_tags_H_mass_stack_1->SetBinError(21,1126.855);
   VbbHcc_tags_H_mass_stack_1->SetBinError(22,670.8192);
   VbbHcc_tags_H_mass_stack_1->SetBinError(23,930.7257);
   VbbHcc_tags_H_mass_stack_1->SetBinError(24,859.067);
   VbbHcc_tags_H_mass_stack_1->SetBinError(25,848.8659);
   VbbHcc_tags_H_mass_stack_1->SetBinError(26,666.2064);
   VbbHcc_tags_H_mass_stack_1->SetBinError(27,756.4932);
   VbbHcc_tags_H_mass_stack_1->SetBinError(28,846.4569);
   VbbHcc_tags_H_mass_stack_1->SetBinError(29,666.3943);
   VbbHcc_tags_H_mass_stack_1->SetBinError(30,417.2083);
   VbbHcc_tags_H_mass_stack_1->SetBinError(31,996.335);
   VbbHcc_tags_H_mass_stack_1->SetBinError(32,762.2259);
   VbbHcc_tags_H_mass_stack_1->SetBinError(33,552.9499);
   VbbHcc_tags_H_mass_stack_1->SetBinError(34,404.6984);
   VbbHcc_tags_H_mass_stack_1->SetBinError(35,1830.075);
   VbbHcc_tags_H_mass_stack_1->SetBinError(36,154.2377);
   VbbHcc_tags_H_mass_stack_1->SetBinError(37,929.0308);
   VbbHcc_tags_H_mass_stack_1->SetBinError(38,550.6847);
   VbbHcc_tags_H_mass_stack_1->SetBinError(39,547.1327);
   VbbHcc_tags_H_mass_stack_1->SetBinError(40,668.568);
   VbbHcc_tags_H_mass_stack_1->SetBinError(41,4042.003);
   VbbHcc_tags_H_mass_stack_1->SetEntries(10231);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_1,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_2 = new TH1D("VbbHcc_tags_H_mass_stack_2","",40,0,400);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(3,0.4758012);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(4,5.052276);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(5,16.82197);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(6,19.84635);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(7,22.53364);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(8,37.01417);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(9,36.17683);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(10,31.92125);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(11,32.78308);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(12,27.94625);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(13,31.59086);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(14,29.16265);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(15,26.85657);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(16,28.64134);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(17,26.81717);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(18,23.39584);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(19,23.09701);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(20,23.5901);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(21,21.54129);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(22,19.22101);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(23,19.59652);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(24,17.77587);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(25,18.44666);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(26,17.88034);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(27,19.99467);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(28,17.34886);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(29,16.89508);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(30,14.38184);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(31,16.49885);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(32,13.40595);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(33,12.56032);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(34,14.44193);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(35,12.91853);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(36,13.67817);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(37,13.65781);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(38,11.58727);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(39,13.17192);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(40,10.67647);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(41,520.58);
   VbbHcc_tags_H_mass_stack_2->SetBinError(3,0.288306);
   VbbHcc_tags_H_mass_stack_2->SetBinError(4,0.8674896);
   VbbHcc_tags_H_mass_stack_2->SetBinError(5,1.703032);
   VbbHcc_tags_H_mass_stack_2->SetBinError(6,1.780923);
   VbbHcc_tags_H_mass_stack_2->SetBinError(7,1.824045);
   VbbHcc_tags_H_mass_stack_2->SetBinError(8,2.576119);
   VbbHcc_tags_H_mass_stack_2->SetBinError(9,2.499646);
   VbbHcc_tags_H_mass_stack_2->SetBinError(10,2.330764);
   VbbHcc_tags_H_mass_stack_2->SetBinError(11,2.347554);
   VbbHcc_tags_H_mass_stack_2->SetBinError(12,2.088824);
   VbbHcc_tags_H_mass_stack_2->SetBinError(13,2.232134);
   VbbHcc_tags_H_mass_stack_2->SetBinError(14,2.144789);
   VbbHcc_tags_H_mass_stack_2->SetBinError(15,2.057758);
   VbbHcc_tags_H_mass_stack_2->SetBinError(16,2.243567);
   VbbHcc_tags_H_mass_stack_2->SetBinError(17,2.100134);
   VbbHcc_tags_H_mass_stack_2->SetBinError(18,1.879168);
   VbbHcc_tags_H_mass_stack_2->SetBinError(19,1.944672);
   VbbHcc_tags_H_mass_stack_2->SetBinError(20,1.960931);
   VbbHcc_tags_H_mass_stack_2->SetBinError(21,1.940431);
   VbbHcc_tags_H_mass_stack_2->SetBinError(22,1.710602);
   VbbHcc_tags_H_mass_stack_2->SetBinError(23,1.809545);
   VbbHcc_tags_H_mass_stack_2->SetBinError(24,1.730122);
   VbbHcc_tags_H_mass_stack_2->SetBinError(25,1.80923);
   VbbHcc_tags_H_mass_stack_2->SetBinError(26,1.775482);
   VbbHcc_tags_H_mass_stack_2->SetBinError(27,1.880331);
   VbbHcc_tags_H_mass_stack_2->SetBinError(28,1.674482);
   VbbHcc_tags_H_mass_stack_2->SetBinError(29,1.685673);
   VbbHcc_tags_H_mass_stack_2->SetBinError(30,1.490466);
   VbbHcc_tags_H_mass_stack_2->SetBinError(31,1.787714);
   VbbHcc_tags_H_mass_stack_2->SetBinError(32,1.398282);
   VbbHcc_tags_H_mass_stack_2->SetBinError(33,1.368899);
   VbbHcc_tags_H_mass_stack_2->SetBinError(34,1.526162);
   VbbHcc_tags_H_mass_stack_2->SetBinError(35,1.447971);
   VbbHcc_tags_H_mass_stack_2->SetBinError(36,1.497968);
   VbbHcc_tags_H_mass_stack_2->SetBinError(37,1.599614);
   VbbHcc_tags_H_mass_stack_2->SetBinError(38,1.376294);
   VbbHcc_tags_H_mass_stack_2->SetBinError(39,1.435304);
   VbbHcc_tags_H_mass_stack_2->SetBinError(40,1.268773);
   VbbHcc_tags_H_mass_stack_2->SetBinError(41,9.462133);
   VbbHcc_tags_H_mass_stack_2->SetEntries(14890);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_2,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_3 = new TH1D("VbbHcc_tags_H_mass_stack_3","",40,0,400);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(2,0.1782546);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(3,10.19237);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(4,106.759);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(5,250.0768);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(6,372.7768);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(7,490.6431);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(8,649.5777);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(9,746.6101);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(10,718.5029);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(11,704.0056);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(12,707.316);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(13,684.3972);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(14,664.8794);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(15,627.3153);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(16,585.8493);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(17,544.3027);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(18,519.4727);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(19,478.8564);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(20,452.5206);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(21,427.0508);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(22,407.1345);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(23,388.1188);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(24,376.8897);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(25,363.5337);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(26,349.4029);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(27,348.2002);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(28,334.3373);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(29,322.5047);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(30,315.5629);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(31,309.0357);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(32,297.3228);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(33,296.0106);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(34,289.4675);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(35,274.8939);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(36,272.0355);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(37,265.8995);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(38,257.4436);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(39,248.3305);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(40,244.9907);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(41,9417.455);
   VbbHcc_tags_H_mass_stack_3->SetBinError(2,0.08951969);
   VbbHcc_tags_H_mass_stack_3->SetBinError(3,0.7846785);
   VbbHcc_tags_H_mass_stack_3->SetBinError(4,2.537164);
   VbbHcc_tags_H_mass_stack_3->SetBinError(5,3.883426);
   VbbHcc_tags_H_mass_stack_3->SetBinError(6,4.75467);
   VbbHcc_tags_H_mass_stack_3->SetBinError(7,5.474011);
   VbbHcc_tags_H_mass_stack_3->SetBinError(8,6.321688);
   VbbHcc_tags_H_mass_stack_3->SetBinError(9,6.798876);
   VbbHcc_tags_H_mass_stack_3->SetBinError(10,6.669783);
   VbbHcc_tags_H_mass_stack_3->SetBinError(11,6.598083);
   VbbHcc_tags_H_mass_stack_3->SetBinError(12,6.613651);
   VbbHcc_tags_H_mass_stack_3->SetBinError(13,6.510087);
   VbbHcc_tags_H_mass_stack_3->SetBinError(14,6.413561);
   VbbHcc_tags_H_mass_stack_3->SetBinError(15,6.225742);
   VbbHcc_tags_H_mass_stack_3->SetBinError(16,6.012753);
   VbbHcc_tags_H_mass_stack_3->SetBinError(17,5.792369);
   VbbHcc_tags_H_mass_stack_3->SetBinError(18,5.660331);
   VbbHcc_tags_H_mass_stack_3->SetBinError(19,5.424371);
   VbbHcc_tags_H_mass_stack_3->SetBinError(20,5.277946);
   VbbHcc_tags_H_mass_stack_3->SetBinError(21,5.123288);
   VbbHcc_tags_H_mass_stack_3->SetBinError(22,5.001469);
   VbbHcc_tags_H_mass_stack_3->SetBinError(23,4.88334);
   VbbHcc_tags_H_mass_stack_3->SetBinError(24,4.81991);
   VbbHcc_tags_H_mass_stack_3->SetBinError(25,4.738557);
   VbbHcc_tags_H_mass_stack_3->SetBinError(26,4.639217);
   VbbHcc_tags_H_mass_stack_3->SetBinError(27,4.634815);
   VbbHcc_tags_H_mass_stack_3->SetBinError(28,4.539614);
   VbbHcc_tags_H_mass_stack_3->SetBinError(29,4.462644);
   VbbHcc_tags_H_mass_stack_3->SetBinError(30,4.412865);
   VbbHcc_tags_H_mass_stack_3->SetBinError(31,4.37379);
   VbbHcc_tags_H_mass_stack_3->SetBinError(32,4.288206);
   VbbHcc_tags_H_mass_stack_3->SetBinError(33,4.281627);
   VbbHcc_tags_H_mass_stack_3->SetBinError(34,4.227361);
   VbbHcc_tags_H_mass_stack_3->SetBinError(35,4.118979);
   VbbHcc_tags_H_mass_stack_3->SetBinError(36,4.109198);
   VbbHcc_tags_H_mass_stack_3->SetBinError(37,4.055894);
   VbbHcc_tags_H_mass_stack_3->SetBinError(38,3.992392);
   VbbHcc_tags_H_mass_stack_3->SetBinError(39,3.915813);
   VbbHcc_tags_H_mass_stack_3->SetBinError(40,3.891627);
   VbbHcc_tags_H_mass_stack_3->SetBinError(41,24.12709);
   VbbHcc_tags_H_mass_stack_3->SetEntries(421807);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_3,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_4 = new TH1D("VbbHcc_tags_H_mass_stack_4","",40,0,400);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(3,0.9855641);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(4,19.24663);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(5,36.80925);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(6,46.89183);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(7,67.97243);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(8,102.6294);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(9,151.6146);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(10,136.8674);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(11,89.24519);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(12,67.24751);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(13,62.98783);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(14,59.99718);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(15,57.55751);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(16,47.83879);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(17,42.99506);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(18,63.0488);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(19,49.38501);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(20,37.66342);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(21,50.57731);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(22,47.67844);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(23,42.87464);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(24,44.49);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(25,42.48354);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(26,38.80086);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(27,37.10079);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(28,39.50909);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(29,44.38337);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(30,40.6788);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(31,37.55127);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(32,41.64442);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(33,34.32228);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(34,36.43877);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(35,35.5539);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(36,39.45623);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(37,42.89706);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(38,25.37666);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(39,35.62092);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(40,27.42829);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(41,1359.729);
   VbbHcc_tags_H_mass_stack_4->SetBinError(3,0.5382411);
   VbbHcc_tags_H_mass_stack_4->SetBinError(4,6.041303);
   VbbHcc_tags_H_mass_stack_4->SetBinError(5,5.303136);
   VbbHcc_tags_H_mass_stack_4->SetBinError(6,5.56002);
   VbbHcc_tags_H_mass_stack_4->SetBinError(7,4.68288);
   VbbHcc_tags_H_mass_stack_4->SetBinError(8,5.572424);
   VbbHcc_tags_H_mass_stack_4->SetBinError(9,9.449089);
   VbbHcc_tags_H_mass_stack_4->SetBinError(10,8.282295);
   VbbHcc_tags_H_mass_stack_4->SetBinError(11,5.118061);
   VbbHcc_tags_H_mass_stack_4->SetBinError(12,4.326202);
   VbbHcc_tags_H_mass_stack_4->SetBinError(13,5.762647);
   VbbHcc_tags_H_mass_stack_4->SetBinError(14,5.799417);
   VbbHcc_tags_H_mass_stack_4->SetBinError(15,5.580941);
   VbbHcc_tags_H_mass_stack_4->SetBinError(16,5.275227);
   VbbHcc_tags_H_mass_stack_4->SetBinError(17,3.568114);
   VbbHcc_tags_H_mass_stack_4->SetBinError(18,8.822788);
   VbbHcc_tags_H_mass_stack_4->SetBinError(19,5.461734);
   VbbHcc_tags_H_mass_stack_4->SetBinError(20,3.207275);
   VbbHcc_tags_H_mass_stack_4->SetBinError(21,5.51177);
   VbbHcc_tags_H_mass_stack_4->SetBinError(22,5.445718);
   VbbHcc_tags_H_mass_stack_4->SetBinError(23,3.691194);
   VbbHcc_tags_H_mass_stack_4->SetBinError(24,6.609155);
   VbbHcc_tags_H_mass_stack_4->SetBinError(25,3.808657);
   VbbHcc_tags_H_mass_stack_4->SetBinError(26,5.180024);
   VbbHcc_tags_H_mass_stack_4->SetBinError(27,3.312718);
   VbbHcc_tags_H_mass_stack_4->SetBinError(28,3.435837);
   VbbHcc_tags_H_mass_stack_4->SetBinError(29,3.790008);
   VbbHcc_tags_H_mass_stack_4->SetBinError(30,5.287049);
   VbbHcc_tags_H_mass_stack_4->SetBinError(31,6.468018);
   VbbHcc_tags_H_mass_stack_4->SetBinError(32,3.750846);
   VbbHcc_tags_H_mass_stack_4->SetBinError(33,5.05997);
   VbbHcc_tags_H_mass_stack_4->SetBinError(34,5.136351);
   VbbHcc_tags_H_mass_stack_4->SetBinError(35,5.076163);
   VbbHcc_tags_H_mass_stack_4->SetBinError(36,5.278313);
   VbbHcc_tags_H_mass_stack_4->SetBinError(37,5.29717);
   VbbHcc_tags_H_mass_stack_4->SetBinError(38,2.723101);
   VbbHcc_tags_H_mass_stack_4->SetBinError(39,5.023199);
   VbbHcc_tags_H_mass_stack_4->SetBinError(40,2.834704);
   VbbHcc_tags_H_mass_stack_4->SetBinError(41,23.62583);
   VbbHcc_tags_H_mass_stack_4->SetEntries(18660);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_4,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_5 = new TH1D("VbbHcc_tags_H_mass_stack_5","",40,0,400);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(3,0.2594997);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(4,1.141581);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(5,1.835737);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(6,4.927285);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(7,13.93791);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(8,10.918);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(9,10.35291);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(10,4.852719);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(11,3.036173);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(12,5.643576);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(13,3.208952);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(14,7.644918);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(15,8.149611);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(16,4.822087);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(17,6.738571);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(18,6.095473);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(19,4.289196);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(20,11.56539);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(21,2.627836);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(22,2.467324);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(23,6.440591);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(24,3.229083);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(25,7.104488);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(26,5.770133);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(27,5.460466);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(28,2.958158);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(29,1.23606);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(30,6.593608);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(31,5.279492);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(32,4.647308);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(33,4.160194);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(34,3.058907);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(35,2.857099);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(36,3.847068);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(37,4.620961);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(38,2.609109);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(39,2.891447);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(40,0.5086342);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(41,135.3306);
   VbbHcc_tags_H_mass_stack_5->SetBinError(3,0.2594997);
   VbbHcc_tags_H_mass_stack_5->SetBinError(4,0.5162777);
   VbbHcc_tags_H_mass_stack_5->SetBinError(5,0.609945);
   VbbHcc_tags_H_mass_stack_5->SetBinError(6,1.140384);
   VbbHcc_tags_H_mass_stack_5->SetBinError(7,10.54192);
   VbbHcc_tags_H_mass_stack_5->SetBinError(8,3.735147);
   VbbHcc_tags_H_mass_stack_5->SetBinError(9,3.125852);
   VbbHcc_tags_H_mass_stack_5->SetBinError(10,0.9576767);
   VbbHcc_tags_H_mass_stack_5->SetBinError(11,0.7461047);
   VbbHcc_tags_H_mass_stack_5->SetBinError(12,2.234683);
   VbbHcc_tags_H_mass_stack_5->SetBinError(13,0.6639408);
   VbbHcc_tags_H_mass_stack_5->SetBinError(14,3.072856);
   VbbHcc_tags_H_mass_stack_5->SetBinError(15,3.118739);
   VbbHcc_tags_H_mass_stack_5->SetBinError(16,1.046739);
   VbbHcc_tags_H_mass_stack_5->SetBinError(17,2.34854);
   VbbHcc_tags_H_mass_stack_5->SetBinError(18,2.276005);
   VbbHcc_tags_H_mass_stack_5->SetBinError(19,0.9662625);
   VbbHcc_tags_H_mass_stack_5->SetBinError(20,3.753933);
   VbbHcc_tags_H_mass_stack_5->SetBinError(21,0.74353);
   VbbHcc_tags_H_mass_stack_5->SetBinError(22,0.6308379);
   VbbHcc_tags_H_mass_stack_5->SetBinError(23,1.892907);
   VbbHcc_tags_H_mass_stack_5->SetBinError(24,0.7592329);
   VbbHcc_tags_H_mass_stack_5->SetBinError(25,3.027346);
   VbbHcc_tags_H_mass_stack_5->SetBinError(26,2.234102);
   VbbHcc_tags_H_mass_stack_5->SetBinError(27,2.260806);
   VbbHcc_tags_H_mass_stack_5->SetBinError(28,0.7268572);
   VbbHcc_tags_H_mass_stack_5->SetBinError(29,0.5219597);
   VbbHcc_tags_H_mass_stack_5->SetBinError(30,2.277651);
   VbbHcc_tags_H_mass_stack_5->SetBinError(31,2.260243);
   VbbHcc_tags_H_mass_stack_5->SetBinError(32,2.178194);
   VbbHcc_tags_H_mass_stack_5->SetBinError(33,2.147138);
   VbbHcc_tags_H_mass_stack_5->SetBinError(34,0.8010682);
   VbbHcc_tags_H_mass_stack_5->SetBinError(35,0.8043602);
   VbbHcc_tags_H_mass_stack_5->SetBinError(36,2.135564);
   VbbHcc_tags_H_mass_stack_5->SetBinError(37,2.185854);
   VbbHcc_tags_H_mass_stack_5->SetBinError(38,0.743395);
   VbbHcc_tags_H_mass_stack_5->SetBinError(39,2.121442);
   VbbHcc_tags_H_mass_stack_5->SetBinError(40,0.2050537);
   VbbHcc_tags_H_mass_stack_5->SetBinError(41,8.676402);
   VbbHcc_tags_H_mass_stack_5->SetEntries(2359);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_5,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_6 = new TH1D("VbbHcc_tags_H_mass_stack_6","",40,0,400);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(7,0.4520427);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(8,0.4520427);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(31,0.4520427);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(41,0.4520427);
   VbbHcc_tags_H_mass_stack_6->SetBinError(7,0.4520427);
   VbbHcc_tags_H_mass_stack_6->SetBinError(8,0.4520427);
   VbbHcc_tags_H_mass_stack_6->SetBinError(31,0.4520427);
   VbbHcc_tags_H_mass_stack_6->SetBinError(41,0.4520427);
   VbbHcc_tags_H_mass_stack_6->SetEntries(4);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_6,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_7 = new TH1D("VbbHcc_tags_H_mass_stack_7","",40,0,400);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(8,0.3541991);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(9,2.125195);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(10,0.3541991);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(11,0.7083982);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(12,0.3541991);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(13,0.7083982);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(16,0.3541991);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(23,0.3541991);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(27,0.7083982);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(28,0.3541991);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(36,0.3541991);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(41,4.250389);
   VbbHcc_tags_H_mass_stack_7->SetBinError(7,0.3541991);
   VbbHcc_tags_H_mass_stack_7->SetBinError(8,0.3541991);
   VbbHcc_tags_H_mass_stack_7->SetBinError(9,0.8676071);
   VbbHcc_tags_H_mass_stack_7->SetBinError(10,0.3541991);
   VbbHcc_tags_H_mass_stack_7->SetBinError(11,0.5009132);
   VbbHcc_tags_H_mass_stack_7->SetBinError(12,0.3541991);
   VbbHcc_tags_H_mass_stack_7->SetBinError(13,0.5009132);
   VbbHcc_tags_H_mass_stack_7->SetBinError(16,0.3541991);
   VbbHcc_tags_H_mass_stack_7->SetBinError(23,0.3541991);
   VbbHcc_tags_H_mass_stack_7->SetBinError(27,0.5009132);
   VbbHcc_tags_H_mass_stack_7->SetBinError(28,0.3541991);
   VbbHcc_tags_H_mass_stack_7->SetBinError(36,0.3541991);
   VbbHcc_tags_H_mass_stack_7->SetBinError(41,1.226982);
   VbbHcc_tags_H_mass_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_7,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_8 = new TH1D("VbbHcc_tags_H_mass_stack_8","",40,0,400);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(5,0.5588287);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(6,0.2794144);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(7,1.397072);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(8,2.235315);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(9,4.47063);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(10,3.352972);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(11,2.235315);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(12,0.8382431);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(13,0.5588287);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(15,0.2794144);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(16,0.2794144);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(17,1.117657);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(18,1.117657);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(19,0.2794144);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(20,0.2794144);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(21,0.8382431);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(22,0.2794144);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(24,1.117657);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(25,0.2794144);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(27,1.117657);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(29,0.8382431);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(30,1.676486);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(31,0.5588287);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(33,0.5588287);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(35,1.676486);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(36,0.5588287);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(37,0.2794144);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(38,1.117657);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(39,1.676486);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(40,1.117657);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(41,31.29441);
   VbbHcc_tags_H_mass_stack_8->SetBinError(5,0.3951516);
   VbbHcc_tags_H_mass_stack_8->SetBinError(6,0.2794144);
   VbbHcc_tags_H_mass_stack_8->SetBinError(7,0.6247895);
   VbbHcc_tags_H_mass_stack_8->SetBinError(8,0.7903031);
   VbbHcc_tags_H_mass_stack_8->SetBinError(9,1.117657);
   VbbHcc_tags_H_mass_stack_8->SetBinError(10,0.9679197);
   VbbHcc_tags_H_mass_stack_8->SetBinError(11,0.7903031);
   VbbHcc_tags_H_mass_stack_8->SetBinError(12,0.4839599);
   VbbHcc_tags_H_mass_stack_8->SetBinError(13,0.3951516);
   VbbHcc_tags_H_mass_stack_8->SetBinError(15,0.2794144);
   VbbHcc_tags_H_mass_stack_8->SetBinError(16,0.2794144);
   VbbHcc_tags_H_mass_stack_8->SetBinError(17,0.5588287);
   VbbHcc_tags_H_mass_stack_8->SetBinError(18,0.5588287);
   VbbHcc_tags_H_mass_stack_8->SetBinError(19,0.2794144);
   VbbHcc_tags_H_mass_stack_8->SetBinError(20,0.2794144);
   VbbHcc_tags_H_mass_stack_8->SetBinError(21,0.4839599);
   VbbHcc_tags_H_mass_stack_8->SetBinError(22,0.2794144);
   VbbHcc_tags_H_mass_stack_8->SetBinError(24,0.5588287);
   VbbHcc_tags_H_mass_stack_8->SetBinError(25,0.2794144);
   VbbHcc_tags_H_mass_stack_8->SetBinError(27,0.5588287);
   VbbHcc_tags_H_mass_stack_8->SetBinError(29,0.4839599);
   VbbHcc_tags_H_mass_stack_8->SetBinError(30,0.6844226);
   VbbHcc_tags_H_mass_stack_8->SetBinError(31,0.3951516);
   VbbHcc_tags_H_mass_stack_8->SetBinError(33,0.3951516);
   VbbHcc_tags_H_mass_stack_8->SetBinError(35,0.6844226);
   VbbHcc_tags_H_mass_stack_8->SetBinError(36,0.3951516);
   VbbHcc_tags_H_mass_stack_8->SetBinError(37,0.2794144);
   VbbHcc_tags_H_mass_stack_8->SetBinError(38,0.5588287);
   VbbHcc_tags_H_mass_stack_8->SetBinError(39,0.6844226);
   VbbHcc_tags_H_mass_stack_8->SetBinError(40,0.5588287);
   VbbHcc_tags_H_mass_stack_8->SetBinError(41,2.957044);
   VbbHcc_tags_H_mass_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_8,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_9 = new TH1D("VbbHcc_tags_H_mass_stack_9","",40,0,400);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(3,0.006857336);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(4,0.1005743);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(5,0.1577187);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(6,0.4365837);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(7,1.037744);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(8,2.208062);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(9,3.483527);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(10,3.332665);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(11,2.528071);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(12,2.354352);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(13,1.993199);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(14,1.273179);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(15,0.8525954);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(16,0.6217318);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(17,0.5463011);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(18,0.5120144);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(19,0.5280149);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(20,0.6308749);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(21,0.4662988);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(22,0.5737304);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(23,0.6125887);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(24,0.5600158);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(25,0.5828736);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(26,0.66059);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(27,0.6674474);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(28,0.6925909);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(29,0.5760162);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(30,0.6148745);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(31,0.6125887);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(32,0.6788763);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(33,0.6263033);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(34,0.6308749);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(35,0.6445896);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(36,0.640018);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(37,0.681162);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(38,0.640018);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(39,0.6423038);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(40,0.6857336);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(41,27.20305);
   VbbHcc_tags_H_mass_stack_9->SetBinError(3,0.003959085);
   VbbHcc_tags_H_mass_stack_9->SetBinError(4,0.01516214);
   VbbHcc_tags_H_mass_stack_9->SetBinError(5,0.0189871);
   VbbHcc_tags_H_mass_stack_9->SetBinError(6,0.03159009);
   VbbHcc_tags_H_mass_stack_9->SetBinError(7,0.04870372);
   VbbHcc_tags_H_mass_stack_9->SetBinError(8,0.07104324);
   VbbHcc_tags_H_mass_stack_9->SetBinError(9,0.08923324);
   VbbHcc_tags_H_mass_stack_9->SetBinError(10,0.08727964);
   VbbHcc_tags_H_mass_stack_9->SetBinError(11,0.07601718);
   VbbHcc_tags_H_mass_stack_9->SetBinError(12,0.0733589);
   VbbHcc_tags_H_mass_stack_9->SetBinError(13,0.06749823);
   VbbHcc_tags_H_mass_stack_9->SetBinError(14,0.05394631);
   VbbHcc_tags_H_mass_stack_9->SetBinError(15,0.04414572);
   VbbHcc_tags_H_mass_stack_9->SetBinError(16,0.03769803);
   VbbHcc_tags_H_mass_stack_9->SetBinError(17,0.03533728);
   VbbHcc_tags_H_mass_stack_9->SetBinError(18,0.0342104);
   VbbHcc_tags_H_mass_stack_9->SetBinError(19,0.03474083);
   VbbHcc_tags_H_mass_stack_9->SetBinError(20,0.03797421);
   VbbHcc_tags_H_mass_stack_9->SetBinError(21,0.03264745);
   VbbHcc_tags_H_mass_stack_9->SetBinError(22,0.03621354);
   VbbHcc_tags_H_mass_stack_9->SetBinError(23,0.03741981);
   VbbHcc_tags_H_mass_stack_9->SetBinError(24,0.0357781);
   VbbHcc_tags_H_mass_stack_9->SetBinError(25,0.03650096);
   VbbHcc_tags_H_mass_stack_9->SetBinError(26,0.03885824);
   VbbHcc_tags_H_mass_stack_9->SetBinError(27,0.0390594);
   VbbHcc_tags_H_mass_stack_9->SetBinError(28,0.03978831);
   VbbHcc_tags_H_mass_stack_9->SetBinError(29,0.03628561);
   VbbHcc_tags_H_mass_stack_9->SetBinError(30,0.03748956);
   VbbHcc_tags_H_mass_stack_9->SetBinError(31,0.03741981);
   VbbHcc_tags_H_mass_stack_9->SetBinError(32,0.0393924);
   VbbHcc_tags_H_mass_stack_9->SetBinError(33,0.03783637);
   VbbHcc_tags_H_mass_stack_9->SetBinError(34,0.03797421);
   VbbHcc_tags_H_mass_stack_9->SetBinError(35,0.03838475);
   VbbHcc_tags_H_mass_stack_9->SetBinError(36,0.03824839);
   VbbHcc_tags_H_mass_stack_9->SetBinError(37,0.03945866);
   VbbHcc_tags_H_mass_stack_9->SetBinError(38,0.03824839);
   VbbHcc_tags_H_mass_stack_9->SetBinError(39,0.03831663);
   VbbHcc_tags_H_mass_stack_9->SetBinError(40,0.03959085);
   VbbHcc_tags_H_mass_stack_9->SetBinError(41,0.2493595);
   VbbHcc_tags_H_mass_stack_9->SetEntries(27254);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_9,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_10 = new TH1D("VbbHcc_tags_H_mass_stack_10","",40,0,400);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(3,0.003576868);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(4,0.03219181);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(5,0.1067099);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(6,0.1973239);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(7,0.5156651);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(8,1.048618);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(9,1.594687);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(10,1.509438);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(11,1.207789);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(12,1.07306);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(13,0.9681389);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(14,0.7332579);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(15,0.5293764);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(16,0.4012053);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(17,0.3845133);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(18,0.366629);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(19,0.3654367);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(20,0.379148);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(21,0.3558984);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(22,0.3839171);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(23,0.3910709);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(24,0.3785518);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(25,0.3719943);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(26,0.3630521);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(27,0.3624559);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(28,0.3690135);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(29,0.3529176);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(30,0.3535138);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(31,0.3558984);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(32,0.333841);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(33,0.3570906);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(34,0.3475523);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(35,0.3243027);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(36,0.333841);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(37,0.3231104);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(38,0.3314564);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(39,0.3237065);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(40,0.3290718);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(41,10.80572);
   VbbHcc_tags_H_mass_stack_10->SetBinError(3,0.00146025);
   VbbHcc_tags_H_mass_stack_10->SetBinError(4,0.004380751);
   VbbHcc_tags_H_mass_stack_10->SetBinError(5,0.007975872);
   VbbHcc_tags_H_mass_stack_10->SetBinError(6,0.0108459);
   VbbHcc_tags_H_mass_stack_10->SetBinError(7,0.01753314);
   VbbHcc_tags_H_mass_stack_10->SetBinError(8,0.02500256);
   VbbHcc_tags_H_mass_stack_10->SetBinError(9,0.03083284);
   VbbHcc_tags_H_mass_stack_10->SetBinError(10,0.02999739);
   VbbHcc_tags_H_mass_stack_10->SetBinError(11,0.02683313);
   VbbHcc_tags_H_mass_stack_10->SetBinError(12,0.02529228);
   VbbHcc_tags_H_mass_stack_10->SetBinError(13,0.02402396);
   VbbHcc_tags_H_mass_stack_10->SetBinError(14,0.0209076);
   VbbHcc_tags_H_mass_stack_10->SetBinError(15,0.01776471);
   VbbHcc_tags_H_mass_stack_10->SetBinError(16,0.01546533);
   VbbHcc_tags_H_mass_stack_10->SetBinError(17,0.0151402);
   VbbHcc_tags_H_mass_stack_10->SetBinError(18,0.01478391);
   VbbHcc_tags_H_mass_stack_10->SetBinError(19,0.01475985);
   VbbHcc_tags_H_mass_stack_10->SetBinError(20,0.0150342);
   VbbHcc_tags_H_mass_stack_10->SetBinError(21,0.01456595);
   VbbHcc_tags_H_mass_stack_10->SetBinError(22,0.01512845);
   VbbHcc_tags_H_mass_stack_10->SetBinError(23,0.01526875);
   VbbHcc_tags_H_mass_stack_10->SetBinError(24,0.01502237);
   VbbHcc_tags_H_mass_stack_10->SetBinError(25,0.01489169);
   VbbHcc_tags_H_mass_stack_10->SetBinError(26,0.01471161);
   VbbHcc_tags_H_mass_stack_10->SetBinError(27,0.01469953);
   VbbHcc_tags_H_mass_stack_10->SetBinError(28,0.01483191);
   VbbHcc_tags_H_mass_stack_10->SetBinError(29,0.01450483);
   VbbHcc_tags_H_mass_stack_10->SetBinError(30,0.01451707);
   VbbHcc_tags_H_mass_stack_10->SetBinError(31,0.01456595);
   VbbHcc_tags_H_mass_stack_10->SetBinError(32,0.01410736);
   VbbHcc_tags_H_mass_stack_10->SetBinError(33,0.01459033);
   VbbHcc_tags_H_mass_stack_10->SetBinError(34,0.01439415);
   VbbHcc_tags_H_mass_stack_10->SetBinError(35,0.01390436);
   VbbHcc_tags_H_mass_stack_10->SetBinError(36,0.01410736);
   VbbHcc_tags_H_mass_stack_10->SetBinError(37,0.01387878);
   VbbHcc_tags_H_mass_stack_10->SetBinError(38,0.01405688);
   VbbHcc_tags_H_mass_stack_10->SetBinError(39,0.01389158);
   VbbHcc_tags_H_mass_stack_10->SetBinError(40,0.01400623);
   VbbHcc_tags_H_mass_stack_10->SetBinError(41,0.08026064);
   VbbHcc_tags_H_mass_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_10,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_11 = new TH1D("VbbHcc_tags_H_mass_stack_11","",40,0,400);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(3,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(5,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(7,0.004551524);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(8,0.004551524);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(9,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(10,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(11,0.006827286);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(12,0.01137881);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(13,0.01365457);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(14,0.01593033);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(15,0.009103048);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(17,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(19,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(20,0.004551524);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(21,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(22,0.006827286);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(23,0.004551524);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(24,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(25,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(26,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(27,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(36,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(37,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(41,0.06144557);
   VbbHcc_tags_H_mass_stack_11->SetBinError(3,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinError(5,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinError(7,0.003218413);
   VbbHcc_tags_H_mass_stack_11->SetBinError(8,0.003218413);
   VbbHcc_tags_H_mass_stack_11->SetBinError(9,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinError(10,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinError(11,0.003941735);
   VbbHcc_tags_H_mass_stack_11->SetBinError(12,0.005088758);
   VbbHcc_tags_H_mass_stack_11->SetBinError(13,0.005574455);
   VbbHcc_tags_H_mass_stack_11->SetBinError(14,0.0060211);
   VbbHcc_tags_H_mass_stack_11->SetBinError(15,0.004551524);
   VbbHcc_tags_H_mass_stack_11->SetBinError(16,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinError(17,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinError(19,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinError(20,0.003218413);
   VbbHcc_tags_H_mass_stack_11->SetBinError(21,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinError(22,0.003941735);
   VbbHcc_tags_H_mass_stack_11->SetBinError(23,0.003218413);
   VbbHcc_tags_H_mass_stack_11->SetBinError(24,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinError(25,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinError(26,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinError(27,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinError(36,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinError(37,0.002275762);
   VbbHcc_tags_H_mass_stack_11->SetBinError(41,0.01182521);
   VbbHcc_tags_H_mass_stack_11->SetEntries(77);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_11,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_12 = new TH1D("VbbHcc_tags_H_mass_stack_12","",40,0,400);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(3,0.0002996568);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(5,0.0002996568);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(6,0.0002996568);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(7,0.002097598);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(8,0.001198627);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(9,0.002097598);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(10,0.003296225);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(11,0.002696911);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(12,0.00839039);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(13,0.006892106);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(14,0.007791077);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(15,0.003296225);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(16,0.002097598);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(17,0.001797941);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(18,0.0002996568);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(19,0.001797941);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(20,0.002397254);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(21,0.001198627);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(22,0.001498284);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(23,0.0008989704);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(24,0.0005993136);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(25,0.001198627);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(26,0.0005993136);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(27,0.0008989704);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(28,0.001198627);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(29,0.0008989704);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(30,0.0005993136);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(31,0.001498284);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(32,0.0005993136);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(33,0.0008989704);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(34,0.0008989704);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(35,0.001198627);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(36,0.0002996568);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(37,0.0002996568);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(38,0.0008989704);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(39,0.0005993136);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(40,0.0002996568);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(41,0.02517117);
   VbbHcc_tags_H_mass_stack_12->SetBinError(3,0.0002996568);
   VbbHcc_tags_H_mass_stack_12->SetBinError(5,0.0002996568);
   VbbHcc_tags_H_mass_stack_12->SetBinError(6,0.0002996568);
   VbbHcc_tags_H_mass_stack_12->SetBinError(7,0.0007928174);
   VbbHcc_tags_H_mass_stack_12->SetBinError(8,0.0005993136);
   VbbHcc_tags_H_mass_stack_12->SetBinError(9,0.0007928174);
   VbbHcc_tags_H_mass_stack_12->SetBinError(10,0.0009938492);
   VbbHcc_tags_H_mass_stack_12->SetBinError(11,0.0008989704);
   VbbHcc_tags_H_mass_stack_12->SetBinError(12,0.001585635);
   VbbHcc_tags_H_mass_stack_12->SetBinError(13,0.001437104);
   VbbHcc_tags_H_mass_stack_12->SetBinError(14,0.001527956);
   VbbHcc_tags_H_mass_stack_12->SetBinError(15,0.0009938492);
   VbbHcc_tags_H_mass_stack_12->SetBinError(16,0.0007928174);
   VbbHcc_tags_H_mass_stack_12->SetBinError(17,0.0007340063);
   VbbHcc_tags_H_mass_stack_12->SetBinError(18,0.0002996568);
   VbbHcc_tags_H_mass_stack_12->SetBinError(19,0.0007340063);
   VbbHcc_tags_H_mass_stack_12->SetBinError(20,0.0008475574);
   VbbHcc_tags_H_mass_stack_12->SetBinError(21,0.0005993136);
   VbbHcc_tags_H_mass_stack_12->SetBinError(22,0.000670053);
   VbbHcc_tags_H_mass_stack_12->SetBinError(23,0.0005190208);
   VbbHcc_tags_H_mass_stack_12->SetBinError(24,0.0004237787);
   VbbHcc_tags_H_mass_stack_12->SetBinError(25,0.0005993136);
   VbbHcc_tags_H_mass_stack_12->SetBinError(26,0.0004237787);
   VbbHcc_tags_H_mass_stack_12->SetBinError(27,0.0005190208);
   VbbHcc_tags_H_mass_stack_12->SetBinError(28,0.0005993136);
   VbbHcc_tags_H_mass_stack_12->SetBinError(29,0.0005190208);
   VbbHcc_tags_H_mass_stack_12->SetBinError(30,0.0004237787);
   VbbHcc_tags_H_mass_stack_12->SetBinError(31,0.000670053);
   VbbHcc_tags_H_mass_stack_12->SetBinError(32,0.0004237787);
   VbbHcc_tags_H_mass_stack_12->SetBinError(33,0.0005190208);
   VbbHcc_tags_H_mass_stack_12->SetBinError(34,0.0005190208);
   VbbHcc_tags_H_mass_stack_12->SetBinError(35,0.0005993136);
   VbbHcc_tags_H_mass_stack_12->SetBinError(36,0.0002996568);
   VbbHcc_tags_H_mass_stack_12->SetBinError(37,0.0002996568);
   VbbHcc_tags_H_mass_stack_12->SetBinError(38,0.0005190208);
   VbbHcc_tags_H_mass_stack_12->SetBinError(39,0.0004237787);
   VbbHcc_tags_H_mass_stack_12->SetBinError(40,0.0002996568);
   VbbHcc_tags_H_mass_stack_12->SetBinError(41,0.0027464);
   VbbHcc_tags_H_mass_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_mass__13 = new TH1D("VbbHcc_tags_H_mass__13","",40,0,400);
   VbbHcc_tags_H_mass__13->SetBinContent(3,127);
   VbbHcc_tags_H_mass__13->SetBinContent(4,1819);
   VbbHcc_tags_H_mass__13->SetBinContent(5,4760);
   VbbHcc_tags_H_mass__13->SetBinContent(6,7166);
   VbbHcc_tags_H_mass__13->SetBinContent(7,8109);
   VbbHcc_tags_H_mass__13->SetBinContent(15,6265);
   VbbHcc_tags_H_mass__13->SetBinContent(16,6214);
   VbbHcc_tags_H_mass__13->SetBinContent(17,5826);
   VbbHcc_tags_H_mass__13->SetBinContent(18,5779);
   VbbHcc_tags_H_mass__13->SetBinContent(19,5450);
   VbbHcc_tags_H_mass__13->SetBinContent(20,5132);
   VbbHcc_tags_H_mass__13->SetBinContent(21,5020);
   VbbHcc_tags_H_mass__13->SetBinContent(22,4815);
   VbbHcc_tags_H_mass__13->SetBinContent(23,4815);
   VbbHcc_tags_H_mass__13->SetBinContent(24,4484);
   VbbHcc_tags_H_mass__13->SetBinContent(25,4288);
   VbbHcc_tags_H_mass__13->SetBinContent(26,4368);
   VbbHcc_tags_H_mass__13->SetBinContent(27,4093);
   VbbHcc_tags_H_mass__13->SetBinContent(28,4091);
   VbbHcc_tags_H_mass__13->SetBinContent(29,4016);
   VbbHcc_tags_H_mass__13->SetBinContent(30,3876);
   VbbHcc_tags_H_mass__13->SetBinContent(31,3750);
   VbbHcc_tags_H_mass__13->SetBinContent(32,3752);
   VbbHcc_tags_H_mass__13->SetBinContent(33,3693);
   VbbHcc_tags_H_mass__13->SetBinContent(34,3632);
   VbbHcc_tags_H_mass__13->SetBinContent(35,3555);
   VbbHcc_tags_H_mass__13->SetBinContent(36,3432);
   VbbHcc_tags_H_mass__13->SetBinContent(37,3336);
   VbbHcc_tags_H_mass__13->SetBinContent(38,3300);
   VbbHcc_tags_H_mass__13->SetBinContent(39,3343);
   VbbHcc_tags_H_mass__13->SetBinContent(40,3133);
   VbbHcc_tags_H_mass__13->SetBinContent(41,127680);
   VbbHcc_tags_H_mass__13->SetEntries(314274);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass__13->SetLineColor(ci);
   VbbHcc_tags_H_mass__13->SetLineWidth(2);
   VbbHcc_tags_H_mass__13->SetMarkerStyle(20);
   VbbHcc_tags_H_mass__13->SetMarkerSize(1.2);
   VbbHcc_tags_H_mass__13->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass__13->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__13->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__13->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__13->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__13->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__13->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__13->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__13->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass__13->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__13->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__13->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__13->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__13->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__13->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_mass_fx1013[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_VbbHcc_tags_H_mass_fy1013[40] = {
   0,
   0.1782546,
   95.36086,
   2104.998,
   4960.504,
   7146.866,
   7546.372,
   7204.426,
   5044.889,
   5903.861,
   5629.129,
   5339.494,
   4019.053,
   6716.966,
   4871.165,
   4732.015,
   6535.064,
   4218.239,
   2617.433,
   4099.862,
   5232.164,
   3038.252,
   4363.006,
   4186.27,
   3623.529,
   2857.457,
   2907.511,
   3521.346,
   2712.664,
   2173.439,
   4251.124,
   3070.579,
   2266.739,
   1786.778,
   4897.741,
   1364.099,
   3958.35,
   2123.683,
   2073.179,
   2764.339};
   Double_t Graph_from_VbbHcc_tags_H_mass_fex1013[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_VbbHcc_tags_H_mass_fey1013[40] = {
   0,
   0.08951969,
   47.23864,
   750.0869,
   1070.345,
   1307.801,
   1208.911,
   1031.232,
   783.6244,
   1009.862,
   1005.989,
   936.1156,
   577.8066,
   1907.466,
   931.8097,
   932.2769,
   1196.012,
   854.523,
   421.8674,
   853.5127,
   1126.882,
   670.8625,
   930.7496,
   859.1082,
   848.895,
   666.2488,
   756.5207,
   846.4781,
   666.4225,
   417.2746,
   996.37,
   762.2516,
   552.9956,
   404.7567,
   1830.088,
   154.4057,
   929.0588,
   550.7084,
   547.1762,
   668.5868};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_H_mass_fx1013,Graph_from_VbbHcc_tags_H_mass_fy1013,Graph_from_VbbHcc_tags_H_mass_fex1013,Graph_from_VbbHcc_tags_H_mass_fey1013);
   gre->SetName("Graph_from_VbbHcc_tags_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_mass1013 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_mass1013","",100,0,440);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->SetMaximum(9630.811);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_mass1013->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_mass1013);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_mass","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_mass","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_tags_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-45.96762,-0.2774193,315.7258,1.658065);
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
   
   TH1D *data_mc_ratio__14 = new TH1D("data_mc_ratio__14","",40,0,400);
   data_mc_ratio__14->SetBinContent(3,1.331783);
   data_mc_ratio__14->SetBinContent(4,0.8641338);
   data_mc_ratio__14->SetBinContent(5,0.95958);
   data_mc_ratio__14->SetBinContent(6,1.002677);
   data_mc_ratio__14->SetBinContent(7,1.074556);
   data_mc_ratio__14->SetBinContent(8,1.128195);
   data_mc_ratio__14->SetBinContent(9,1.585763);
   data_mc_ratio__14->SetBinContent(10,1.265951);
   data_mc_ratio__14->SetBinContent(11,1.298069);
   data_mc_ratio__14->SetBinContent(12,1.312297);
   data_mc_ratio__14->SetBinContent(13,1.665815);
   data_mc_ratio__14->SetBinContent(14,0.9684433);
   data_mc_ratio__14->SetBinContent(15,1.28614);
   data_mc_ratio__14->SetBinContent(16,1.313183);
   data_mc_ratio__14->SetBinContent(17,0.8914986);
   data_mc_ratio__14->SetBinContent(18,1.370003);
   data_mc_ratio__14->SetBinContent(19,2.082193);
   data_mc_ratio__14->SetBinContent(20,1.251749);
   data_mc_ratio__14->SetBinContent(21,0.9594501);
   data_mc_ratio__14->SetBinContent(22,1.584793);
   data_mc_ratio__14->SetBinContent(23,1.103597);
   data_mc_ratio__14->SetBinContent(24,1.071121);
   data_mc_ratio__14->SetBinContent(25,1.183377);
   data_mc_ratio__14->SetBinContent(26,1.528632);
   data_mc_ratio__14->SetBinContent(27,1.407733);
   data_mc_ratio__14->SetBinContent(28,1.161772);
   data_mc_ratio__14->SetBinContent(29,1.480463);
   data_mc_ratio__14->SetBinContent(30,1.783348);
   data_mc_ratio__14->SetBinContent(31,0.8821196);
   data_mc_ratio__14->SetBinContent(32,1.221919);
   data_mc_ratio__14->SetBinContent(33,1.629213);
   data_mc_ratio__14->SetBinContent(34,2.032709);
   data_mc_ratio__14->SetBinContent(35,0.7258448);
   data_mc_ratio__14->SetBinContent(36,2.515946);
   data_mc_ratio__14->SetBinContent(37,0.8427753);
   data_mc_ratio__14->SetBinContent(38,1.553905);
   data_mc_ratio__14->SetBinContent(39,1.612499);
   data_mc_ratio__14->SetBinContent(40,1.133363);
   data_mc_ratio__14->SetBinContent(41,1.360453);
   data_mc_ratio__14->SetBinError(3,0.1181767);
   data_mc_ratio__14->SetBinError(4,0.02026118);
   data_mc_ratio__14->SetBinError(5,0.01390842);
   data_mc_ratio__14->SetBinError(6,0.01184466);
   data_mc_ratio__14->SetBinError(7,0.01193288);
   data_mc_ratio__14->SetBinError(8,0.01251389);
   data_mc_ratio__14->SetBinError(9,0.01772937);
   data_mc_ratio__14->SetBinError(10,0.01464335);
   data_mc_ratio__14->SetBinError(11,0.01518547);
   data_mc_ratio__14->SetBinError(12,0.01567711);
   data_mc_ratio__14->SetBinError(13,0.02035877);
   data_mc_ratio__14->SetBinError(14,0.01200744);
   data_mc_ratio__14->SetBinError(15,0.01624904);
   data_mc_ratio__14->SetBinError(16,0.01665864);
   data_mc_ratio__14->SetBinError(17,0.0116798);
   data_mc_ratio__14->SetBinError(18,0.01802167);
   data_mc_ratio__14->SetBinError(19,0.02820478);
   data_mc_ratio__14->SetBinError(20,0.01747326);
   data_mc_ratio__14->SetBinError(21,0.01354162);
   data_mc_ratio__14->SetBinError(22,0.02283886);
   data_mc_ratio__14->SetBinError(23,0.01590422);
   data_mc_ratio__14->SetBinError(24,0.01599579);
   data_mc_ratio__14->SetBinError(25,0.01807156);
   data_mc_ratio__14->SetBinError(26,0.02312925);
   data_mc_ratio__14->SetBinError(27,0.02200389);
   data_mc_ratio__14->SetBinError(28,0.01816377);
   data_mc_ratio__14->SetBinError(29,0.02336151);
   data_mc_ratio__14->SetBinError(30,0.0286447);
   data_mc_ratio__14->SetBinError(31,0.01440495);
   data_mc_ratio__14->SetBinError(32,0.01994854);
   data_mc_ratio__14->SetBinError(33,0.02680947);
   data_mc_ratio__14->SetBinError(34,0.03372891);
   data_mc_ratio__14->SetBinError(35,0.01217374);
   data_mc_ratio__14->SetBinError(36,0.04294649);
   data_mc_ratio__14->SetBinError(37,0.01459146);
   data_mc_ratio__14->SetBinError(38,0.02705001);
   data_mc_ratio__14->SetBinError(39,0.0278889);
   data_mc_ratio__14->SetBinError(40,0.02024832);
   data_mc_ratio__14->SetBinError(41,0.0587183);
   data_mc_ratio__14->SetMinimum(0.4);
   data_mc_ratio__14->SetMaximum(1.6);
   data_mc_ratio__14->SetEntries(715.6986);
   data_mc_ratio__14->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__14->SetLineColor(ci);
   data_mc_ratio__14->SetLineWidth(2);
   data_mc_ratio__14->SetMarkerStyle(20);
   data_mc_ratio__14->SetMarkerSize(1.2);
   data_mc_ratio__14->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__14->GetXaxis()->SetRange(1,30);
   data_mc_ratio__14->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__14->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__14->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__14->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__14->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__14->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__14->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__14->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__14->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__14->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__14->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__14->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__14->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__14->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__14->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__14->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__14->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1014[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_mc_statistical_error_fy1014[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1014[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_mc_statistical_error_fey1014[40] = {
   0,
   0.5022013,
   0.4953672,
   0.3563361,
   0.2157734,
   0.1829894,
   0.1601976,
   0.1431386,
   0.1553304,
   0.1710512,
   0.1787113,
   0.1753192,
   0.1437668,
   0.2839774,
   0.1912909,
   0.1970148,
   0.1830145,
   0.2025781,
   0.161176,
   0.2081808,
   0.2153759,
   0.2208054,
   0.2133276,
   0.2052205,
   0.234273,
   0.2331614,
   0.2601953,
   0.2403848,
   0.2456709,
   0.1919881,
   0.234378,
   0.2482436,
   0.2439609,
   0.2265288,
   0.3736595,
   0.1131924,
   0.2347086,
   0.2593177,
   0.2639309,
   0.2418614};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1014,Graph_from_mc_statistical_error_fy1014,Graph_from_mc_statistical_error_fex1014,Graph_from_mc_statistical_error_fey1014);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1014 = new TH1F("Graph_Graph_from_mc_statistical_error1014","",100,0,440);
   Graph_Graph_from_mc_statistical_error1014->SetMinimum(0.3973584);
   Graph_Graph_from_mc_statistical_error1014->SetMaximum(1.602642);
   Graph_Graph_from_mc_statistical_error1014->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1014->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1014);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tags_18->cd();
   H_mass_tags_18->Modified();
   H_mass_tags_18->cd();
   H_mass_tags_18->SetSelected(H_mass_tags_18);
}
