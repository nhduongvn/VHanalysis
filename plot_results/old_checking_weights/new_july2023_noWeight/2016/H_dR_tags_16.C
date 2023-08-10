void H_dR_tags_16()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Thu Aug  3 12:23:06 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(0,0,1,1);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetFillStyle(4000);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetFrameFillStyle(1000);
   H_dR_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-36.87291,6.525,36846.03);
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
   st->SetMaximum(31578.8);
   
   TH1F *st_stack_21 = new TH1F("st_stack_21","",30,0,6);
   st_stack_21->SetMinimum(0.01);
   st_stack_21->SetMaximum(33157.74);
   st_stack_21->SetDirectory(0);
   st_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_21->SetLineColor(ci);
   st_stack_21->GetXaxis()->SetRange(1,31);
   st_stack_21->GetXaxis()->SetLabelFont(42);
   st_stack_21->GetXaxis()->SetLabelSize(0.035);
   st_stack_21->GetXaxis()->SetTitleSize(0.035);
   st_stack_21->GetXaxis()->SetTitleFont(42);
   st_stack_21->GetYaxis()->SetTitle("Events/0.2");
   st_stack_21->GetYaxis()->SetLabelFont(42);
   st_stack_21->GetYaxis()->SetLabelSize(0.05);
   st_stack_21->GetYaxis()->SetTitleSize(0.057);
   st_stack_21->GetYaxis()->SetTitleOffset(1.2);
   st_stack_21->GetYaxis()->SetTitleFont(42);
   st_stack_21->GetZaxis()->SetLabelFont(42);
   st_stack_21->GetZaxis()->SetLabelSize(0.035);
   st_stack_21->GetZaxis()->SetTitleSize(0.035);
   st_stack_21->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_21);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,13360.94);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,7322.899);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,5278.931);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,6262.98);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,3966.634);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,4528.552);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,4310.981);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,6991.087);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,5629.688);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,6649.11);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,12138.33);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,10121.95);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,9313.986);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,13176.89);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,9776.032);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,9776.403);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,7867.223);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,8592.605);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,6162.257);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,4109.035);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,4777.253);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,1677.479);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,3099.781);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,1704.296);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,1117.027);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,951.6178);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,1245.738);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(30,1382.366);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(31,1583.8);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,2413.078);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,1095.758);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,874.6348);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,1058.046);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,778.649);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,827.141);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,782.893);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,1708.183);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,1598.431);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,1060.623);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,2717.938);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,2271.192);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,1228.036);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,2398.549);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,1834.073);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,1310.585);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,1102.004);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,1774.283);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,1642.784);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,780.3822);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,2047.664);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,402.9577);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,812.2802);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,546.2125);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,392.3446);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,387.7935);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,472.4104);
   VbbHcc_tags_H_dR_stack_1->SetBinError(30,541.8815);
   VbbHcc_tags_H_dR_stack_1->SetBinError(31,604.2504);
   VbbHcc_tags_H_dR_stack_1->SetEntries(9717);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,25.65003);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,25.82315);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,25.72486);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,30.27975);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,29.03012);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,26.68739);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,30.7687);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,29.05311);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,31.84028);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,35.87087);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,33.80379);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,40.61684);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,48.16531);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,48.22988);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,44.80351);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,39.37748);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,32.00392);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,30.72774);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,25.43337);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,20.78622);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,19.45978);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,14.12903);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,12.14065);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,12.14569);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,7.40401);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,6.416059);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,5.390863);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(30,3.996235);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(31,2.60238);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,2.072316);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,1.898242);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,1.928106);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,2.179616);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,2.150217);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,1.98524);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,2.262777);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,2.195448);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,2.261476);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,2.42733);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,2.203726);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,2.531711);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,2.836906);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,2.785467);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,2.582298);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,2.448383);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,2.088193);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,2.159554);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,1.941473);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,1.819356);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,1.753842);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,1.436295);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,1.317787);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,1.467361);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,0.9941716);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,1.059769);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,0.8825676);
   VbbHcc_tags_H_dR_stack_2->SetBinError(30,0.7342206);
   VbbHcc_tags_H_dR_stack_2->SetBinError(31,0.5949884);
   VbbHcc_tags_H_dR_stack_2->SetEntries(9491);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_3 = new TH1D("VbbHcc_tags_H_dR_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(2,0.5795283);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(3,383.4857);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(4,536.217);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(5,557.0121);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(6,577.1596);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(7,578.538);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(8,556.6453);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(9,560.6971);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(10,578.7391);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(11,616.4402);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(12,659.95);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(13,715.2307);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(14,763.2239);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(15,815.5113);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(16,837.2847);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(17,791.1445);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(18,733.8291);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(19,654.9072);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(20,562.644);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(21,474.9461);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(22,385.0271);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(23,320.0264);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(24,254.5142);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(25,207.9933);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(26,177.0249);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(27,139.3798);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(28,113.3378);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(29,92.43646);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(30,60.1496);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(31,50.89634);
   VbbHcc_tags_H_dR_stack_3->SetBinError(2,0.1871093);
   VbbHcc_tags_H_dR_stack_3->SetBinError(3,4.884645);
   VbbHcc_tags_H_dR_stack_3->SetBinError(4,5.789676);
   VbbHcc_tags_H_dR_stack_3->SetBinError(5,5.929587);
   VbbHcc_tags_H_dR_stack_3->SetBinError(6,6.036131);
   VbbHcc_tags_H_dR_stack_3->SetBinError(7,6.037534);
   VbbHcc_tags_H_dR_stack_3->SetBinError(8,5.912316);
   VbbHcc_tags_H_dR_stack_3->SetBinError(9,5.936763);
   VbbHcc_tags_H_dR_stack_3->SetBinError(10,6.028839);
   VbbHcc_tags_H_dR_stack_3->SetBinError(11,6.229009);
   VbbHcc_tags_H_dR_stack_3->SetBinError(12,6.436481);
   VbbHcc_tags_H_dR_stack_3->SetBinError(13,6.707739);
   VbbHcc_tags_H_dR_stack_3->SetBinError(14,6.932676);
   VbbHcc_tags_H_dR_stack_3->SetBinError(15,7.173126);
   VbbHcc_tags_H_dR_stack_3->SetBinError(16,7.272718);
   VbbHcc_tags_H_dR_stack_3->SetBinError(17,7.064324);
   VbbHcc_tags_H_dR_stack_3->SetBinError(18,6.804167);
   VbbHcc_tags_H_dR_stack_3->SetBinError(19,6.434342);
   VbbHcc_tags_H_dR_stack_3->SetBinError(20,5.957311);
   VbbHcc_tags_H_dR_stack_3->SetBinError(21,5.467726);
   VbbHcc_tags_H_dR_stack_3->SetBinError(22,4.920745);
   VbbHcc_tags_H_dR_stack_3->SetBinError(23,4.478127);
   VbbHcc_tags_H_dR_stack_3->SetBinError(24,3.991662);
   VbbHcc_tags_H_dR_stack_3->SetBinError(25,3.617652);
   VbbHcc_tags_H_dR_stack_3->SetBinError(26,3.330519);
   VbbHcc_tags_H_dR_stack_3->SetBinError(27,2.95346);
   VbbHcc_tags_H_dR_stack_3->SetBinError(28,2.657413);
   VbbHcc_tags_H_dR_stack_3->SetBinError(29,2.399941);
   VbbHcc_tags_H_dR_stack_3->SetBinError(30,1.94176);
   VbbHcc_tags_H_dR_stack_3->SetBinError(31,1.775139);
   VbbHcc_tags_H_dR_stack_3->SetEntries(225965);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_4 = new TH1D("VbbHcc_tags_H_dR_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(2,0.066575);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(3,74.09892);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(4,102.2113);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(5,83.91601);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(6,87.4677);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(7,81.26126);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(8,65.17055);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(9,76.79939);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(10,76.97436);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(11,78.97686);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(12,96.72413);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(13,99.66761);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(14,99.85157);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(15,121.2386);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(16,129.0021);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(17,129.8209);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(18,123.8125);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(19,96.43762);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(20,76.02622);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(21,85.43685);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(22,44.90167);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(23,37.20659);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(24,31.70156);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(25,23.80507);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(26,27.69966);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(27,19.05547);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(28,16.42829);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(29,12.49756);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(30,7.75159);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(31,5.84058);
   VbbHcc_tags_H_dR_stack_4->SetBinError(2,0.066575);
   VbbHcc_tags_H_dR_stack_4->SetBinError(3,6.023065);
   VbbHcc_tags_H_dR_stack_4->SetBinError(4,6.064407);
   VbbHcc_tags_H_dR_stack_4->SetBinError(5,4.640567);
   VbbHcc_tags_H_dR_stack_4->SetBinError(6,7.485255);
   VbbHcc_tags_H_dR_stack_4->SetBinError(7,8.650085);
   VbbHcc_tags_H_dR_stack_4->SetBinError(8,6.151512);
   VbbHcc_tags_H_dR_stack_4->SetBinError(9,8.191242);
   VbbHcc_tags_H_dR_stack_4->SetBinError(10,8.570443);
   VbbHcc_tags_H_dR_stack_4->SetBinError(11,7.344131);
   VbbHcc_tags_H_dR_stack_4->SetBinError(12,9.15771);
   VbbHcc_tags_H_dR_stack_4->SetBinError(13,8.047464);
   VbbHcc_tags_H_dR_stack_4->SetBinError(14,7.122106);
   VbbHcc_tags_H_dR_stack_4->SetBinError(15,9.722452);
   VbbHcc_tags_H_dR_stack_4->SetBinError(16,8.689163);
   VbbHcc_tags_H_dR_stack_4->SetBinError(17,8.359536);
   VbbHcc_tags_H_dR_stack_4->SetBinError(18,9.067882);
   VbbHcc_tags_H_dR_stack_4->SetBinError(19,7.967482);
   VbbHcc_tags_H_dR_stack_4->SetBinError(20,5.770771);
   VbbHcc_tags_H_dR_stack_4->SetBinError(21,9.755793);
   VbbHcc_tags_H_dR_stack_4->SetBinError(22,4.577551);
   VbbHcc_tags_H_dR_stack_4->SetBinError(23,3.652879);
   VbbHcc_tags_H_dR_stack_4->SetBinError(24,4.366347);
   VbbHcc_tags_H_dR_stack_4->SetBinError(25,3.303729);
   VbbHcc_tags_H_dR_stack_4->SetBinError(26,5.019202);
   VbbHcc_tags_H_dR_stack_4->SetBinError(27,4.087032);
   VbbHcc_tags_H_dR_stack_4->SetBinError(28,1.710338);
   VbbHcc_tags_H_dR_stack_4->SetBinError(29,1.436262);
   VbbHcc_tags_H_dR_stack_4->SetBinError(30,1.118675);
   VbbHcc_tags_H_dR_stack_4->SetBinError(31,1.058553);
   VbbHcc_tags_H_dR_stack_4->SetEntries(14953);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_5 = new TH1D("VbbHcc_tags_H_dR_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(3,13.91088);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(4,6.783068);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(5,7.789247);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(6,6.176967);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(7,7.825234);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(8,3.687788);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(9,4.850177);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(10,5.650662);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(11,6.941169);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(12,8.2313);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(13,9.082545);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(14,7.222249);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(15,12.44849);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(16,11.15405);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(17,12.23804);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(18,9.999531);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(19,10.52673);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(20,10.58545);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(21,4.871899);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(22,5.137285);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(23,2.854118);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(24,2.809437);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(25,3.632223);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(26,1.461034);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(27,2.404605);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(28,8.713939);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(29,1.417159);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(30,0.7886192);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(31,0.5220909);
   VbbHcc_tags_H_dR_stack_5->SetBinError(3,6.137185);
   VbbHcc_tags_H_dR_stack_5->SetBinError(4,0.9502809);
   VbbHcc_tags_H_dR_stack_5->SetBinError(5,1.696743);
   VbbHcc_tags_H_dR_stack_5->SetBinError(6,1.571267);
   VbbHcc_tags_H_dR_stack_5->SetBinError(7,1.951633);
   VbbHcc_tags_H_dR_stack_5->SetBinError(8,0.582288);
   VbbHcc_tags_H_dR_stack_5->SetBinError(9,1.546972);
   VbbHcc_tags_H_dR_stack_5->SetBinError(10,1.219623);
   VbbHcc_tags_H_dR_stack_5->SetBinError(11,1.399271);
   VbbHcc_tags_H_dR_stack_5->SetBinError(12,1.685038);
   VbbHcc_tags_H_dR_stack_5->SetBinError(13,1.396875);
   VbbHcc_tags_H_dR_stack_5->SetBinError(14,1.314438);
   VbbHcc_tags_H_dR_stack_5->SetBinError(15,2.313033);
   VbbHcc_tags_H_dR_stack_5->SetBinError(16,2.014611);
   VbbHcc_tags_H_dR_stack_5->SetBinError(17,2.238403);
   VbbHcc_tags_H_dR_stack_5->SetBinError(18,1.682312);
   VbbHcc_tags_H_dR_stack_5->SetBinError(19,2.226557);
   VbbHcc_tags_H_dR_stack_5->SetBinError(20,2.249653);
   VbbHcc_tags_H_dR_stack_5->SetBinError(21,1.238931);
   VbbHcc_tags_H_dR_stack_5->SetBinError(22,1.54742);
   VbbHcc_tags_H_dR_stack_5->SetBinError(23,0.5052988);
   VbbHcc_tags_H_dR_stack_5->SetBinError(24,0.69045);
   VbbHcc_tags_H_dR_stack_5->SetBinError(25,1.225697);
   VbbHcc_tags_H_dR_stack_5->SetBinError(26,0.4447477);
   VbbHcc_tags_H_dR_stack_5->SetBinError(27,1.085264);
   VbbHcc_tags_H_dR_stack_5->SetBinError(28,6.177789);
   VbbHcc_tags_H_dR_stack_5->SetBinError(29,0.478465);
   VbbHcc_tags_H_dR_stack_5->SetBinError(30,0.2712192);
   VbbHcc_tags_H_dR_stack_5->SetBinError(31,0.2115098);
   VbbHcc_tags_H_dR_stack_5->SetEntries(3420);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_6 = new TH1D("VbbHcc_tags_H_dR_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(5,0.1343693);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(6,0.1343693);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(9,0.1343693);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(12,0.1343693);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(13,0.1343693);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(15,0.2687386);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(16,0.2687386);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(18,0.1343693);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(20,0.1343693);
   VbbHcc_tags_H_dR_stack_6->SetBinError(5,0.1343693);
   VbbHcc_tags_H_dR_stack_6->SetBinError(6,0.1343693);
   VbbHcc_tags_H_dR_stack_6->SetBinError(9,0.1343693);
   VbbHcc_tags_H_dR_stack_6->SetBinError(12,0.1343693);
   VbbHcc_tags_H_dR_stack_6->SetBinError(13,0.1343693);
   VbbHcc_tags_H_dR_stack_6->SetBinError(15,0.1900269);
   VbbHcc_tags_H_dR_stack_6->SetBinError(16,0.1900269);
   VbbHcc_tags_H_dR_stack_6->SetBinError(18,0.1343693);
   VbbHcc_tags_H_dR_stack_6->SetBinError(20,0.1343693);
   VbbHcc_tags_H_dR_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_7 = new TH1D("VbbHcc_tags_H_dR_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(3,0.6543518);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(4,0.4362346);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(5,0.4362346);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(7,0.3271759);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(9,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(10,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(12,0.3271759);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(13,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(14,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(15,0.2181173);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(16,0.2181173);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(17,0.4362346);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(18,0.2181173);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(19,0.5452932);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(20,0.2181173);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(21,0.2181173);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(24,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(26,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(27,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(28,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(30,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinError(3,0.267138);
   VbbHcc_tags_H_dR_stack_7->SetBinError(4,0.2181173);
   VbbHcc_tags_H_dR_stack_7->SetBinError(5,0.2181173);
   VbbHcc_tags_H_dR_stack_7->SetBinError(7,0.1888951);
   VbbHcc_tags_H_dR_stack_7->SetBinError(9,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinError(10,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinError(12,0.1888951);
   VbbHcc_tags_H_dR_stack_7->SetBinError(13,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinError(14,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinError(15,0.1542322);
   VbbHcc_tags_H_dR_stack_7->SetBinError(16,0.1542322);
   VbbHcc_tags_H_dR_stack_7->SetBinError(17,0.2181173);
   VbbHcc_tags_H_dR_stack_7->SetBinError(18,0.1542322);
   VbbHcc_tags_H_dR_stack_7->SetBinError(19,0.2438625);
   VbbHcc_tags_H_dR_stack_7->SetBinError(20,0.1542322);
   VbbHcc_tags_H_dR_stack_7->SetBinError(21,0.1542322);
   VbbHcc_tags_H_dR_stack_7->SetBinError(24,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinError(26,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinError(27,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinError(28,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetBinError(30,0.1090586);
   VbbHcc_tags_H_dR_stack_7->SetEntries(48);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_8 = new TH1D("VbbHcc_tags_H_dR_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(3,1.459243);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(4,2.675279);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(5,2.432072);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(6,2.432072);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(7,1.216036);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(8,0.9728286);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(9,0.4864143);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(10,0.9728286);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(11,0.9728286);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(12,1.216036);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(13,0.9728286);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(14,2.675279);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(15,4.134522);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(16,3.161693);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(17,3.648107);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(18,4.134522);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(19,1.216036);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(20,1.945657);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(21,2.188864);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(22,0.9728286);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(23,0.4864143);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(24,0.4864143);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(26,0.2432072);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(27,0.2432072);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(28,0.2432072);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(30,0.4864143);
   VbbHcc_tags_H_dR_stack_8->SetBinError(3,0.5957334);
   VbbHcc_tags_H_dR_stack_8->SetBinError(4,0.8066269);
   VbbHcc_tags_H_dR_stack_8->SetBinError(5,0.7690885);
   VbbHcc_tags_H_dR_stack_8->SetBinError(6,0.7690885);
   VbbHcc_tags_H_dR_stack_8->SetBinError(7,0.5438277);
   VbbHcc_tags_H_dR_stack_8->SetBinError(8,0.4864143);
   VbbHcc_tags_H_dR_stack_8->SetBinError(9,0.3439469);
   VbbHcc_tags_H_dR_stack_8->SetBinError(10,0.4864143);
   VbbHcc_tags_H_dR_stack_8->SetBinError(11,0.4864143);
   VbbHcc_tags_H_dR_stack_8->SetBinError(12,0.5438277);
   VbbHcc_tags_H_dR_stack_8->SetBinError(13,0.4864143);
   VbbHcc_tags_H_dR_stack_8->SetBinError(14,0.8066269);
   VbbHcc_tags_H_dR_stack_8->SetBinError(15,1.002769);
   VbbHcc_tags_H_dR_stack_8->SetBinError(16,0.8768959);
   VbbHcc_tags_H_dR_stack_8->SetBinError(17,0.9419372);
   VbbHcc_tags_H_dR_stack_8->SetBinError(18,1.002769);
   VbbHcc_tags_H_dR_stack_8->SetBinError(19,0.5438277);
   VbbHcc_tags_H_dR_stack_8->SetBinError(20,0.6878937);
   VbbHcc_tags_H_dR_stack_8->SetBinError(21,0.7296215);
   VbbHcc_tags_H_dR_stack_8->SetBinError(22,0.4864143);
   VbbHcc_tags_H_dR_stack_8->SetBinError(23,0.3439469);
   VbbHcc_tags_H_dR_stack_8->SetBinError(24,0.3439469);
   VbbHcc_tags_H_dR_stack_8->SetBinError(26,0.2432072);
   VbbHcc_tags_H_dR_stack_8->SetBinError(27,0.2432072);
   VbbHcc_tags_H_dR_stack_8->SetBinError(28,0.2432072);
   VbbHcc_tags_H_dR_stack_8->SetBinError(30,0.3439469);
   VbbHcc_tags_H_dR_stack_8->SetEntries(173);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_9 = new TH1D("VbbHcc_tags_H_dR_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(2,0.001373951);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(3,1.38769);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(4,2.485477);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(5,2.67096);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(6,2.216183);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(7,1.544321);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(8,1.162362);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(9,0.9274168);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(10,0.9521479);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(11,1.114274);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(12,1.416543);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(13,1.768275);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(14,2.261523);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(15,2.886671);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(16,3.105129);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(17,3.024066);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(18,2.646229);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(19,1.983985);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(20,1.334106);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(21,1.038707);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(22,0.7048368);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(23,0.4575256);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(24,0.3599751);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(25,0.3599751);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(26,0.2940255);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(27,0.2706683);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(28,0.2967734);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(29,0.2665465);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(30,0.1525085);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(31,0.083811);
   VbbHcc_tags_H_dR_stack_9->SetBinError(2,0.001373951);
   VbbHcc_tags_H_dR_stack_9->SetBinError(3,0.04366484);
   VbbHcc_tags_H_dR_stack_9->SetBinError(4,0.05843734);
   VbbHcc_tags_H_dR_stack_9->SetBinError(5,0.06057861);
   VbbHcc_tags_H_dR_stack_9->SetBinError(6,0.05518085);
   VbbHcc_tags_H_dR_stack_9->SetBinError(7,0.04606322);
   VbbHcc_tags_H_dR_stack_9->SetBinError(8,0.03996284);
   VbbHcc_tags_H_dR_stack_9->SetBinError(9,0.03569629);
   VbbHcc_tags_H_dR_stack_9->SetBinError(10,0.03616911);
   VbbHcc_tags_H_dR_stack_9->SetBinError(11,0.03912746);
   VbbHcc_tags_H_dR_stack_9->SetBinError(12,0.04411644);
   VbbHcc_tags_H_dR_stack_9->SetBinError(13,0.04929019);
   VbbHcc_tags_H_dR_stack_9->SetBinError(14,0.05574245);
   VbbHcc_tags_H_dR_stack_9->SetBinError(15,0.06297732);
   VbbHcc_tags_H_dR_stack_9->SetBinError(16,0.06531687);
   VbbHcc_tags_H_dR_stack_9->SetBinError(17,0.06445865);
   VbbHcc_tags_H_dR_stack_9->SetBinError(18,0.0602975);
   VbbHcc_tags_H_dR_stack_9->SetBinError(19,0.05221013);
   VbbHcc_tags_H_dR_stack_9->SetBinError(20,0.04281351);
   VbbHcc_tags_H_dR_stack_9->SetBinError(21,0.0377774);
   VbbHcc_tags_H_dR_stack_9->SetBinError(22,0.0311193);
   VbbHcc_tags_H_dR_stack_9->SetBinError(23,0.02507225);
   VbbHcc_tags_H_dR_stack_9->SetBinError(24,0.02223934);
   VbbHcc_tags_H_dR_stack_9->SetBinError(25,0.02223934);
   VbbHcc_tags_H_dR_stack_9->SetBinError(26,0.02009917);
   VbbHcc_tags_H_dR_stack_9->SetBinError(27,0.01928432);
   VbbHcc_tags_H_dR_stack_9->SetBinError(28,0.02019287);
   VbbHcc_tags_H_dR_stack_9->SetBinError(29,0.01913692);
   VbbHcc_tags_H_dR_stack_9->SetBinError(30,0.01447547);
   VbbHcc_tags_H_dR_stack_9->SetBinError(31,0.0107309);
   VbbHcc_tags_H_dR_stack_9->SetEntries(28512);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_10 = new TH1D("VbbHcc_tags_H_dR_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(3,0.5320567);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(4,1.030815);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(5,1.181911);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(6,1.115314);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(7,0.8643235);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(8,0.6731269);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(9,0.5560458);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(10,0.5295503);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(11,0.5771705);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(12,0.6996223);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(13,0.8553724);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(14,0.976034);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(15,1.075213);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(16,1.129994);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(17,1.110301);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(18,1.008974);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(19,0.7723057);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(20,0.658447);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(21,0.4873009);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(22,0.3523175);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(23,0.255645);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(24,0.2312979);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(25,0.1865421);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(26,0.1883323);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(27,0.1743685);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(28,0.1374897);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(29,0.1049075);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(30,0.0705351);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(31,0.04117531);
   VbbHcc_tags_H_dR_stack_10->SetBinError(3,0.01380221);
   VbbHcc_tags_H_dR_stack_10->SetBinError(4,0.01921144);
   VbbHcc_tags_H_dR_stack_10->SetBinError(5,0.0205713);
   VbbHcc_tags_H_dR_stack_10->SetBinError(6,0.01998334);
   VbbHcc_tags_H_dR_stack_10->SetBinError(7,0.0175917);
   VbbHcc_tags_H_dR_stack_10->SetBinError(8,0.01552451);
   VbbHcc_tags_H_dR_stack_10->SetBinError(9,0.01410993);
   VbbHcc_tags_H_dR_stack_10->SetBinError(10,0.01376966);
   VbbHcc_tags_H_dR_stack_10->SetBinError(11,0.01437545);
   VbbHcc_tags_H_dR_stack_10->SetBinError(12,0.0158271);
   VbbHcc_tags_H_dR_stack_10->SetBinError(13,0.01750037);
   VbbHcc_tags_H_dR_stack_10->SetBinError(14,0.01869399);
   VbbHcc_tags_H_dR_stack_10->SetBinError(15,0.0196208);
   VbbHcc_tags_H_dR_stack_10->SetBinError(16,0.02011442);
   VbbHcc_tags_H_dR_stack_10->SetBinError(17,0.01993838);
   VbbHcc_tags_H_dR_stack_10->SetBinError(18,0.01900682);
   VbbHcc_tags_H_dR_stack_10->SetBinError(19,0.01662892);
   VbbHcc_tags_H_dR_stack_10->SetBinError(20,0.0153543);
   VbbHcc_tags_H_dR_stack_10->SetBinError(21,0.01320895);
   VbbHcc_tags_H_dR_stack_10->SetBinError(22,0.01123147);
   VbbHcc_tags_H_dR_stack_10->SetBinError(23,0.009567273);
   VbbHcc_tags_H_dR_stack_10->SetBinError(24,0.009100292);
   VbbHcc_tags_H_dR_stack_10->SetBinError(25,0.008172557);
   VbbHcc_tags_H_dR_stack_10->SetBinError(26,0.008211679);
   VbbHcc_tags_H_dR_stack_10->SetBinError(27,0.007901391);
   VbbHcc_tags_H_dR_stack_10->SetBinError(28,0.007016244);
   VbbHcc_tags_H_dR_stack_10->SetBinError(29,0.006128764);
   VbbHcc_tags_H_dR_stack_10->SetBinError(30,0.005025418);
   VbbHcc_tags_H_dR_stack_10->SetBinError(31,0.003839618);
   VbbHcc_tags_H_dR_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_11 = new TH1D("VbbHcc_tags_H_dR_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(4,0.01094003);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(5,0.005470015);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(6,0.008205022);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(7,0.005470015);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(9,0.008205022);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(10,0.005470015);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(13,0.002735007);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(14,0.005470015);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(15,0.002735007);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(16,0.01094003);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(17,0.002735007);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(18,0.01094003);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(19,0.005470015);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(20,0.002735007);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(21,0.002735007);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(22,0.002735007);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(24,0.002735007);
   VbbHcc_tags_H_dR_stack_11->SetBinError(4,0.005470015);
   VbbHcc_tags_H_dR_stack_11->SetBinError(5,0.003867885);
   VbbHcc_tags_H_dR_stack_11->SetBinError(6,0.004737172);
   VbbHcc_tags_H_dR_stack_11->SetBinError(7,0.003867885);
   VbbHcc_tags_H_dR_stack_11->SetBinError(9,0.004737172);
   VbbHcc_tags_H_dR_stack_11->SetBinError(10,0.003867885);
   VbbHcc_tags_H_dR_stack_11->SetBinError(13,0.002735007);
   VbbHcc_tags_H_dR_stack_11->SetBinError(14,0.003867885);
   VbbHcc_tags_H_dR_stack_11->SetBinError(15,0.002735007);
   VbbHcc_tags_H_dR_stack_11->SetBinError(16,0.005470015);
   VbbHcc_tags_H_dR_stack_11->SetBinError(17,0.002735007);
   VbbHcc_tags_H_dR_stack_11->SetBinError(18,0.005470015);
   VbbHcc_tags_H_dR_stack_11->SetBinError(19,0.003867885);
   VbbHcc_tags_H_dR_stack_11->SetBinError(20,0.002735007);
   VbbHcc_tags_H_dR_stack_11->SetBinError(21,0.002735007);
   VbbHcc_tags_H_dR_stack_11->SetBinError(22,0.002735007);
   VbbHcc_tags_H_dR_stack_11->SetBinError(23,0.002735007);
   VbbHcc_tags_H_dR_stack_11->SetBinError(24,0.002735007);
   VbbHcc_tags_H_dR_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_12 = new TH1D("VbbHcc_tags_H_dR_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(3,0.0007145317);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(4,0.002500861);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(5,0.005358988);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(6,0.002500861);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(7,0.005358988);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(8,0.003215393);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(9,0.001071798);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(10,0.001071798);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(11,0.002500861);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(12,0.001429063);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(13,0.002143595);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(14,0.001429063);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(15,0.001429063);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(16,0.001786329);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(17,0.001429063);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(18,0.002500861);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(19,0.001786329);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(20,0.0007145317);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(21,0.001071798);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(22,0.001071798);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(23,0.001429063);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(25,0.0003572658);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(26,0.0007145317);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(27,0.0003572658);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(28,0.0007145317);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(29,0.0003572658);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(31,0.0003572658);
   VbbHcc_tags_H_dR_stack_12->SetBinError(3,0.0005052502);
   VbbHcc_tags_H_dR_stack_12->SetBinError(4,0.0009452366);
   VbbHcc_tags_H_dR_stack_12->SetBinError(5,0.001383685);
   VbbHcc_tags_H_dR_stack_12->SetBinError(6,0.0009452366);
   VbbHcc_tags_H_dR_stack_12->SetBinError(7,0.001383685);
   VbbHcc_tags_H_dR_stack_12->SetBinError(8,0.001071798);
   VbbHcc_tags_H_dR_stack_12->SetBinError(9,0.0006188026);
   VbbHcc_tags_H_dR_stack_12->SetBinError(10,0.0006188026);
   VbbHcc_tags_H_dR_stack_12->SetBinError(11,0.0009452366);
   VbbHcc_tags_H_dR_stack_12->SetBinError(12,0.0007145317);
   VbbHcc_tags_H_dR_stack_12->SetBinError(13,0.000875119);
   VbbHcc_tags_H_dR_stack_12->SetBinError(14,0.0007145317);
   VbbHcc_tags_H_dR_stack_12->SetBinError(15,0.0007145317);
   VbbHcc_tags_H_dR_stack_12->SetBinError(16,0.0007988707);
   VbbHcc_tags_H_dR_stack_12->SetBinError(17,0.0007145317);
   VbbHcc_tags_H_dR_stack_12->SetBinError(18,0.0009452366);
   VbbHcc_tags_H_dR_stack_12->SetBinError(19,0.0007988707);
   VbbHcc_tags_H_dR_stack_12->SetBinError(20,0.0005052502);
   VbbHcc_tags_H_dR_stack_12->SetBinError(21,0.0006188026);
   VbbHcc_tags_H_dR_stack_12->SetBinError(22,0.0006188026);
   VbbHcc_tags_H_dR_stack_12->SetBinError(23,0.0007145317);
   VbbHcc_tags_H_dR_stack_12->SetBinError(25,0.0003572658);
   VbbHcc_tags_H_dR_stack_12->SetBinError(26,0.0005052502);
   VbbHcc_tags_H_dR_stack_12->SetBinError(27,0.0003572658);
   VbbHcc_tags_H_dR_stack_12->SetBinError(28,0.0005052502);
   VbbHcc_tags_H_dR_stack_12->SetBinError(29,0.0003572658);
   VbbHcc_tags_H_dR_stack_12->SetBinError(31,0.0003572658);
   VbbHcc_tags_H_dR_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR__56 = new TH1D("VbbHcc_tags_H_dR__56","",30,0,6);
   VbbHcc_tags_H_dR__56->SetBinContent(2,5);
   VbbHcc_tags_H_dR__56->SetBinContent(3,4692);
   VbbHcc_tags_H_dR__56->SetBinContent(4,4771);
   VbbHcc_tags_H_dR__56->SetBinContent(5,3752);
   VbbHcc_tags_H_dR__56->SetBinContent(6,3494);
   VbbHcc_tags_H_dR__56->SetBinContent(7,3435);
   VbbHcc_tags_H_dR__56->SetBinContent(8,3328);
   VbbHcc_tags_H_dR__56->SetBinContent(9,3541);
   VbbHcc_tags_H_dR__56->SetBinContent(10,3611);
   VbbHcc_tags_H_dR__56->SetBinContent(11,3947);
   VbbHcc_tags_H_dR__56->SetBinContent(12,4233);
   VbbHcc_tags_H_dR__56->SetBinContent(13,4574);
   VbbHcc_tags_H_dR__56->SetBinContent(14,5199);
   VbbHcc_tags_H_dR__56->SetBinContent(15,5610);
   VbbHcc_tags_H_dR__56->SetBinContent(16,6097);
   VbbHcc_tags_H_dR__56->SetBinContent(17,5738);
   VbbHcc_tags_H_dR__56->SetBinContent(18,5347);
   VbbHcc_tags_H_dR__56->SetBinContent(19,4797);
   VbbHcc_tags_H_dR__56->SetBinContent(20,4119);
   VbbHcc_tags_H_dR__56->SetBinContent(21,3456);
   VbbHcc_tags_H_dR__56->SetBinContent(22,2827);
   VbbHcc_tags_H_dR__56->SetBinContent(23,2257);
   VbbHcc_tags_H_dR__56->SetBinContent(24,1816);
   VbbHcc_tags_H_dR__56->SetBinContent(25,1429);
   VbbHcc_tags_H_dR__56->SetBinContent(26,1109);
   VbbHcc_tags_H_dR__56->SetBinContent(27,994);
   VbbHcc_tags_H_dR__56->SetBinContent(28,779);
   VbbHcc_tags_H_dR__56->SetBinContent(29,695);
   VbbHcc_tags_H_dR__56->SetBinContent(30,505);
   VbbHcc_tags_H_dR__56->SetBinContent(31,388);
   VbbHcc_tags_H_dR__56->SetEntries(96574);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR__56->SetLineColor(ci);
   VbbHcc_tags_H_dR__56->SetLineWidth(2);
   VbbHcc_tags_H_dR__56->SetMarkerStyle(20);
   VbbHcc_tags_H_dR__56->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR__56->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR__56->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__56->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__56->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__56->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__56->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__56->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__56->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__56->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR__56->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__56->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__56->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__56->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__56->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__56->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_fx1041[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fy1041[30] = {
   0,
   0.6474772,
   13862.12,
   8000.575,
   5960.239,
   6969.973,
   4667.251,
   5183.555,
   4986.319,
   7684.074,
   6366.554,
   7453.681,
   12999.96,
   11038.89,
   10319.94,
   14210.46,
   10762.26,
   10691.58,
   8665.624,
   9276.883,
   6756.882,
   4566.921,
   5158.004,
   1981.823,
   3347.899,
   1923.463,
   1286.069,
   1097.301,
   1357.851,
   1455.871};
   Double_t Graph_from_VbbHcc_tags_H_dR_fex1041[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fey1041[30] = {
   0,
   0.1986051,
   2413.099,
   1095.792,
   874.6713,
   1058.093,
   778.7261,
   827.1877,
   782.9633,
   1708.217,
   1598.462,
   1060.686,
   2717.959,
   2271.216,
   1228.102,
   2398.579,
   1834.109,
   1310.638,
   1102.056,
   1774.305,
   1642.824,
   780.4149,
   2047.673,
   403.0045,
   812.2969,
   546.248,
   392.3799,
   387.8571,
   472.4198,
   541.8869};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_fx1041,Graph_from_VbbHcc_tags_H_dR_fy1041,Graph_from_VbbHcc_tags_H_dR_fex1041,Graph_from_VbbHcc_tags_H_dR_fey1041);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR1041 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR1041","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetMaximum(18269.94);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR1041);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR","MC unc. (stat.)","fl");

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
   H_dR_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__57 = new TH1D("data_mc_ratio__57","",30,0,6);
   data_mc_ratio__57->SetBinContent(2,7.722279);
   data_mc_ratio__57->SetBinContent(3,0.3384764);
   data_mc_ratio__57->SetBinContent(4,0.5963321);
   data_mc_ratio__57->SetBinContent(5,0.6295049);
   data_mc_ratio__57->SetBinContent(6,0.5012932);
   data_mc_ratio__57->SetBinContent(7,0.7359793);
   data_mc_ratio__57->SetBinContent(8,0.6420304);
   data_mc_ratio__57->SetBinContent(9,0.7101431);
   data_mc_ratio__57->SetBinContent(10,0.469933);
   data_mc_ratio__57->SetBinContent(11,0.6199587);
   data_mc_ratio__57->SetBinContent(12,0.5679073);
   data_mc_ratio__57->SetBinContent(13,0.3518473);
   data_mc_ratio__57->SetBinContent(14,0.4709713);
   data_mc_ratio__57->SetBinContent(15,0.5436079);
   data_mc_ratio__57->SetBinContent(16,0.4290501);
   data_mc_ratio__57->SetBinContent(17,0.5331593);
   data_mc_ratio__57->SetBinContent(18,0.5001133);
   data_mc_ratio__57->SetBinContent(19,0.5535666);
   data_mc_ratio__57->SetBinContent(20,0.4440069);
   data_mc_ratio__57->SetBinContent(21,0.5114785);
   data_mc_ratio__57->SetBinContent(22,0.6190166);
   data_mc_ratio__57->SetBinContent(23,0.4375724);
   data_mc_ratio__57->SetBinContent(24,0.9163281);
   data_mc_ratio__57->SetBinContent(25,0.4268348);
   data_mc_ratio__57->SetBinContent(26,0.5765643);
   data_mc_ratio__57->SetBinContent(27,0.7728981);
   data_mc_ratio__57->SetBinContent(28,0.7099236);
   data_mc_ratio__57->SetBinContent(29,0.5118381);
   data_mc_ratio__57->SetBinContent(30,0.3468714);
   data_mc_ratio__57->SetBinContent(31,0.2360403);
   data_mc_ratio__57->SetBinError(2,3.453508);
   data_mc_ratio__57->SetBinError(3,0.004941393);
   data_mc_ratio__57->SetBinError(4,0.008633432);
   data_mc_ratio__57->SetBinError(5,0.01027703);
   data_mc_ratio__57->SetBinError(6,0.008480674);
   data_mc_ratio__57->SetBinError(7,0.01255747);
   data_mc_ratio__57->SetBinError(8,0.0111292);
   data_mc_ratio__57->SetBinError(9,0.01193391);
   data_mc_ratio__57->SetBinError(10,0.007820278);
   data_mc_ratio__57->SetBinError(11,0.009868001);
   data_mc_ratio__57->SetBinError(12,0.008728775);
   data_mc_ratio__57->SetBinError(13,0.005202429);
   data_mc_ratio__57->SetBinError(14,0.006531825);
   data_mc_ratio__57->SetBinError(15,0.007257789);
   data_mc_ratio__57->SetBinError(16,0.005494775);
   data_mc_ratio__57->SetBinError(17,0.007038445);
   data_mc_ratio__57->SetBinError(18,0.006839326);
   data_mc_ratio__57->SetBinError(19,0.007992544);
   data_mc_ratio__57->SetBinError(20,0.006918211);
   data_mc_ratio__57->SetBinError(21,0.008700426);
   data_mc_ratio__57->SetBinError(22,0.01164232);
   data_mc_ratio__57->SetBinError(23,0.009210519);
   data_mc_ratio__57->SetBinError(24,0.0215027);
   data_mc_ratio__57->SetBinError(25,0.01129129);
   data_mc_ratio__57->SetBinError(26,0.01731338);
   data_mc_ratio__57->SetBinError(27,0.02451484);
   data_mc_ratio__57->SetBinError(28,0.02543565);
   data_mc_ratio__57->SetBinError(29,0.01941512);
   data_mc_ratio__57->SetBinError(30,0.01543558);
   data_mc_ratio__57->SetBinError(31,0.0875917);
   data_mc_ratio__57->SetMinimum(0.4);
   data_mc_ratio__57->SetMaximum(1.6);
   data_mc_ratio__57->SetEntries(29.89099);
   data_mc_ratio__57->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__57->SetLineColor(ci);
   data_mc_ratio__57->SetLineWidth(2);
   data_mc_ratio__57->SetMarkerStyle(20);
   data_mc_ratio__57->SetMarkerSize(1.2);
   data_mc_ratio__57->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__57->GetXaxis()->SetRange(1,31);
   data_mc_ratio__57->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__57->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__57->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__57->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__57->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__57->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__57->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__57->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__57->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__57->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__57->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__57->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__57->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__57->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__57->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__57->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__57->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1042[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1042[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1042[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1042[30] = {
   0,
   0.3067368,
   0.1740787,
   0.1369642,
   0.146751,
   0.1518074,
   0.166849,
   0.1595792,
   0.1570223,
   0.2223061,
   0.2510718,
   0.1423036,
   0.2090745,
   0.2057468,
   0.1190028,
   0.1687896,
   0.1704204,
   0.1225861,
   0.1271757,
   0.1912609,
   0.2431334,
   0.1708843,
   0.3969895,
   0.2033504,
   0.2426288,
   0.2839919,
   0.3051003,
   0.3534646,
   0.3479172,
   0.3722081};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1042,Graph_from_mc_statistical_error_fy1042,Graph_from_mc_statistical_error_fex1042,Graph_from_mc_statistical_error_fey1042);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1042 = new TH1F("Graph_Graph_from_mc_statistical_error1042","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1042->SetMinimum(0.5236126);
   Graph_Graph_from_mc_statistical_error1042->SetMaximum(1.476387);
   Graph_Graph_from_mc_statistical_error1042->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1042->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1042);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}
