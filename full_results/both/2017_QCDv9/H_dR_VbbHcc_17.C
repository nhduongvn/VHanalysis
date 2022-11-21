void H_dR_VbbHcc_17()
{
//=========Macro generated from canvas: H_dR_VbbHcc_17/H_dR_VbbHcc_17
//=========  (Mon Nov 21 13:07:00 2022) by ROOT version 6.14/09
   TCanvas *H_dR_VbbHcc_17 = new TCanvas("H_dR_VbbHcc_17", "H_dR_VbbHcc_17",0,0,600,600);
   H_dR_VbbHcc_17->SetHighLightColor(2);
   H_dR_VbbHcc_17->Range(0,0,1,1);
   H_dR_VbbHcc_17->SetFillColor(0);
   H_dR_VbbHcc_17->SetFillStyle(4000);
   H_dR_VbbHcc_17->SetBorderMode(0);
   H_dR_VbbHcc_17->SetBorderSize(2);
   H_dR_VbbHcc_17->SetFrameFillStyle(1000);
   H_dR_VbbHcc_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-5829.376,10.52419,5823557);
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
   st->SetMaximum(4991065);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",50,0,10);
   st_stack_22->SetMinimum(0.01);
   st_stack_22->SetMaximum(5240618);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetRange(1,50);
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetLabelSize(0.035);
   st_stack_22->GetXaxis()->SetTitleSize(0.035);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Events/0.2");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetLabelSize(0.05);
   st_stack_22->GetYaxis()->SetTitleSize(0.057);
   st_stack_22->GetYaxis()->SetTitleOffset(1.2);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetLabelSize(0.035);
   st_stack_22->GetZaxis()->SetTitleSize(0.035);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *VbbHcc_duong_H_dR_stack_1 = new TH1D("VbbHcc_duong_H_dR_stack_1","",50,0,10);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(3,759238.3);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(4,1084555);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(5,887269.8);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(6,866539.6);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(7,884189.2);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(8,820031.7);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(9,995929.4);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(10,1093535);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(11,1161408);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(12,1325005);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(13,1339069);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(14,1633817);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(15,1928133);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(16,1909878);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(17,1357615);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(18,949260.1);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(19,757518.4);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(20,614960.4);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(21,473724.1);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(22,374726.7);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(23,239888.5);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(24,177841.1);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(25,98549.35);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(26,53310.78);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(27,26298.63);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(28,10093.96);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(29,2345.768);
   VbbHcc_duong_H_dR_stack_1->SetBinError(3,31590.92);
   VbbHcc_duong_H_dR_stack_1->SetBinError(4,37936.05);
   VbbHcc_duong_H_dR_stack_1->SetBinError(5,34107.66);
   VbbHcc_duong_H_dR_stack_1->SetBinError(6,33782.18);
   VbbHcc_duong_H_dR_stack_1->SetBinError(7,34048.93);
   VbbHcc_duong_H_dR_stack_1->SetBinError(8,32553.52);
   VbbHcc_duong_H_dR_stack_1->SetBinError(9,36128.33);
   VbbHcc_duong_H_dR_stack_1->SetBinError(10,37977.73);
   VbbHcc_duong_H_dR_stack_1->SetBinError(11,39053.39);
   VbbHcc_duong_H_dR_stack_1->SetBinError(12,41614.04);
   VbbHcc_duong_H_dR_stack_1->SetBinError(13,41720.56);
   VbbHcc_duong_H_dR_stack_1->SetBinError(14,46002.94);
   VbbHcc_duong_H_dR_stack_1->SetBinError(15,50192.92);
   VbbHcc_duong_H_dR_stack_1->SetBinError(16,50138.31);
   VbbHcc_duong_H_dR_stack_1->SetBinError(17,42346.5);
   VbbHcc_duong_H_dR_stack_1->SetBinError(18,35137.11);
   VbbHcc_duong_H_dR_stack_1->SetBinError(19,31418.29);
   VbbHcc_duong_H_dR_stack_1->SetBinError(20,28436.56);
   VbbHcc_duong_H_dR_stack_1->SetBinError(21,24840.09);
   VbbHcc_duong_H_dR_stack_1->SetBinError(22,22290.78);
   VbbHcc_duong_H_dR_stack_1->SetBinError(23,17708.2);
   VbbHcc_duong_H_dR_stack_1->SetBinError(24,15056.33);
   VbbHcc_duong_H_dR_stack_1->SetBinError(25,11312.51);
   VbbHcc_duong_H_dR_stack_1->SetBinError(26,8405.896);
   VbbHcc_duong_H_dR_stack_1->SetBinError(27,5719.996);
   VbbHcc_duong_H_dR_stack_1->SetBinError(28,3300.627);
   VbbHcc_duong_H_dR_stack_1->SetBinError(29,1781.285);
   VbbHcc_duong_H_dR_stack_1->SetEntries(17541);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_duong_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_1,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_2 = new TH1D("VbbHcc_duong_H_dR_stack_2","",50,0,10);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(2,5.90885);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(3,5297.598);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(4,8529.289);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(5,9515.997);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(6,11217.92);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(7,12473.2);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(8,13126.81);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(9,13375.19);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(10,13605.06);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(11,14033.8);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(12,14940.29);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(13,16165.22);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(14,17367.08);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(15,18695.58);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(16,18944.86);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(17,11690.13);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(18,8191.153);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(19,6088.492);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(20,4496.072);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(21,3214.458);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(22,2281.978);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(23,1578.751);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(24,999.0906);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(25,570.3854);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(26,300.4159);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(27,124.8629);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(28,35.2527);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(29,3.278447);
   VbbHcc_duong_H_dR_stack_2->SetBinError(2,1.119363);
   VbbHcc_duong_H_dR_stack_2->SetBinError(3,32.87663);
   VbbHcc_duong_H_dR_stack_2->SetBinError(4,41.41909);
   VbbHcc_duong_H_dR_stack_2->SetBinError(5,43.27607);
   VbbHcc_duong_H_dR_stack_2->SetBinError(6,45.72225);
   VbbHcc_duong_H_dR_stack_2->SetBinError(7,47.27179);
   VbbHcc_duong_H_dR_stack_2->SetBinError(8,47.94659);
   VbbHcc_duong_H_dR_stack_2->SetBinError(9,48.22268);
   VbbHcc_duong_H_dR_stack_2->SetBinError(10,48.69586);
   VbbHcc_duong_H_dR_stack_2->SetBinError(11,49.72035);
   VbbHcc_duong_H_dR_stack_2->SetBinError(12,51.65273);
   VbbHcc_duong_H_dR_stack_2->SetBinError(13,53.75567);
   VbbHcc_duong_H_dR_stack_2->SetBinError(14,55.77054);
   VbbHcc_duong_H_dR_stack_2->SetBinError(15,57.72285);
   VbbHcc_duong_H_dR_stack_2->SetBinError(16,57.68222);
   VbbHcc_duong_H_dR_stack_2->SetBinError(17,43.46455);
   VbbHcc_duong_H_dR_stack_2->SetBinError(18,35.05997);
   VbbHcc_duong_H_dR_stack_2->SetBinError(19,29.45161);
   VbbHcc_duong_H_dR_stack_2->SetBinError(20,24.5433);
   VbbHcc_duong_H_dR_stack_2->SetBinError(21,20.00398);
   VbbHcc_duong_H_dR_stack_2->SetBinError(22,16.64337);
   VbbHcc_duong_H_dR_stack_2->SetBinError(23,13.51907);
   VbbHcc_duong_H_dR_stack_2->SetBinError(24,10.46998);
   VbbHcc_duong_H_dR_stack_2->SetBinError(25,7.904395);
   VbbHcc_duong_H_dR_stack_2->SetBinError(26,5.79211);
   VbbHcc_duong_H_dR_stack_2->SetBinError(27,3.536302);
   VbbHcc_duong_H_dR_stack_2->SetBinError(28,1.78098);
   VbbHcc_duong_H_dR_stack_2->SetBinError(29,0.572575);
   VbbHcc_duong_H_dR_stack_2->SetEntries(3055962);

   ci = TColor::GetColor("#660066");
   VbbHcc_duong_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_2,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_3 = new TH1D("VbbHcc_duong_H_dR_stack_3","",50,0,10);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(2,47.6893);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(3,67220.91);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(4,121758.9);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(5,147724.4);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(6,177488.5);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(7,193924.9);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(8,199684.5);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(9,202463);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(10,206619.1);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(11,215809.1);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(12,229558.4);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(13,247187.8);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(14,266896.2);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(15,286261.3);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(16,282765.5);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(17,162734.4);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(18,104602.1);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(19,70986.83);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(20,48582.61);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(21,32796.51);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(22,21614.67);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(23,13833.07);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(24,8294.539);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(25,4492.822);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(26,2169.545);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(27,886.9889);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(28,238.5052);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(29,14.44955);
   VbbHcc_duong_H_dR_stack_3->SetBinError(2,1.837834);
   VbbHcc_duong_H_dR_stack_3->SetBinError(3,69.68551);
   VbbHcc_duong_H_dR_stack_3->SetBinError(4,93.94818);
   VbbHcc_duong_H_dR_stack_3->SetBinError(5,103.4935);
   VbbHcc_duong_H_dR_stack_3->SetBinError(6,113.3921);
   VbbHcc_duong_H_dR_stack_3->SetBinError(7,118.5371);
   VbbHcc_duong_H_dR_stack_3->SetBinError(8,120.3598);
   VbbHcc_duong_H_dR_stack_3->SetBinError(9,121.3028);
   VbbHcc_duong_H_dR_stack_3->SetBinError(10,122.6863);
   VbbHcc_duong_H_dR_stack_3->SetBinError(11,125.5369);
   VbbHcc_duong_H_dR_stack_3->SetBinError(12,129.6383);
   VbbHcc_duong_H_dR_stack_3->SetBinError(13,134.6727);
   VbbHcc_duong_H_dR_stack_3->SetBinError(14,140.1347);
   VbbHcc_duong_H_dR_stack_3->SetBinError(15,145.2305);
   VbbHcc_duong_H_dR_stack_3->SetBinError(16,144.3896);
   VbbHcc_duong_H_dR_stack_3->SetBinError(17,109.1973);
   VbbHcc_duong_H_dR_stack_3->SetBinError(18,87.1724);
   VbbHcc_duong_H_dR_stack_3->SetBinError(19,71.48663);
   VbbHcc_duong_H_dR_stack_3->SetBinError(20,58.8366);
   VbbHcc_duong_H_dR_stack_3->SetBinError(21,48.0899);
   VbbHcc_duong_H_dR_stack_3->SetBinError(22,38.83183);
   VbbHcc_duong_H_dR_stack_3->SetBinError(23,30.89157);
   VbbHcc_duong_H_dR_stack_3->SetBinError(24,23.77032);
   VbbHcc_duong_H_dR_stack_3->SetBinError(25,17.36185);
   VbbHcc_duong_H_dR_stack_3->SetBinError(26,12.0109);
   VbbHcc_duong_H_dR_stack_3->SetBinError(27,7.603902);
   VbbHcc_duong_H_dR_stack_3->SetBinError(28,3.894669);
   VbbHcc_duong_H_dR_stack_3->SetBinError(29,0.9200418);
   VbbHcc_duong_H_dR_stack_3->SetEntries(5.062272e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_duong_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_3,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_4 = new TH1D("VbbHcc_duong_H_dR_stack_4","",50,0,10);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(2,1.243557);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(3,1974.415);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(4,2604.373);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(5,2552.629);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(6,2542.102);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(7,2540.109);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(8,2534.284);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(9,2700.998);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(10,2891.733);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(11,3122.926);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(12,3404.516);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(13,3819.62);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(14,4343.097);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(15,4890.907);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(16,5082.053);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(17,3157.508);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(18,2111.236);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(19,1601.716);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(20,1151.759);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(21,854.8681);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(22,608.3937);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(23,387.9629);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(24,249.2343);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(25,130.6426);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(26,73.75973);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(27,34.54249);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(28,6.148654);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(29,0.3188814);
   VbbHcc_duong_H_dR_stack_4->SetBinError(2,0.7290038);
   VbbHcc_duong_H_dR_stack_4->SetBinError(3,27.82433);
   VbbHcc_duong_H_dR_stack_4->SetBinError(4,31.98607);
   VbbHcc_duong_H_dR_stack_4->SetBinError(5,31.69171);
   VbbHcc_duong_H_dR_stack_4->SetBinError(6,31.53501);
   VbbHcc_duong_H_dR_stack_4->SetBinError(7,31.53289);
   VbbHcc_duong_H_dR_stack_4->SetBinError(8,31.55325);
   VbbHcc_duong_H_dR_stack_4->SetBinError(9,32.45299);
   VbbHcc_duong_H_dR_stack_4->SetBinError(10,33.62452);
   VbbHcc_duong_H_dR_stack_4->SetBinError(11,34.94465);
   VbbHcc_duong_H_dR_stack_4->SetBinError(12,36.57276);
   VbbHcc_duong_H_dR_stack_4->SetBinError(13,38.63295);
   VbbHcc_duong_H_dR_stack_4->SetBinError(14,41.27489);
   VbbHcc_duong_H_dR_stack_4->SetBinError(15,43.74458);
   VbbHcc_duong_H_dR_stack_4->SetBinError(16,44.62605);
   VbbHcc_duong_H_dR_stack_4->SetBinError(17,35.15877);
   VbbHcc_duong_H_dR_stack_4->SetBinError(18,28.69714);
   VbbHcc_duong_H_dR_stack_4->SetBinError(19,24.89494);
   VbbHcc_duong_H_dR_stack_4->SetBinError(20,21.06988);
   VbbHcc_duong_H_dR_stack_4->SetBinError(21,18.11618);
   VbbHcc_duong_H_dR_stack_4->SetBinError(22,15.32126);
   VbbHcc_duong_H_dR_stack_4->SetBinError(23,12.17262);
   VbbHcc_duong_H_dR_stack_4->SetBinError(24,9.693267);
   VbbHcc_duong_H_dR_stack_4->SetBinError(25,7.017347);
   VbbHcc_duong_H_dR_stack_4->SetBinError(26,5.159192);
   VbbHcc_duong_H_dR_stack_4->SetBinError(27,3.592761);
   VbbHcc_duong_H_dR_stack_4->SetBinError(28,1.411006);
   VbbHcc_duong_H_dR_stack_4->SetBinError(29,0.3188814);
   VbbHcc_duong_H_dR_stack_4->SetEntries(148572);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_duong_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_4,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_5 = new TH1D("VbbHcc_duong_H_dR_stack_5","",50,0,10);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(3,1035.226);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(4,1916.791);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(5,1905.081);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(6,1753.987);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(7,1651.358);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(8,1691.844);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(9,1813.495);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(10,1693.765);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(11,1820.018);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(12,2017.477);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(13,2265.132);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(14,2561.5);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(15,2809.625);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(16,2817.033);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(17,1718.776);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(18,1108.882);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(19,843.859);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(20,625.3097);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(21,450.6057);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(22,342.468);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(23,251.355);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(24,131.3983);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(25,86.70151);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(26,42.98985);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(27,23.04208);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(28,4.36538);
   VbbHcc_duong_H_dR_stack_5->SetBinError(3,36.99614);
   VbbHcc_duong_H_dR_stack_5->SetBinError(4,50.38288);
   VbbHcc_duong_H_dR_stack_5->SetBinError(5,50.43162);
   VbbHcc_duong_H_dR_stack_5->SetBinError(6,48.26606);
   VbbHcc_duong_H_dR_stack_5->SetBinError(7,46.72077);
   VbbHcc_duong_H_dR_stack_5->SetBinError(8,47.31807);
   VbbHcc_duong_H_dR_stack_5->SetBinError(9,49.1173);
   VbbHcc_duong_H_dR_stack_5->SetBinError(10,47.47952);
   VbbHcc_duong_H_dR_stack_5->SetBinError(11,49.27693);
   VbbHcc_duong_H_dR_stack_5->SetBinError(12,51.82628);
   VbbHcc_duong_H_dR_stack_5->SetBinError(13,54.8618);
   VbbHcc_duong_H_dR_stack_5->SetBinError(14,58.16318);
   VbbHcc_duong_H_dR_stack_5->SetBinError(15,61.15898);
   VbbHcc_duong_H_dR_stack_5->SetBinError(16,61.27639);
   VbbHcc_duong_H_dR_stack_5->SetBinError(17,47.75668);
   VbbHcc_duong_H_dR_stack_5->SetBinError(18,38.23711);
   VbbHcc_duong_H_dR_stack_5->SetBinError(19,33.43348);
   VbbHcc_duong_H_dR_stack_5->SetBinError(20,28.67357);
   VbbHcc_duong_H_dR_stack_5->SetBinError(21,24.44187);
   VbbHcc_duong_H_dR_stack_5->SetBinError(22,21.29692);
   VbbHcc_duong_H_dR_stack_5->SetBinError(23,17.89732);
   VbbHcc_duong_H_dR_stack_5->SetBinError(24,12.84019);
   VbbHcc_duong_H_dR_stack_5->SetBinError(25,10.48779);
   VbbHcc_duong_H_dR_stack_5->SetBinError(26,7.26936);
   VbbHcc_duong_H_dR_stack_5->SetBinError(27,5.411135);
   VbbHcc_duong_H_dR_stack_5->SetBinError(28,2.248013);
   VbbHcc_duong_H_dR_stack_5->SetEntries(26540);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_duong_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_5,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_6 = new TH1D("VbbHcc_duong_H_dR_stack_6","",50,0,10);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(3,28.94713);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(4,46.07218);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(5,44.61346);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(6,54.14099);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(7,49.71969);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(8,60.90329);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(9,55.03984);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(10,63.02641);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(11,67.77623);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(12,72.52637);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(13,82.37813);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(14,86.00365);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(15,103.2618);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(16,100.6166);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(17,56.27615);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(18,38.50968);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(19,24.01456);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(20,13.88922);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(21,9.641347);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(22,11.9446);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(23,5.203905);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(24,3.410681);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(25,1.873132);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(26,0.4070028);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(27,0.2786512);
   VbbHcc_duong_H_dR_stack_6->SetBinError(3,2.572676);
   VbbHcc_duong_H_dR_stack_6->SetBinError(4,3.263621);
   VbbHcc_duong_H_dR_stack_6->SetBinError(5,3.24599);
   VbbHcc_duong_H_dR_stack_6->SetBinError(6,3.589012);
   VbbHcc_duong_H_dR_stack_6->SetBinError(7,3.427176);
   VbbHcc_duong_H_dR_stack_6->SetBinError(8,3.776553);
   VbbHcc_duong_H_dR_stack_6->SetBinError(9,3.579146);
   VbbHcc_duong_H_dR_stack_6->SetBinError(10,3.821674);
   VbbHcc_duong_H_dR_stack_6->SetBinError(11,3.967173);
   VbbHcc_duong_H_dR_stack_6->SetBinError(12,4.095357);
   VbbHcc_duong_H_dR_stack_6->SetBinError(13,4.435393);
   VbbHcc_duong_H_dR_stack_6->SetBinError(14,4.473407);
   VbbHcc_duong_H_dR_stack_6->SetBinError(15,4.930615);
   VbbHcc_duong_H_dR_stack_6->SetBinError(16,4.860421);
   VbbHcc_duong_H_dR_stack_6->SetBinError(17,3.659039);
   VbbHcc_duong_H_dR_stack_6->SetBinError(18,2.990009);
   VbbHcc_duong_H_dR_stack_6->SetBinError(19,2.381561);
   VbbHcc_duong_H_dR_stack_6->SetBinError(20,1.784922);
   VbbHcc_duong_H_dR_stack_6->SetBinError(21,1.451487);
   VbbHcc_duong_H_dR_stack_6->SetBinError(22,1.673973);
   VbbHcc_duong_H_dR_stack_6->SetBinError(23,1.125654);
   VbbHcc_duong_H_dR_stack_6->SetBinError(24,0.8458996);
   VbbHcc_duong_H_dR_stack_6->SetBinError(25,0.6018724);
   VbbHcc_duong_H_dR_stack_6->SetBinError(26,0.2888319);
   VbbHcc_duong_H_dR_stack_6->SetBinError(27,0.2786512);
   VbbHcc_duong_H_dR_stack_6->SetEntries(4860);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_duong_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_6,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_7 = new TH1D("VbbHcc_duong_H_dR_stack_7","",50,0,10);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(3,64.44081);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(4,90.05778);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(5,98.76825);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(6,105.529);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(7,102.5193);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(8,109.2131);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(9,110.3707);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(10,106.7576);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(11,113.0647);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(12,130.2773);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(13,133.4205);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(14,152.7663);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(15,161.2545);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(16,179.9255);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(17,102.5567);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(18,64.12739);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(19,41.07692);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(20,34.82113);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(21,24.31613);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(22,19.58772);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(23,11.82225);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(24,9.110276);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(25,2.783423);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(26,1.837643);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(27,1.532474);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(28,0.1804438);
   VbbHcc_duong_H_dR_stack_7->SetBinError(3,3.333372);
   VbbHcc_duong_H_dR_stack_7->SetBinError(4,3.899101);
   VbbHcc_duong_H_dR_stack_7->SetBinError(5,4.067982);
   VbbHcc_duong_H_dR_stack_7->SetBinError(6,4.237554);
   VbbHcc_duong_H_dR_stack_7->SetBinError(7,4.134148);
   VbbHcc_duong_H_dR_stack_7->SetBinError(8,4.271961);
   VbbHcc_duong_H_dR_stack_7->SetBinError(9,4.311582);
   VbbHcc_duong_H_dR_stack_7->SetBinError(10,4.226266);
   VbbHcc_duong_H_dR_stack_7->SetBinError(11,4.367073);
   VbbHcc_duong_H_dR_stack_7->SetBinError(12,4.701064);
   VbbHcc_duong_H_dR_stack_7->SetBinError(13,4.747907);
   VbbHcc_duong_H_dR_stack_7->SetBinError(14,5.068679);
   VbbHcc_duong_H_dR_stack_7->SetBinError(15,5.233589);
   VbbHcc_duong_H_dR_stack_7->SetBinError(16,5.535853);
   VbbHcc_duong_H_dR_stack_7->SetBinError(17,4.152896);
   VbbHcc_duong_H_dR_stack_7->SetBinError(18,3.30698);
   VbbHcc_duong_H_dR_stack_7->SetBinError(19,2.607446);
   VbbHcc_duong_H_dR_stack_7->SetBinError(20,2.41972);
   VbbHcc_duong_H_dR_stack_7->SetBinError(21,2.001858);
   VbbHcc_duong_H_dR_stack_7->SetBinError(22,1.821659);
   VbbHcc_duong_H_dR_stack_7->SetBinError(23,1.397286);
   VbbHcc_duong_H_dR_stack_7->SetBinError(24,1.248618);
   VbbHcc_duong_H_dR_stack_7->SetBinError(25,0.6683597);
   VbbHcc_duong_H_dR_stack_7->SetBinError(26,0.5316208);
   VbbHcc_duong_H_dR_stack_7->SetBinError(27,0.5210979);
   VbbHcc_duong_H_dR_stack_7->SetBinError(28,0.1804438);
   VbbHcc_duong_H_dR_stack_7->SetEntries(12244);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_duong_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_7,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_8 = new TH1D("VbbHcc_duong_H_dR_stack_8","",50,0,10);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(3,42.3511);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(4,79.62685);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(5,84.33087);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(6,98.20778);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(7,102.3647);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(8,108.2783);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(9,110.2636);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(10,116.6218);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(11,127.4537);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(12,122.1763);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(13,146.1625);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(14,155.7911);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(15,166.0813);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(16,157.477);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(17,83.53549);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(18,43.38672);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(19,32.87469);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(20,25.58316);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(21,15.08522);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(22,12.11309);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(23,8.627269);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(24,4.737074);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(25,2.342112);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(26,0.5561542);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(27,0.200508);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(28,0.5628852);
   VbbHcc_duong_H_dR_stack_8->SetBinError(3,3.038857);
   VbbHcc_duong_H_dR_stack_8->SetBinError(4,4.156585);
   VbbHcc_duong_H_dR_stack_8->SetBinError(5,4.345863);
   VbbHcc_duong_H_dR_stack_8->SetBinError(6,4.606634);
   VbbHcc_duong_H_dR_stack_8->SetBinError(7,4.719506);
   VbbHcc_duong_H_dR_stack_8->SetBinError(8,4.851312);
   VbbHcc_duong_H_dR_stack_8->SetBinError(9,4.896696);
   VbbHcc_duong_H_dR_stack_8->SetBinError(10,5.021096);
   VbbHcc_duong_H_dR_stack_8->SetBinError(11,5.313531);
   VbbHcc_duong_H_dR_stack_8->SetBinError(12,5.157778);
   VbbHcc_duong_H_dR_stack_8->SetBinError(13,5.657022);
   VbbHcc_duong_H_dR_stack_8->SetBinError(14,5.848133);
   VbbHcc_duong_H_dR_stack_8->SetBinError(15,6.01277);
   VbbHcc_duong_H_dR_stack_8->SetBinError(16,5.898501);
   VbbHcc_duong_H_dR_stack_8->SetBinError(17,4.250137);
   VbbHcc_duong_H_dR_stack_8->SetBinError(18,3.075277);
   VbbHcc_duong_H_dR_stack_8->SetBinError(19,2.773408);
   VbbHcc_duong_H_dR_stack_8->SetBinError(20,2.35059);
   VbbHcc_duong_H_dR_stack_8->SetBinError(21,1.785627);
   VbbHcc_duong_H_dR_stack_8->SetBinError(22,1.610691);
   VbbHcc_duong_H_dR_stack_8->SetBinError(23,1.365356);
   VbbHcc_duong_H_dR_stack_8->SetBinError(24,0.9917046);
   VbbHcc_duong_H_dR_stack_8->SetBinError(25,0.6681684);
   VbbHcc_duong_H_dR_stack_8->SetBinError(26,0.2811805);
   VbbHcc_duong_H_dR_stack_8->SetBinError(27,0.200508);
   VbbHcc_duong_H_dR_stack_8->SetBinError(28,0.3312822);
   VbbHcc_duong_H_dR_stack_8->SetEntries(8846);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_duong_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_8,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_9 = new TH1D("VbbHcc_duong_H_dR_stack_9","",50,0,10);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(2,0.01202185);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(3,23.264);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(4,35.34898);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(5,37.98322);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(6,41.1786);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(7,41.88872);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(8,40.35219);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(9,40.06879);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(10,39.28342);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(11,39.99921);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(12,41.52512);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(13,44.50813);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(14,47.6887);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(15,51.93167);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(16,50.3334);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(17,24.7782);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(18,14.3381);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(19,9.545852);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(20,6.814499);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(21,4.745553);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(22,3.388899);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(23,2.115937);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(24,1.439568);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(25,0.7692944);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(26,0.3675811);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(27,0.1445809);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(28,0.03575148);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(29,0.001381472);
   VbbHcc_duong_H_dR_stack_9->SetBinError(2,0.004563996);
   VbbHcc_duong_H_dR_stack_9->SetBinError(3,0.2126435);
   VbbHcc_duong_H_dR_stack_9->SetBinError(4,0.262596);
   VbbHcc_duong_H_dR_stack_9->SetBinError(5,0.2716531);
   VbbHcc_duong_H_dR_stack_9->SetBinError(6,0.2828576);
   VbbHcc_duong_H_dR_stack_9->SetBinError(7,0.2853139);
   VbbHcc_duong_H_dR_stack_9->SetBinError(8,0.2797485);
   VbbHcc_duong_H_dR_stack_9->SetBinError(9,0.2787998);
   VbbHcc_duong_H_dR_stack_9->SetBinError(10,0.2751886);
   VbbHcc_duong_H_dR_stack_9->SetBinError(11,0.2776611);
   VbbHcc_duong_H_dR_stack_9->SetBinError(12,0.2823214);
   VbbHcc_duong_H_dR_stack_9->SetBinError(13,0.2922715);
   VbbHcc_duong_H_dR_stack_9->SetBinError(14,0.3022529);
   VbbHcc_duong_H_dR_stack_9->SetBinError(15,0.3155831);
   VbbHcc_duong_H_dR_stack_9->SetBinError(16,0.3114638);
   VbbHcc_duong_H_dR_stack_9->SetBinError(17,0.2177137);
   VbbHcc_duong_H_dR_stack_9->SetBinError(18,0.1648391);
   VbbHcc_duong_H_dR_stack_9->SetBinError(19,0.133908);
   VbbHcc_duong_H_dR_stack_9->SetBinError(20,0.113251);
   VbbHcc_duong_H_dR_stack_9->SetBinError(21,0.09398096);
   VbbHcc_duong_H_dR_stack_9->SetBinError(22,0.07959389);
   VbbHcc_duong_H_dR_stack_9->SetBinError(23,0.06263888);
   VbbHcc_duong_H_dR_stack_9->SetBinError(24,0.05155146);
   VbbHcc_duong_H_dR_stack_9->SetBinError(25,0.03774533);
   VbbHcc_duong_H_dR_stack_9->SetBinError(26,0.02582337);
   VbbHcc_duong_H_dR_stack_9->SetBinError(27,0.01639654);
   VbbHcc_duong_H_dR_stack_9->SetBinError(28,0.007740976);
   VbbHcc_duong_H_dR_stack_9->SetBinError(29,0.001381472);
   VbbHcc_duong_H_dR_stack_9->SetEntries(365953);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_duong_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_9,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_10 = new TH1D("VbbHcc_duong_H_dR_stack_10","",50,0,10);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(2,0.003912501);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(3,6.657616);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(4,10.79505);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(5,12.33607);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(6,13.27413);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(7,11.81235);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(8,9.854641);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(9,8.8037);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(10,8.587746);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(11,9.01014);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(12,10.07415);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(13,11.04397);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(14,12.41759);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(15,13.68558);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(16,13.58646);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(17,7.748923);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(18,5.100069);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(19,3.530641);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(20,2.581533);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(21,1.820248);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(22,1.241184);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(23,0.8767827);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(24,0.5664342);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(25,0.3188752);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(26,0.1698788);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(27,0.07829388);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(28,0.02508044);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(29,0.001835008);
   VbbHcc_duong_H_dR_stack_10->SetBinError(2,0.001314242);
   VbbHcc_duong_H_dR_stack_10->SetBinError(3,0.05431983);
   VbbHcc_duong_H_dR_stack_10->SetBinError(4,0.06922917);
   VbbHcc_duong_H_dR_stack_10->SetBinError(5,0.07408051);
   VbbHcc_duong_H_dR_stack_10->SetBinError(6,0.07691596);
   VbbHcc_duong_H_dR_stack_10->SetBinError(7,0.07251141);
   VbbHcc_duong_H_dR_stack_10->SetBinError(8,0.06618982);
   VbbHcc_duong_H_dR_stack_10->SetBinError(9,0.06250678);
   VbbHcc_duong_H_dR_stack_10->SetBinError(10,0.06173313);
   VbbHcc_duong_H_dR_stack_10->SetBinError(11,0.06321844);
   VbbHcc_duong_H_dR_stack_10->SetBinError(12,0.06682976);
   VbbHcc_duong_H_dR_stack_10->SetBinError(13,0.06996494);
   VbbHcc_duong_H_dR_stack_10->SetBinError(14,0.07419296);
   VbbHcc_duong_H_dR_stack_10->SetBinError(15,0.07785647);
   VbbHcc_duong_H_dR_stack_10->SetBinError(16,0.07758936);
   VbbHcc_duong_H_dR_stack_10->SetBinError(17,0.05853457);
   VbbHcc_duong_H_dR_stack_10->SetBinError(18,0.04741838);
   VbbHcc_duong_H_dR_stack_10->SetBinError(19,0.03939275);
   VbbHcc_duong_H_dR_stack_10->SetBinError(20,0.03362962);
   VbbHcc_duong_H_dR_stack_10->SetBinError(21,0.02815653);
   VbbHcc_duong_H_dR_stack_10->SetBinError(22,0.02321498);
   VbbHcc_duong_H_dR_stack_10->SetBinError(23,0.01949427);
   VbbHcc_duong_H_dR_stack_10->SetBinError(24,0.01562067);
   VbbHcc_duong_H_dR_stack_10->SetBinError(25,0.01163721);
   VbbHcc_duong_H_dR_stack_10->SetBinError(26,0.00845052);
   VbbHcc_duong_H_dR_stack_10->SetBinError(27,0.00570097);
   VbbHcc_duong_H_dR_stack_10->SetBinError(28,0.003213089);
   VbbHcc_duong_H_dR_stack_10->SetBinError(29,0.0008538423);
   VbbHcc_duong_H_dR_stack_10->SetEntries(404395);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_duong_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_10,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_11 = new TH1D("VbbHcc_duong_H_dR_stack_11","",50,0,10);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(3,0.2131123);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(4,0.3923249);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(5,0.4704766);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(6,0.6048703);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(7,0.7140663);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(8,0.7540365);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(9,0.8199938);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(10,0.8272269);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(11,0.7986724);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(12,0.7569673);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(13,0.8533957);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(14,0.8860231);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(15,0.9836379);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(16,0.9622445);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(17,0.3383281);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(18,0.2021159);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(19,0.1052044);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(20,0.06925554);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(21,0.04687272);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(22,0.04002217);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(23,0.0179245);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(24,0.01144826);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(25,0.003138135);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(26,0.002923655);
   VbbHcc_duong_H_dR_stack_11->SetBinError(3,0.0197865);
   VbbHcc_duong_H_dR_stack_11->SetBinError(4,0.02696023);
   VbbHcc_duong_H_dR_stack_11->SetBinError(5,0.02897893);
   VbbHcc_duong_H_dR_stack_11->SetBinError(6,0.0333931);
   VbbHcc_duong_H_dR_stack_11->SetBinError(7,0.03589023);
   VbbHcc_duong_H_dR_stack_11->SetBinError(8,0.03719159);
   VbbHcc_duong_H_dR_stack_11->SetBinError(9,0.03887352);
   VbbHcc_duong_H_dR_stack_11->SetBinError(10,0.0386449);
   VbbHcc_duong_H_dR_stack_11->SetBinError(11,0.03828158);
   VbbHcc_duong_H_dR_stack_11->SetBinError(12,0.03752287);
   VbbHcc_duong_H_dR_stack_11->SetBinError(13,0.03952862);
   VbbHcc_duong_H_dR_stack_11->SetBinError(14,0.03966661);
   VbbHcc_duong_H_dR_stack_11->SetBinError(15,0.04250987);
   VbbHcc_duong_H_dR_stack_11->SetBinError(16,0.04215266);
   VbbHcc_duong_H_dR_stack_11->SetBinError(17,0.0249941);
   VbbHcc_duong_H_dR_stack_11->SetBinError(18,0.01884777);
   VbbHcc_duong_H_dR_stack_11->SetBinError(19,0.01366026);
   VbbHcc_duong_H_dR_stack_11->SetBinError(20,0.01068823);
   VbbHcc_duong_H_dR_stack_11->SetBinError(21,0.009005354);
   VbbHcc_duong_H_dR_stack_11->SetBinError(22,0.008364133);
   VbbHcc_duong_H_dR_stack_11->SetBinError(23,0.005763208);
   VbbHcc_duong_H_dR_stack_11->SetBinError(24,0.00422777);
   VbbHcc_duong_H_dR_stack_11->SetBinError(25,0.002296413);
   VbbHcc_duong_H_dR_stack_11->SetBinError(26,0.001905132);
   VbbHcc_duong_H_dR_stack_11->SetEntries(7275);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_duong_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_11,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_12 = new TH1D("VbbHcc_duong_H_dR_stack_12","",50,0,10);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(3,1299.17);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(4,2475.669);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(5,3532.122);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(6,5192.999);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(7,5744.181);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(8,5539.693);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(9,5606.847);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(10,4442.438);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(11,4222.186);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(12,4006.098);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(13,3940.436);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(14,4551.983);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(15,4691.533);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(16,4566.23);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(17,2459.213);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(18,1341.858);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(19,856.5357);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(20,506.6587);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(21,378.0615);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(22,280.2576);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(23,120.4555);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(24,85.25521);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(25,69.9881);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(26,14.1771);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(27,7.521021);
   VbbHcc_duong_H_dR_stack_12->SetBinError(3,81.63257);
   VbbHcc_duong_H_dR_stack_12->SetBinError(4,112.7443);
   VbbHcc_duong_H_dR_stack_12->SetBinError(5,136.4468);
   VbbHcc_duong_H_dR_stack_12->SetBinError(6,164.5978);
   VbbHcc_duong_H_dR_stack_12->SetBinError(7,173.422);
   VbbHcc_duong_H_dR_stack_12->SetBinError(8,170.1535);
   VbbHcc_duong_H_dR_stack_12->SetBinError(9,172.1425);
   VbbHcc_duong_H_dR_stack_12->SetBinError(10,152.1765);
   VbbHcc_duong_H_dR_stack_12->SetBinError(11,149.1881);
   VbbHcc_duong_H_dR_stack_12->SetBinError(12,144.3714);
   VbbHcc_duong_H_dR_stack_12->SetBinError(13,142.0704);
   VbbHcc_duong_H_dR_stack_12->SetBinError(14,153.8554);
   VbbHcc_duong_H_dR_stack_12->SetBinError(15,155.5893);
   VbbHcc_duong_H_dR_stack_12->SetBinError(16,154.2964);
   VbbHcc_duong_H_dR_stack_12->SetBinError(17,112.3802);
   VbbHcc_duong_H_dR_stack_12->SetBinError(18,83.24567);
   VbbHcc_duong_H_dR_stack_12->SetBinError(19,66.70307);
   VbbHcc_duong_H_dR_stack_12->SetBinError(20,51.05704);
   VbbHcc_duong_H_dR_stack_12->SetBinError(21,44.36172);
   VbbHcc_duong_H_dR_stack_12->SetBinError(22,37.22267);
   VbbHcc_duong_H_dR_stack_12->SetBinError(23,24.11857);
   VbbHcc_duong_H_dR_stack_12->SetBinError(24,20.5124);
   VbbHcc_duong_H_dR_stack_12->SetBinError(25,18.9778);
   VbbHcc_duong_H_dR_stack_12->SetBinError(26,8.2814);
   VbbHcc_duong_H_dR_stack_12->SetBinError(27,5.508883);
   VbbHcc_duong_H_dR_stack_12->SetEntries(14601);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_duong_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_duong_H_dR__43 = new TH1D("VbbHcc_duong_H_dR__43","",50,0,10);
   VbbHcc_duong_H_dR__43->SetBinContent(2,141);
   VbbHcc_duong_H_dR__43->SetBinContent(3,169501);
   VbbHcc_duong_H_dR__43->SetBinContent(4,199945);
   VbbHcc_duong_H_dR__43->SetBinContent(5,162146);
   VbbHcc_duong_H_dR__43->SetBinContent(6,162725);
   VbbHcc_duong_H_dR__43->SetBinContent(7,166415);
   VbbHcc_duong_H_dR__43->SetBinContent(8,172532);
   VbbHcc_duong_H_dR__43->SetBinContent(9,182820);
   VbbHcc_duong_H_dR__43->SetBinContent(10,197223);
   VbbHcc_duong_H_dR__43->SetBinContent(11,213323);
   VbbHcc_duong_H_dR__43->SetBinContent(12,236138);
   VbbHcc_duong_H_dR__43->SetBinContent(13,262160);
   VbbHcc_duong_H_dR__43->SetBinContent(14,292394);
   VbbHcc_duong_H_dR__43->SetBinContent(15,328942);
   VbbHcc_duong_H_dR__43->SetBinContent(16,344007);
   VbbHcc_duong_H_dR__43->SetBinContent(17,227667);
   VbbHcc_duong_H_dR__43->SetBinContent(18,165624);
   VbbHcc_duong_H_dR__43->SetBinContent(19,124811);
   VbbHcc_duong_H_dR__43->SetBinContent(20,94296);
   VbbHcc_duong_H_dR__43->SetBinContent(21,70097);
   VbbHcc_duong_H_dR__43->SetBinContent(22,50815);
   VbbHcc_duong_H_dR__43->SetBinContent(23,35426);
   VbbHcc_duong_H_dR__43->SetBinContent(24,22939);
   VbbHcc_duong_H_dR__43->SetBinContent(25,13502);
   VbbHcc_duong_H_dR__43->SetBinContent(26,6981);
   VbbHcc_duong_H_dR__43->SetBinContent(27,2971);
   VbbHcc_duong_H_dR__43->SetBinContent(28,831);
   VbbHcc_duong_H_dR__43->SetBinContent(29,61);
   VbbHcc_duong_H_dR__43->SetEntries(3906433);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR__43->SetLineColor(ci);
   VbbHcc_duong_H_dR__43->SetLineWidth(2);
   VbbHcc_duong_H_dR__43->SetMarkerStyle(20);
   VbbHcc_duong_H_dR__43->SetMarkerSize(1.2);
   VbbHcc_duong_H_dR__43->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR__43->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR__43->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR__43->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR__43->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR__43->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR__43->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR__43->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR__43->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR__43->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR__43->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR__43->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR__43->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR__43->GetZaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR__43->Draw("same E");
   
   Double_t Graph_from_VbbHcc_duong_H_dR_fx1043[50] = {
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
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_VbbHcc_duong_H_dR_fy1043[50] = {
   0,
   54.85765,
   836231.4,
   1222102,
   1052779,
   1065048,
   1100832,
   1042938,
   1222214,
   1323122,
   1400774,
   1579309,
   1612866,
   1929993,
   2245979,
   2224556,
   1539650,
   1066781,
   838007,
   670406.6,
   511474.2,
   399902.8,
   256088.8,
   187619.9,
   103908,
   55915.01,
   27377.82,
   10379.04,
   2363.818,
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
   Double_t Graph_from_VbbHcc_duong_H_dR_fex1043[50] = {
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
   Double_t Graph_from_VbbHcc_duong_H_dR_fey1043[50] = {
   0,
   2.27202,
   31591.16,
   37936.4,
   34108.17,
   33782.86,
   34049.66,
   32554.27,
   36129.03,
   37978.31,
   39053.96,
   41614.58,
   41721.1,
   46003.5,
   50193.46,
   50138.84,
   42346.86,
   35137.36,
   31418.48,
   28436.7,
   24840.2,
   22290.86,
   17708.26,
   15056.37,
   11312.54,
   8405.915,
   5720.009,
   3300.631,
   1781.286,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_duong_H_dR_fx1043,Graph_from_VbbHcc_duong_H_dR_fy1043,Graph_from_VbbHcc_duong_H_dR_fex1043,Graph_from_VbbHcc_duong_H_dR_fey1043);
   gre->SetName("Graph_from_VbbHcc_duong_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_duong_H_dR1043 = new TH1F("Graph_Graph_from_VbbHcc_duong_H_dR1043","",100,0,11);
   Graph_Graph_from_VbbHcc_duong_H_dR1043->SetMinimum(0);
   Graph_Graph_from_VbbHcc_duong_H_dR1043->SetMaximum(2525790);
   Graph_Graph_from_VbbHcc_duong_H_dR1043->SetDirectory(0);
   Graph_Graph_from_VbbHcc_duong_H_dR1043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_duong_H_dR1043->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_duong_H_dR1043->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_dR1043->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR1043->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR1043->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_H_dR1043->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_dR1043->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR1043->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR1043->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_duong_H_dR1043->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_H_dR1043->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_dR1043->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR1043->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_duong_H_dR1043);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_duong_H_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_duong_H_dR","MC unc. (stat.)","fl");

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
   H_dR_VbbHcc_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-1.532254,-0.2774193,10.52419,1.658065);
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
   
   TH1D *data_mc_ratio__44 = new TH1D("data_mc_ratio__44","",50,0,10);
   data_mc_ratio__44->SetBinContent(2,2.570289);
   data_mc_ratio__44->SetBinContent(3,0.2026963);
   data_mc_ratio__44->SetBinContent(4,0.1636074);
   data_mc_ratio__44->SetBinContent(5,0.1540172);
   data_mc_ratio__44->SetBinContent(6,0.1527865);
   data_mc_ratio__44->SetBinContent(7,0.151172);
   data_mc_ratio__44->SetBinContent(8,0.1654288);
   data_mc_ratio__44->SetBinContent(9,0.149581);
   data_mc_ratio__44->SetBinContent(10,0.1490588);
   data_mc_ratio__44->SetBinContent(11,0.1522894);
   data_mc_ratio__44->SetBinContent(12,0.1495198);
   data_mc_ratio__44->SetBinContent(13,0.1625429);
   data_mc_ratio__44->SetBinContent(14,0.1515);
   data_mc_ratio__44->SetBinContent(15,0.1464582);
   data_mc_ratio__44->SetBinContent(16,0.1546407);
   data_mc_ratio__44->SetBinContent(17,0.1478693);
   data_mc_ratio__44->SetBinContent(18,0.1552559);
   data_mc_ratio__44->SetBinContent(19,0.1489379);
   data_mc_ratio__44->SetBinContent(20,0.140655);
   data_mc_ratio__44->SetBinContent(21,0.1370489);
   data_mc_ratio__44->SetBinContent(22,0.1270684);
   data_mc_ratio__44->SetBinContent(23,0.1383348);
   data_mc_ratio__44->SetBinContent(24,0.1222631);
   data_mc_ratio__44->SetBinContent(25,0.1299419);
   data_mc_ratio__44->SetBinContent(26,0.1248502);
   data_mc_ratio__44->SetBinContent(27,0.1085185);
   data_mc_ratio__44->SetBinContent(28,0.08006524);
   data_mc_ratio__44->SetBinContent(29,0.02580571);
   data_mc_ratio__44->SetBinError(2,0.2164574);
   data_mc_ratio__44->SetBinError(3,0.0004923338);
   data_mc_ratio__44->SetBinError(4,0.0003658876);
   data_mc_ratio__44->SetBinError(5,0.0003824865);
   data_mc_ratio__44->SetBinError(6,0.0003787546);
   data_mc_ratio__44->SetBinError(7,0.0003705742);
   data_mc_ratio__44->SetBinError(8,0.0003982688);
   data_mc_ratio__44->SetBinError(9,0.000349836);
   data_mc_ratio__44->SetBinError(10,0.000335644);
   data_mc_ratio__44->SetBinError(11,0.0003297242);
   data_mc_ratio__44->SetBinError(12,0.0003076917);
   data_mc_ratio__44->SetBinError(13,0.000317457);
   data_mc_ratio__44->SetBinError(14,0.0002801744);
   data_mc_ratio__44->SetBinError(15,0.0002553606);
   data_mc_ratio__44->SetBinError(16,0.0002636576);
   data_mc_ratio__44->SetBinError(17,0.0003099046);
   data_mc_ratio__44->SetBinError(18,0.0003814928);
   data_mc_ratio__44->SetBinError(19,0.0004215788);
   data_mc_ratio__44->SetBinError(20,0.0004580453);
   data_mc_ratio__44->SetBinError(21,0.0005176378);
   data_mc_ratio__44->SetBinError(22,0.0005636915);
   data_mc_ratio__44->SetBinError(23,0.0007349715);
   data_mc_ratio__44->SetBinError(24,0.0008072504);
   data_mc_ratio__44->SetBinError(25,0.001118279);
   data_mc_ratio__44->SetBinError(26,0.001494275);
   data_mc_ratio__44->SetBinError(27,0.001990914);
   data_mc_ratio__44->SetBinError(28,0.002777432);
   data_mc_ratio__44->SetBinError(29,0.003304082);
   data_mc_ratio__44->SetMinimum(0.4);
   data_mc_ratio__44->SetMaximum(1.6);
   data_mc_ratio__44->SetEntries(663.4901);
   data_mc_ratio__44->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__44->SetLineColor(ci);
   data_mc_ratio__44->SetLineWidth(2);
   data_mc_ratio__44->SetMarkerStyle(20);
   data_mc_ratio__44->SetMarkerSize(1.2);
   data_mc_ratio__44->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__44->GetXaxis()->SetRange(1,50);
   data_mc_ratio__44->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__44->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__44->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__44->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__44->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__44->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__44->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__44->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__44->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__44->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__44->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__44->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__44->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__44->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__44->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__44->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__44->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1044[50] = {
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
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_mc_statistical_error_fy1044[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1044[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1044[50] = {
   0,
   0.04141666,
   0.037778,
   0.03104191,
   0.03239824,
   0.03171956,
   0.03093084,
   0.031214,
   0.0295603,
   0.02870355,
   0.02788028,
   0.02634986,
   0.02586768,
   0.0238361,
   0.02234814,
   0.02253881,
   0.02750421,
   0.03293775,
   0.03749191,
   0.0424171,
   0.04856589,
   0.0557407,
   0.06914891,
   0.08024932,
   0.1088708,
   0.1503338,
   0.2089285,
   0.3180094,
   0.7535629,
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
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1044,Graph_from_mc_statistical_error_fy1044,Graph_from_mc_statistical_error_fex1044,Graph_from_mc_statistical_error_fey1044);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1044 = new TH1F("Graph_Graph_from_mc_statistical_error1044","",100,0,11);
   Graph_Graph_from_mc_statistical_error1044->SetMinimum(0.09572456);
   Graph_Graph_from_mc_statistical_error1044->SetMaximum(1.904275);
   Graph_Graph_from_mc_statistical_error1044->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1044->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1044->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1044);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_VbbHcc_17->cd();
   H_dR_VbbHcc_17->Modified();
   H_dR_VbbHcc_17->cd();
   H_dR_VbbHcc_17->SetSelected(H_dR_VbbHcc_17);
}
