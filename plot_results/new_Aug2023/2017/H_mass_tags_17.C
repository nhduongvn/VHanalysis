void H_mass_tags_17()
{
//=========Macro generated from canvas: H_mass_tags_17/H_mass_tags_17
//=========  (Tue Aug 22 09:20:04 2023) by ROOT version 6.14/09
   TCanvas *H_mass_tags_17 = new TCanvas("H_mass_tags_17", "H_mass_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_17->SetHighLightColor(2);
   H_mass_tags_17->Range(0,0,1,1);
   H_mass_tags_17->SetFillColor(0);
   H_mass_tags_17->SetFillStyle(4000);
   H_mass_tags_17->SetBorderMode(0);
   H_mass_tags_17->SetBorderSize(2);
   H_mass_tags_17->SetFrameFillStyle(1000);
   H_mass_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-61.25417,315.7258,61202.92);
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
   st->SetMaximum(52453.81);
   
   TH1F *st_stack_6 = new TH1F("st_stack_6","",40,0,400);
   st_stack_6->SetMinimum(0.01);
   st_stack_6->SetMaximum(55076.5);
   st_stack_6->SetDirectory(0);
   st_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_6->SetLineColor(ci);
   st_stack_6->GetXaxis()->SetRange(1,30);
   st_stack_6->GetXaxis()->SetLabelFont(42);
   st_stack_6->GetXaxis()->SetLabelSize(0.035);
   st_stack_6->GetXaxis()->SetTitleSize(0.035);
   st_stack_6->GetXaxis()->SetTitleFont(42);
   st_stack_6->GetYaxis()->SetTitle("Events/10.0");
   st_stack_6->GetYaxis()->SetLabelFont(42);
   st_stack_6->GetYaxis()->SetLabelSize(0.05);
   st_stack_6->GetYaxis()->SetTitleSize(0.057);
   st_stack_6->GetYaxis()->SetTitleOffset(1.2);
   st_stack_6->GetYaxis()->SetTitleFont(42);
   st_stack_6->GetZaxis()->SetLabelFont(42);
   st_stack_6->GetZaxis()->SetLabelSize(0.035);
   st_stack_6->GetZaxis()->SetTitleSize(0.035);
   st_stack_6->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_6);
   
   
   TH1D *VbbHcc_tags_H_mass_stack_1 = new TH1D("VbbHcc_tags_H_mass_stack_1","",40,0,400);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(3,163.1171);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(4,439.5742);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(5,3288.293);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(6,5091.73);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(7,4838.544);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(8,5229.473);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(9,3760.216);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(10,2867.367);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(11,3752.043);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(12,3876.216);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(13,3546.789);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(14,3004.797);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(15,3173.219);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(16,3350.707);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(17,3460);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(18,2530.354);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(19,3723.01);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(20,2298.706);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(21,2608.903);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(22,2552.808);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(23,2492.639);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(24,2380.452);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(25,23299.53);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(26,1293.881);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(27,2107.049);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(28,2837.601);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(29,1725.752);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(30,2010.946);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(31,2430.364);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(32,1762.334);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(33,1663.288);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(34,1881.735);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(35,1585.174);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(36,2089.296);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(37,2172.351);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(38,2022.911);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(39,1371.59);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(40,1237.262);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(41,75100.12);
   VbbHcc_tags_H_mass_stack_1->SetBinError(3,152.1865);
   VbbHcc_tags_H_mass_stack_1->SetBinError(4,194.8887);
   VbbHcc_tags_H_mass_stack_1->SetBinError(5,761.3849);
   VbbHcc_tags_H_mass_stack_1->SetBinError(6,955.446);
   VbbHcc_tags_H_mass_stack_1->SetBinError(7,880.8193);
   VbbHcc_tags_H_mass_stack_1->SetBinError(8,991.5844);
   VbbHcc_tags_H_mass_stack_1->SetBinError(9,723.1857);
   VbbHcc_tags_H_mass_stack_1->SetBinError(10,659.8418);
   VbbHcc_tags_H_mass_stack_1->SetBinError(11,805.0722);
   VbbHcc_tags_H_mass_stack_1->SetBinError(12,725.5012);
   VbbHcc_tags_H_mass_stack_1->SetBinError(13,709.5084);
   VbbHcc_tags_H_mass_stack_1->SetBinError(14,694.9263);
   VbbHcc_tags_H_mass_stack_1->SetBinError(15,703.8489);
   VbbHcc_tags_H_mass_stack_1->SetBinError(16,767.823);
   VbbHcc_tags_H_mass_stack_1->SetBinError(17,725.9968);
   VbbHcc_tags_H_mass_stack_1->SetBinError(18,565.4803);
   VbbHcc_tags_H_mass_stack_1->SetBinError(19,1065.048);
   VbbHcc_tags_H_mass_stack_1->SetBinError(20,557.0647);
   VbbHcc_tags_H_mass_stack_1->SetBinError(21,673.6672);
   VbbHcc_tags_H_mass_stack_1->SetBinError(22,591.9642);
   VbbHcc_tags_H_mass_stack_1->SetBinError(23,558.9666);
   VbbHcc_tags_H_mass_stack_1->SetBinError(24,618.424);
   VbbHcc_tags_H_mass_stack_1->SetBinError(25,20600.83);
   VbbHcc_tags_H_mass_stack_1->SetBinError(26,346.9212);
   VbbHcc_tags_H_mass_stack_1->SetBinError(27,562.8269);
   VbbHcc_tags_H_mass_stack_1->SetBinError(28,763.6861);
   VbbHcc_tags_H_mass_stack_1->SetBinError(29,519.6754);
   VbbHcc_tags_H_mass_stack_1->SetBinError(30,589.6898);
   VbbHcc_tags_H_mass_stack_1->SetBinError(31,616.2577);
   VbbHcc_tags_H_mass_stack_1->SetBinError(32,479.1484);
   VbbHcc_tags_H_mass_stack_1->SetBinError(33,542.5986);
   VbbHcc_tags_H_mass_stack_1->SetBinError(34,538.7483);
   VbbHcc_tags_H_mass_stack_1->SetBinError(35,417.3138);
   VbbHcc_tags_H_mass_stack_1->SetBinError(36,534.864);
   VbbHcc_tags_H_mass_stack_1->SetBinError(37,599.2805);
   VbbHcc_tags_H_mass_stack_1->SetBinError(38,598.6459);
   VbbHcc_tags_H_mass_stack_1->SetBinError(39,421.7821);
   VbbHcc_tags_H_mass_stack_1->SetBinError(40,384.5004);
   VbbHcc_tags_H_mass_stack_1->SetBinError(41,16768.48);
   VbbHcc_tags_H_mass_stack_1->SetEntries(9351);

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
   VbbHcc_tags_H_mass_stack_2->SetBinContent(3,0.08568384);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(4,3.352979);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(5,9.616759);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(6,12.06749);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(7,17.36987);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(8,22.99866);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(9,25.64246);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(10,23.83552);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(11,21.91723);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(12,19.78499);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(13,18.69762);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(14,17.93847);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(15,17.38857);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(16,17.01312);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(17,18.33035);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(18,14.34793);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(19,16.60941);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(20,15.98986);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(21,15.205);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(22,11.50399);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(23,12.6798);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(24,14.11168);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(25,13.05006);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(26,12.38124);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(27,10.0953);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(28,11.96602);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(29,11.36278);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(30,10.81407);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(31,8.618018);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(32,11.4645);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(33,6.140633);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(34,10.31068);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(35,5.977525);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(36,8.842442);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(37,8.411699);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(38,6.959993);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(39,9.20779);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(40,7.025301);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(41,346.6597);
   VbbHcc_tags_H_mass_stack_2->SetBinError(3,0.06177799);
   VbbHcc_tags_H_mass_stack_2->SetBinError(4,0.7848283);
   VbbHcc_tags_H_mass_stack_2->SetBinError(5,1.253859);
   VbbHcc_tags_H_mass_stack_2->SetBinError(6,1.446402);
   VbbHcc_tags_H_mass_stack_2->SetBinError(7,1.697897);
   VbbHcc_tags_H_mass_stack_2->SetBinError(8,2.05356);
   VbbHcc_tags_H_mass_stack_2->SetBinError(9,2.205813);
   VbbHcc_tags_H_mass_stack_2->SetBinError(10,2.064917);
   VbbHcc_tags_H_mass_stack_2->SetBinError(11,1.908753);
   VbbHcc_tags_H_mass_stack_2->SetBinError(12,1.728119);
   VbbHcc_tags_H_mass_stack_2->SetBinError(13,1.746434);
   VbbHcc_tags_H_mass_stack_2->SetBinError(14,1.628904);
   VbbHcc_tags_H_mass_stack_2->SetBinError(15,1.700231);
   VbbHcc_tags_H_mass_stack_2->SetBinError(16,1.76689);
   VbbHcc_tags_H_mass_stack_2->SetBinError(17,1.805825);
   VbbHcc_tags_H_mass_stack_2->SetBinError(18,1.489209);
   VbbHcc_tags_H_mass_stack_2->SetBinError(19,1.748546);
   VbbHcc_tags_H_mass_stack_2->SetBinError(20,1.681128);
   VbbHcc_tags_H_mass_stack_2->SetBinError(21,1.596661);
   VbbHcc_tags_H_mass_stack_2->SetBinError(22,1.297834);
   VbbHcc_tags_H_mass_stack_2->SetBinError(23,1.516457);
   VbbHcc_tags_H_mass_stack_2->SetBinError(24,1.596959);
   VbbHcc_tags_H_mass_stack_2->SetBinError(25,1.537962);
   VbbHcc_tags_H_mass_stack_2->SetBinError(26,1.444111);
   VbbHcc_tags_H_mass_stack_2->SetBinError(27,1.171953);
   VbbHcc_tags_H_mass_stack_2->SetBinError(28,1.477798);
   VbbHcc_tags_H_mass_stack_2->SetBinError(29,1.333977);
   VbbHcc_tags_H_mass_stack_2->SetBinError(30,1.33457);
   VbbHcc_tags_H_mass_stack_2->SetBinError(31,1.1502);
   VbbHcc_tags_H_mass_stack_2->SetBinError(32,1.442209);
   VbbHcc_tags_H_mass_stack_2->SetBinError(33,0.9226552);
   VbbHcc_tags_H_mass_stack_2->SetBinError(34,1.426601);
   VbbHcc_tags_H_mass_stack_2->SetBinError(35,0.949739);
   VbbHcc_tags_H_mass_stack_2->SetBinError(36,1.210822);
   VbbHcc_tags_H_mass_stack_2->SetBinError(37,1.214644);
   VbbHcc_tags_H_mass_stack_2->SetBinError(38,1.017446);
   VbbHcc_tags_H_mass_stack_2->SetBinError(39,1.294815);
   VbbHcc_tags_H_mass_stack_2->SetBinError(40,1.023826);
   VbbHcc_tags_H_mass_stack_2->SetBinError(41,7.816745);
   VbbHcc_tags_H_mass_stack_2->SetEntries(11598);

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
   VbbHcc_tags_H_mass_stack_3->SetBinContent(3,7.009186);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(4,70.9249);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(5,174.0857);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(6,260.8227);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(7,336.1342);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(8,443.3891);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(9,537.2555);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(10,528.1807);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(11,505.7099);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(12,487.873);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(13,492.7781);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(14,460.6197);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(15,448.8261);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(16,408.3825);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(17,384.8174);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(18,368.2666);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(19,343.0088);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(20,324.5425);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(21,297.6016);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(22,290.4463);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(23,277.2214);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(24,268.7565);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(25,262.3929);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(26,262.5985);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(27,244.5777);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(28,233.388);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(29,234.1119);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(30,224.9334);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(31,219.6033);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(32,213.8611);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(33,204.6697);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(34,204.6816);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(35,199.9075);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(36,191.6999);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(37,194.9706);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(38,179.2893);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(39,177.1921);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(40,176.7141);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(41,6870.979);
   VbbHcc_tags_H_mass_stack_3->SetBinError(3,0.6665443);
   VbbHcc_tags_H_mass_stack_3->SetBinError(4,2.092754);
   VbbHcc_tags_H_mass_stack_3->SetBinError(5,3.320107);
   VbbHcc_tags_H_mass_stack_3->SetBinError(6,4.097679);
   VbbHcc_tags_H_mass_stack_3->SetBinError(7,4.653579);
   VbbHcc_tags_H_mass_stack_3->SetBinError(8,5.380291);
   VbbHcc_tags_H_mass_stack_3->SetBinError(9,5.938992);
   VbbHcc_tags_H_mass_stack_3->SetBinError(10,5.913531);
   VbbHcc_tags_H_mass_stack_3->SetBinError(11,5.772583);
   VbbHcc_tags_H_mass_stack_3->SetBinError(12,5.665055);
   VbbHcc_tags_H_mass_stack_3->SetBinError(13,5.691969);
   VbbHcc_tags_H_mass_stack_3->SetBinError(14,5.508371);
   VbbHcc_tags_H_mass_stack_3->SetBinError(15,5.433089);
   VbbHcc_tags_H_mass_stack_3->SetBinError(16,5.176902);
   VbbHcc_tags_H_mass_stack_3->SetBinError(17,5.002987);
   VbbHcc_tags_H_mass_stack_3->SetBinError(18,4.900229);
   VbbHcc_tags_H_mass_stack_3->SetBinError(19,4.75148);
   VbbHcc_tags_H_mass_stack_3->SetBinError(20,4.602994);
   VbbHcc_tags_H_mass_stack_3->SetBinError(21,4.407943);
   VbbHcc_tags_H_mass_stack_3->SetBinError(22,4.35239);
   VbbHcc_tags_H_mass_stack_3->SetBinError(23,4.245313);
   VbbHcc_tags_H_mass_stack_3->SetBinError(24,4.183862);
   VbbHcc_tags_H_mass_stack_3->SetBinError(25,4.134411);
   VbbHcc_tags_H_mass_stack_3->SetBinError(26,4.149881);
   VbbHcc_tags_H_mass_stack_3->SetBinError(27,3.977534);
   VbbHcc_tags_H_mass_stack_3->SetBinError(28,3.914713);
   VbbHcc_tags_H_mass_stack_3->SetBinError(29,3.914065);
   VbbHcc_tags_H_mass_stack_3->SetBinError(30,3.835061);
   VbbHcc_tags_H_mass_stack_3->SetBinError(31,3.797313);
   VbbHcc_tags_H_mass_stack_3->SetBinError(32,3.75359);
   VbbHcc_tags_H_mass_stack_3->SetBinError(33,3.661283);
   VbbHcc_tags_H_mass_stack_3->SetBinError(34,3.662051);
   VbbHcc_tags_H_mass_stack_3->SetBinError(35,3.644834);
   VbbHcc_tags_H_mass_stack_3->SetBinError(36,3.543769);
   VbbHcc_tags_H_mass_stack_3->SetBinError(37,3.599976);
   VbbHcc_tags_H_mass_stack_3->SetBinError(38,3.438131);
   VbbHcc_tags_H_mass_stack_3->SetBinError(39,3.404765);
   VbbHcc_tags_H_mass_stack_3->SetBinError(40,3.428592);
   VbbHcc_tags_H_mass_stack_3->SetBinError(41,21.48712);
   VbbHcc_tags_H_mass_stack_3->SetEntries(305979);

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
   VbbHcc_tags_H_mass_stack_4->SetBinContent(3,0.6375113);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(4,9.776816);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(5,15.12731);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(6,39.02145);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(7,51.65638);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(8,62.74351);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(9,88.07066);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(10,82.69177);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(11,71.56115);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(12,43.02389);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(13,48.61121);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(14,40.66826);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(15,40.40645);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(16,44.54916);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(17,37.96491);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(18,39.83032);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(19,40.83088);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(20,37.06594);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(21,36.67286);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(22,25.00807);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(23,27.83103);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(24,36.95709);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(25,26.04255);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(26,23.11112);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(27,22.95057);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(28,27.92482);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(29,26.14367);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(30,25.59974);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(31,22.99766);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(32,22.78869);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(33,23.08984);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(34,20.52131);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(35,28.35333);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(36,25.837);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(37,26.49353);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(38,25.27612);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(39,17.54465);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(40,22.38055);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(41,947.5425);
   VbbHcc_tags_H_mass_stack_4->SetBinError(3,0.4001895);
   VbbHcc_tags_H_mass_stack_4->SetBinError(4,3.862894);
   VbbHcc_tags_H_mass_stack_4->SetBinError(5,2.392425);
   VbbHcc_tags_H_mass_stack_4->SetBinError(6,4.622685);
   VbbHcc_tags_H_mass_stack_4->SetBinError(7,5.876653);
   VbbHcc_tags_H_mass_stack_4->SetBinError(8,3.528378);
   VbbHcc_tags_H_mass_stack_4->SetBinError(9,5.677482);
   VbbHcc_tags_H_mass_stack_4->SetBinError(10,4.714647);
   VbbHcc_tags_H_mass_stack_4->SetBinError(11,5.441873);
   VbbHcc_tags_H_mass_stack_4->SetBinError(12,3.925286);
   VbbHcc_tags_H_mass_stack_4->SetBinError(13,5.224468);
   VbbHcc_tags_H_mass_stack_4->SetBinError(14,4.642241);
   VbbHcc_tags_H_mass_stack_4->SetBinError(15,3.488017);
   VbbHcc_tags_H_mass_stack_4->SetBinError(16,5.472197);
   VbbHcc_tags_H_mass_stack_4->SetBinError(17,3.761151);
   VbbHcc_tags_H_mass_stack_4->SetBinError(18,4.351141);
   VbbHcc_tags_H_mass_stack_4->SetBinError(19,4.598334);
   VbbHcc_tags_H_mass_stack_4->SetBinError(20,4.295765);
   VbbHcc_tags_H_mass_stack_4->SetBinError(21,4.222449);
   VbbHcc_tags_H_mass_stack_4->SetBinError(22,2.21455);
   VbbHcc_tags_H_mass_stack_4->SetBinError(23,4.068824);
   VbbHcc_tags_H_mass_stack_4->SetBinError(24,3.868104);
   VbbHcc_tags_H_mass_stack_4->SetBinError(25,3.79594);
   VbbHcc_tags_H_mass_stack_4->SetBinError(26,2.058997);
   VbbHcc_tags_H_mass_stack_4->SetBinError(27,2.113193);
   VbbHcc_tags_H_mass_stack_4->SetBinError(28,2.933981);
   VbbHcc_tags_H_mass_stack_4->SetBinError(29,2.380948);
   VbbHcc_tags_H_mass_stack_4->SetBinError(30,2.248081);
   VbbHcc_tags_H_mass_stack_4->SetBinError(31,2.14954);
   VbbHcc_tags_H_mass_stack_4->SetBinError(32,3.153951);
   VbbHcc_tags_H_mass_stack_4->SetBinError(33,2.875039);
   VbbHcc_tags_H_mass_stack_4->SetBinError(34,2.798327);
   VbbHcc_tags_H_mass_stack_4->SetBinError(35,3.616439);
   VbbHcc_tags_H_mass_stack_4->SetBinError(36,3.928459);
   VbbHcc_tags_H_mass_stack_4->SetBinError(37,3.987233);
   VbbHcc_tags_H_mass_stack_4->SetBinError(38,3.332934);
   VbbHcc_tags_H_mass_stack_4->SetBinError(39,1.863769);
   VbbHcc_tags_H_mass_stack_4->SetBinError(40,3.734915);
   VbbHcc_tags_H_mass_stack_4->SetBinError(41,16.55011);
   VbbHcc_tags_H_mass_stack_4->SetEntries(17592);

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
   VbbHcc_tags_H_mass_stack_5->SetBinContent(4,0.346462);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(5,2.624856);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(6,3.489449);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(7,5.170059);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(8,3.013273);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(9,6.466231);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(10,13.89161);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(11,10.19779);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(12,5.156828);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(13,5.698626);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(14,3.195739);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(15,5.129329);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(16,4.037447);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(17,3.818462);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(18,4.920298);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(19,3.450767);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(20,2.007261);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(21,4.958893);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(22,2.446974);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(23,4.186682);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(24,1.795127);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(25,2.298718);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(26,2.005043);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(27,2.703178);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(28,2.354955);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(29,4.256393);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(30,1.407248);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(31,1.044668);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(32,1.988525);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(33,2.989635);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(34,2.280354);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(35,3.459497);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(36,0.8494041);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(37,1.363765);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(38,2.673839);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(39,2.206641);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(40,2.191468);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(41,108.5775);
   VbbHcc_tags_H_mass_stack_5->SetBinError(4,0.1813612);
   VbbHcc_tags_H_mass_stack_5->SetBinError(5,1.338084);
   VbbHcc_tags_H_mass_stack_5->SetBinError(6,1.31947);
   VbbHcc_tags_H_mass_stack_5->SetBinError(7,1.461684);
   VbbHcc_tags_H_mass_stack_5->SetBinError(8,0.6871784);
   VbbHcc_tags_H_mass_stack_5->SetBinError(9,1.614433);
   VbbHcc_tags_H_mass_stack_5->SetBinError(10,7.906511);
   VbbHcc_tags_H_mass_stack_5->SetBinError(11,5.262659);
   VbbHcc_tags_H_mass_stack_5->SetBinError(12,1.876487);
   VbbHcc_tags_H_mass_stack_5->SetBinError(13,1.711102);
   VbbHcc_tags_H_mass_stack_5->SetBinError(14,1.367757);
   VbbHcc_tags_H_mass_stack_5->SetBinError(15,1.585487);
   VbbHcc_tags_H_mass_stack_5->SetBinError(16,1.06533);
   VbbHcc_tags_H_mass_stack_5->SetBinError(17,1.288934);
   VbbHcc_tags_H_mass_stack_5->SetBinError(18,1.411671);
   VbbHcc_tags_H_mass_stack_5->SetBinError(19,1.004097);
   VbbHcc_tags_H_mass_stack_5->SetBinError(20,0.4641977);
   VbbHcc_tags_H_mass_stack_5->SetBinError(21,1.321505);
   VbbHcc_tags_H_mass_stack_5->SetBinError(22,0.6835856);
   VbbHcc_tags_H_mass_stack_5->SetBinError(23,1.258991);
   VbbHcc_tags_H_mass_stack_5->SetBinError(24,0.4804223);
   VbbHcc_tags_H_mass_stack_5->SetBinError(25,0.5221406);
   VbbHcc_tags_H_mass_stack_5->SetBinError(26,0.5506615);
   VbbHcc_tags_H_mass_stack_5->SetBinError(27,0.6272297);
   VbbHcc_tags_H_mass_stack_5->SetBinError(28,0.6723039);
   VbbHcc_tags_H_mass_stack_5->SetBinError(29,1.641137);
   VbbHcc_tags_H_mass_stack_5->SetBinError(30,0.4038438);
   VbbHcc_tags_H_mass_stack_5->SetBinError(31,0.373108);
   VbbHcc_tags_H_mass_stack_5->SetBinError(32,0.5155463);
   VbbHcc_tags_H_mass_stack_5->SetBinError(33,0.8688892);
   VbbHcc_tags_H_mass_stack_5->SetBinError(34,1.258344);
   VbbHcc_tags_H_mass_stack_5->SetBinError(35,1.656487);
   VbbHcc_tags_H_mass_stack_5->SetBinError(36,0.2996489);
   VbbHcc_tags_H_mass_stack_5->SetBinError(37,0.4437663);
   VbbHcc_tags_H_mass_stack_5->SetBinError(38,1.425003);
   VbbHcc_tags_H_mass_stack_5->SetBinError(39,1.252067);
   VbbHcc_tags_H_mass_stack_5->SetBinError(40,0.9811909);
   VbbHcc_tags_H_mass_stack_5->SetBinError(41,6.314427);
   VbbHcc_tags_H_mass_stack_5->SetEntries(2041);

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
   VbbHcc_tags_H_mass_stack_6->SetBinContent(4,0.3752659);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(6,0.3049337);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(7,0.2355824);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(10,0.2950387);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(41,0.232904);
   VbbHcc_tags_H_mass_stack_6->SetBinError(4,0.3752659);
   VbbHcc_tags_H_mass_stack_6->SetBinError(6,0.3049337);
   VbbHcc_tags_H_mass_stack_6->SetBinError(7,0.2355824);
   VbbHcc_tags_H_mass_stack_6->SetBinError(10,0.2950387);
   VbbHcc_tags_H_mass_stack_6->SetBinError(41,0.232904);
   VbbHcc_tags_H_mass_stack_6->SetEntries(5);

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
   VbbHcc_tags_H_mass_stack_7->SetBinContent(7,0.2167551);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(10,0.269206);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(14,0.2711943);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(17,0.3004961);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(31,0.4014348);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(32,0.2774426);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(35,0.181553);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(36,0.2275793);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(37,0.2557154);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(40,0.24863);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(41,3.456614);
   VbbHcc_tags_H_mass_stack_7->SetBinError(7,0.2167551);
   VbbHcc_tags_H_mass_stack_7->SetBinError(10,0.269206);
   VbbHcc_tags_H_mass_stack_7->SetBinError(14,0.2711943);
   VbbHcc_tags_H_mass_stack_7->SetBinError(17,0.3004961);
   VbbHcc_tags_H_mass_stack_7->SetBinError(31,0.287587);
   VbbHcc_tags_H_mass_stack_7->SetBinError(32,0.2774426);
   VbbHcc_tags_H_mass_stack_7->SetBinError(35,0.181553);
   VbbHcc_tags_H_mass_stack_7->SetBinError(36,0.2275793);
   VbbHcc_tags_H_mass_stack_7->SetBinError(37,0.2557154);
   VbbHcc_tags_H_mass_stack_7->SetBinError(40,0.24863);
   VbbHcc_tags_H_mass_stack_7->SetBinError(41,0.978225);
   VbbHcc_tags_H_mass_stack_7->SetEntries(24);

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
   VbbHcc_tags_H_mass_stack_8->SetBinContent(5,0.7183118);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(6,0.5446547);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(7,0.3647205);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(8,2.535876);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(9,3.097175);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(10,2.689123);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(11,0.449942);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(12,0.9379905);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(13,0.5074209);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(15,0.2772454);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(16,0.4295334);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(17,0.4504052);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(18,0.2579466);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(19,0.4996318);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(20,0.5546675);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(21,0.230644);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(22,0.2198757);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(23,0.7400153);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(24,0.4238399);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(25,0.2766656);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(26,0.7823064);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(27,0.2374158);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(28,0.7773893);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(29,0.2404737);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(30,0.2065061);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(31,0.2306696);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(32,0.1345712);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(33,0.6787246);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(34,0.4180046);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(35,0.2354651);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(36,0.1856216);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(37,0.1807044);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(39,0.1989524);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(40,0.2255815);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(41,20.21518);
   VbbHcc_tags_H_mass_stack_8->SetBinError(5,0.4397866);
   VbbHcc_tags_H_mass_stack_8->SetBinError(6,0.38727);
   VbbHcc_tags_H_mass_stack_8->SetBinError(7,0.2610003);
   VbbHcc_tags_H_mass_stack_8->SetBinError(8,0.7767268);
   VbbHcc_tags_H_mass_stack_8->SetBinError(9,0.8787044);
   VbbHcc_tags_H_mass_stack_8->SetBinError(10,0.786994);
   VbbHcc_tags_H_mass_stack_8->SetBinError(11,0.3050905);
   VbbHcc_tags_H_mass_stack_8->SetBinError(12,0.4268512);
   VbbHcc_tags_H_mass_stack_8->SetBinError(13,0.3664133);
   VbbHcc_tags_H_mass_stack_8->SetBinError(15,0.2772454);
   VbbHcc_tags_H_mass_stack_8->SetBinError(16,0.3040343);
   VbbHcc_tags_H_mass_stack_8->SetBinError(17,0.3261236);
   VbbHcc_tags_H_mass_stack_8->SetBinError(18,0.2459637);
   VbbHcc_tags_H_mass_stack_8->SetBinError(19,0.3533178);
   VbbHcc_tags_H_mass_stack_8->SetBinError(20,0.3984227);
   VbbHcc_tags_H_mass_stack_8->SetBinError(21,0.230644);
   VbbHcc_tags_H_mass_stack_8->SetBinError(22,0.2198757);
   VbbHcc_tags_H_mass_stack_8->SetBinError(23,0.4303205);
   VbbHcc_tags_H_mass_stack_8->SetBinError(24,0.3068336);
   VbbHcc_tags_H_mass_stack_8->SetBinError(25,0.2568256);
   VbbHcc_tags_H_mass_stack_8->SetBinError(26,0.4584131);
   VbbHcc_tags_H_mass_stack_8->SetBinError(27,0.2374158);
   VbbHcc_tags_H_mass_stack_8->SetBinError(28,0.451688);
   VbbHcc_tags_H_mass_stack_8->SetBinError(29,0.2404737);
   VbbHcc_tags_H_mass_stack_8->SetBinError(30,0.2065061);
   VbbHcc_tags_H_mass_stack_8->SetBinError(31,0.2306696);
   VbbHcc_tags_H_mass_stack_8->SetBinError(32,0.1345712);
   VbbHcc_tags_H_mass_stack_8->SetBinError(33,0.3927072);
   VbbHcc_tags_H_mass_stack_8->SetBinError(34,0.3056427);
   VbbHcc_tags_H_mass_stack_8->SetBinError(35,0.2354651);
   VbbHcc_tags_H_mass_stack_8->SetBinError(36,0.1856216);
   VbbHcc_tags_H_mass_stack_8->SetBinError(37,0.1807044);
   VbbHcc_tags_H_mass_stack_8->SetBinError(39,0.1989524);
   VbbHcc_tags_H_mass_stack_8->SetBinError(40,0.2255815);
   VbbHcc_tags_H_mass_stack_8->SetBinError(41,2.257081);
   VbbHcc_tags_H_mass_stack_8->SetEntries(178);

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
   VbbHcc_tags_H_mass_stack_9->SetBinContent(3,0.006221361);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(4,0.04131285);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(5,0.1725647);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(6,0.2750396);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(7,0.5957125);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(8,1.318568);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(9,2.241318);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(10,2.368436);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(11,1.701007);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(12,1.560736);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(13,1.350852);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(14,0.8628847);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(15,0.6519279);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(16,0.4409999);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(17,0.4043748);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(18,0.3902753);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(19,0.3627349);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(20,0.3997633);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(21,0.404344);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(22,0.4006771);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(23,0.3514844);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(24,0.3942514);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(25,0.4215016);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(26,0.4206313);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(27,0.4388346);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(28,0.4399335);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(29,0.4315892);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(30,0.4460526);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(31,0.4832173);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(32,0.465999);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(33,0.4356268);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(34,0.4553195);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(35,0.4506975);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(36,0.4925794);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(37,0.4577126);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(38,0.4239866);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(39,0.4327626);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(40,0.4172114);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(41,18.17629);
   VbbHcc_tags_H_mass_stack_9->SetBinError(3,0.003142195);
   VbbHcc_tags_H_mass_stack_9->SetBinError(4,0.007982691);
   VbbHcc_tags_H_mass_stack_9->SetBinError(5,0.01646344);
   VbbHcc_tags_H_mass_stack_9->SetBinError(6,0.02084463);
   VbbHcc_tags_H_mass_stack_9->SetBinError(7,0.0305005);
   VbbHcc_tags_H_mass_stack_9->SetBinError(8,0.04556272);
   VbbHcc_tags_H_mass_stack_9->SetBinError(9,0.0602295);
   VbbHcc_tags_H_mass_stack_9->SetBinError(10,0.06195644);
   VbbHcc_tags_H_mass_stack_9->SetBinError(11,0.05270621);
   VbbHcc_tags_H_mass_stack_9->SetBinError(12,0.05059727);
   VbbHcc_tags_H_mass_stack_9->SetBinError(13,0.04678209);
   VbbHcc_tags_H_mass_stack_9->SetBinError(14,0.03720636);
   VbbHcc_tags_H_mass_stack_9->SetBinError(15,0.03230543);
   VbbHcc_tags_H_mass_stack_9->SetBinError(16,0.0262497);
   VbbHcc_tags_H_mass_stack_9->SetBinError(17,0.02517694);
   VbbHcc_tags_H_mass_stack_9->SetBinError(18,0.02486255);
   VbbHcc_tags_H_mass_stack_9->SetBinError(19,0.02391286);
   VbbHcc_tags_H_mass_stack_9->SetBinError(20,0.02491395);
   VbbHcc_tags_H_mass_stack_9->SetBinError(21,0.02495425);
   VbbHcc_tags_H_mass_stack_9->SetBinError(22,0.02489141);
   VbbHcc_tags_H_mass_stack_9->SetBinError(23,0.02312865);
   VbbHcc_tags_H_mass_stack_9->SetBinError(24,0.02495536);
   VbbHcc_tags_H_mass_stack_9->SetBinError(25,0.02595646);
   VbbHcc_tags_H_mass_stack_9->SetBinError(26,0.02543205);
   VbbHcc_tags_H_mass_stack_9->SetBinError(27,0.02628968);
   VbbHcc_tags_H_mass_stack_9->SetBinError(28,0.0260581);
   VbbHcc_tags_H_mass_stack_9->SetBinError(29,0.02571042);
   VbbHcc_tags_H_mass_stack_9->SetBinError(30,0.02622961);
   VbbHcc_tags_H_mass_stack_9->SetBinError(31,0.02757497);
   VbbHcc_tags_H_mass_stack_9->SetBinError(32,0.0269356);
   VbbHcc_tags_H_mass_stack_9->SetBinError(33,0.02607448);
   VbbHcc_tags_H_mass_stack_9->SetBinError(34,0.02697645);
   VbbHcc_tags_H_mass_stack_9->SetBinError(35,0.02649904);
   VbbHcc_tags_H_mass_stack_9->SetBinError(36,0.02776264);
   VbbHcc_tags_H_mass_stack_9->SetBinError(37,0.0267055);
   VbbHcc_tags_H_mass_stack_9->SetBinError(38,0.0257424);
   VbbHcc_tags_H_mass_stack_9->SetBinError(39,0.02670556);
   VbbHcc_tags_H_mass_stack_9->SetBinError(40,0.02536168);
   VbbHcc_tags_H_mass_stack_9->SetBinError(41,0.1727556);
   VbbHcc_tags_H_mass_stack_9->SetEntries(28819);

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
   VbbHcc_tags_H_mass_stack_10->SetBinContent(3,0.002000024);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(4,0.01665953);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(5,0.05801866);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(6,0.1091464);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(7,0.2679767);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(8,0.5577229);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(9,0.8645997);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(10,0.7857094);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(11,0.6402226);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(12,0.5706939);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(13,0.5095062);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(14,0.3900212);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(15,0.2821319);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(16,0.2178916);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(17,0.2057497);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(18,0.1960393);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(19,0.1963193);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(20,0.2020877);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(21,0.1819448);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(22,0.2081622);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(23,0.2122286);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(24,0.2013676);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(25,0.1954935);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(26,0.1909101);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(27,0.1947383);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(28,0.1920908);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(29,0.179611);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(30,0.1893163);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(31,0.1834741);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(32,0.1655246);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(33,0.1933632);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(34,0.1833432);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(35,0.1633248);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(36,0.1695305);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(37,0.1755359);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(38,0.1762547);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(39,0.1726647);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(40,0.1715176);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(41,5.825924);
   VbbHcc_tags_H_mass_stack_10->SetBinError(3,0.0008983265);
   VbbHcc_tags_H_mass_stack_10->SetBinError(4,0.002541076);
   VbbHcc_tags_H_mass_stack_10->SetBinError(5,0.004734404);
   VbbHcc_tags_H_mass_stack_10->SetBinError(6,0.006506688);
   VbbHcc_tags_H_mass_stack_10->SetBinError(7,0.01014019);
   VbbHcc_tags_H_mass_stack_10->SetBinError(8,0.01469208);
   VbbHcc_tags_H_mass_stack_10->SetBinError(9,0.01831477);
   VbbHcc_tags_H_mass_stack_10->SetBinError(10,0.01744745);
   VbbHcc_tags_H_mass_stack_10->SetBinError(11,0.01572992);
   VbbHcc_tags_H_mass_stack_10->SetBinError(12,0.01490726);
   VbbHcc_tags_H_mass_stack_10->SetBinError(13,0.01409106);
   VbbHcc_tags_H_mass_stack_10->SetBinError(14,0.01233711);
   VbbHcc_tags_H_mass_stack_10->SetBinError(15,0.01042653);
   VbbHcc_tags_H_mass_stack_10->SetBinError(16,0.009169019);
   VbbHcc_tags_H_mass_stack_10->SetBinError(17,0.008912711);
   VbbHcc_tags_H_mass_stack_10->SetBinError(18,0.008691416);
   VbbHcc_tags_H_mass_stack_10->SetBinError(19,0.008691594);
   VbbHcc_tags_H_mass_stack_10->SetBinError(20,0.008849133);
   VbbHcc_tags_H_mass_stack_10->SetBinError(21,0.008378321);
   VbbHcc_tags_H_mass_stack_10->SetBinError(22,0.008959929);
   VbbHcc_tags_H_mass_stack_10->SetBinError(23,0.009024503);
   VbbHcc_tags_H_mass_stack_10->SetBinError(24,0.008812365);
   VbbHcc_tags_H_mass_stack_10->SetBinError(25,0.008655657);
   VbbHcc_tags_H_mass_stack_10->SetBinError(26,0.008575838);
   VbbHcc_tags_H_mass_stack_10->SetBinError(27,0.008614032);
   VbbHcc_tags_H_mass_stack_10->SetBinError(28,0.008533973);
   VbbHcc_tags_H_mass_stack_10->SetBinError(29,0.008276466);
   VbbHcc_tags_H_mass_stack_10->SetBinError(30,0.008503522);
   VbbHcc_tags_H_mass_stack_10->SetBinError(31,0.008379502);
   VbbHcc_tags_H_mass_stack_10->SetBinError(32,0.007890449);
   VbbHcc_tags_H_mass_stack_10->SetBinError(33,0.008633598);
   VbbHcc_tags_H_mass_stack_10->SetBinError(34,0.008407048);
   VbbHcc_tags_H_mass_stack_10->SetBinError(35,0.007869463);
   VbbHcc_tags_H_mass_stack_10->SetBinError(36,0.008046551);
   VbbHcc_tags_H_mass_stack_10->SetBinError(37,0.008213412);
   VbbHcc_tags_H_mass_stack_10->SetBinError(38,0.008181923);
   VbbHcc_tags_H_mass_stack_10->SetBinError(39,0.008107673);
   VbbHcc_tags_H_mass_stack_10->SetBinError(40,0.008097655);
   VbbHcc_tags_H_mass_stack_10->SetBinError(41,0.04785442);
   VbbHcc_tags_H_mass_stack_10->SetEntries(40948);

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
   VbbHcc_tags_H_mass_stack_11->SetBinContent(5,0.00214307);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(6,0.001571673);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(7,0.001621248);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(8,0.00345065);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(9,0.003675542);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(10,0.004554117);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(11,0.0114583);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(12,0.01205233);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(13,0.009550427);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(14,0.007570941);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(15,0.005639322);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(16,0.001345786);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(17,0.001361999);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(18,0.005193639);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(19,0.001936516);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(20,0.00161524);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(23,0.001253935);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(24,0.002974461);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(26,0.001700983);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(28,0.001430948);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(30,0.001471723);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(34,0.001845983);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(37,0.001607775);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(38,0.001049011);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(41,0.04464795);
   VbbHcc_tags_H_mass_stack_11->SetBinError(5,0.00214307);
   VbbHcc_tags_H_mass_stack_11->SetBinError(6,0.001571673);
   VbbHcc_tags_H_mass_stack_11->SetBinError(7,0.001621248);
   VbbHcc_tags_H_mass_stack_11->SetBinError(8,0.002445298);
   VbbHcc_tags_H_mass_stack_11->SetBinError(9,0.00260286);
   VbbHcc_tags_H_mass_stack_11->SetBinError(10,0.002633287);
   VbbHcc_tags_H_mass_stack_11->SetBinError(11,0.004112826);
   VbbHcc_tags_H_mass_stack_11->SetBinError(12,0.004290483);
   VbbHcc_tags_H_mass_stack_11->SetBinError(13,0.003645549);
   VbbHcc_tags_H_mass_stack_11->SetBinError(14,0.003438022);
   VbbHcc_tags_H_mass_stack_11->SetBinError(15,0.002843691);
   VbbHcc_tags_H_mass_stack_11->SetBinError(16,0.001345786);
   VbbHcc_tags_H_mass_stack_11->SetBinError(17,0.001361999);
   VbbHcc_tags_H_mass_stack_11->SetBinError(18,0.003033624);
   VbbHcc_tags_H_mass_stack_11->SetBinError(19,0.001936516);
   VbbHcc_tags_H_mass_stack_11->SetBinError(20,0.00161524);
   VbbHcc_tags_H_mass_stack_11->SetBinError(23,0.001253935);
   VbbHcc_tags_H_mass_stack_11->SetBinError(24,0.002108021);
   VbbHcc_tags_H_mass_stack_11->SetBinError(26,0.001700983);
   VbbHcc_tags_H_mass_stack_11->SetBinError(28,0.001430948);
   VbbHcc_tags_H_mass_stack_11->SetBinError(30,0.001153144);
   VbbHcc_tags_H_mass_stack_11->SetBinError(34,0.001845983);
   VbbHcc_tags_H_mass_stack_11->SetBinError(37,0.001607775);
   VbbHcc_tags_H_mass_stack_11->SetBinError(38,0.001049011);
   VbbHcc_tags_H_mass_stack_11->SetBinError(41,0.008644468);
   VbbHcc_tags_H_mass_stack_11->SetEntries(87);

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
   VbbHcc_tags_H_mass_stack_12->SetBinContent(4,0.0002598584);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(5,0.0002272761);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(6,0.0001507694);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(7,0.0004531822);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(8,0.001078191);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(9,0.001017529);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(10,0.002650901);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(11,0.002665381);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(12,0.003432062);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(13,0.003999638);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(14,0.002065197);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(15,0.002465658);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(16,0.0004772252);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(17,0.0005206143);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(18,0.002533092);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(19,0.0008669525);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(20,0.0006633954);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(21,0.0004127916);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(22,0.000737271);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(23,0.0005042547);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(24,0.0004097346);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(25,0.001448353);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(26,0.0007706068);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(27,0.0007626497);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(28,0.0004383936);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(29,0.0004928902);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(30,0.0004267205);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(31,0.000502436);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(32,0.000374716);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(33,0.0007993833);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(35,0.0002045483);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(36,0.000301761);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(37,0.0008122029);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(38,0.001281098);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(39,0.0003791085);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(40,0.0003996777);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(41,0.01830155);
   VbbHcc_tags_H_mass_stack_12->SetBinError(4,0.0002598584);
   VbbHcc_tags_H_mass_stack_12->SetBinError(5,0.0002272761);
   VbbHcc_tags_H_mass_stack_12->SetBinError(6,0.0001507694);
   VbbHcc_tags_H_mass_stack_12->SetBinError(7,0.0003214855);
   VbbHcc_tags_H_mass_stack_12->SetBinError(8,0.000483047);
   VbbHcc_tags_H_mass_stack_12->SetBinError(9,0.0004560484);
   VbbHcc_tags_H_mass_stack_12->SetBinError(10,0.0007286143);
   VbbHcc_tags_H_mass_stack_12->SetBinError(11,0.0007572336);
   VbbHcc_tags_H_mass_stack_12->SetBinError(12,0.0008366152);
   VbbHcc_tags_H_mass_stack_12->SetBinError(13,0.0009041858);
   VbbHcc_tags_H_mass_stack_12->SetBinError(14,0.0006626028);
   VbbHcc_tags_H_mass_stack_12->SetBinError(15,0.0007018096);
   VbbHcc_tags_H_mass_stack_12->SetBinError(16,0.0002883007);
   VbbHcc_tags_H_mass_stack_12->SetBinError(17,0.0003015885);
   VbbHcc_tags_H_mass_stack_12->SetBinError(18,0.0007703626);
   VbbHcc_tags_H_mass_stack_12->SetBinError(19,0.0004432754);
   VbbHcc_tags_H_mass_stack_12->SetBinError(20,0.0003420876);
   VbbHcc_tags_H_mass_stack_12->SetBinError(21,0.0002922259);
   VbbHcc_tags_H_mass_stack_12->SetBinError(22,0.0003931075);
   VbbHcc_tags_H_mass_stack_12->SetBinError(23,0.0003044094);
   VbbHcc_tags_H_mass_stack_12->SetBinError(24,0.0002900826);
   VbbHcc_tags_H_mass_stack_12->SetBinError(25,0.0005514164);
   VbbHcc_tags_H_mass_stack_12->SetBinError(26,0.0003939924);
   VbbHcc_tags_H_mass_stack_12->SetBinError(27,0.0003838234);
   VbbHcc_tags_H_mass_stack_12->SetBinError(28,0.0003261269);
   VbbHcc_tags_H_mass_stack_12->SetBinError(29,0.0002914173);
   VbbHcc_tags_H_mass_stack_12->SetBinError(30,0.0003022163);
   VbbHcc_tags_H_mass_stack_12->SetBinError(31,0.0002947982);
   VbbHcc_tags_H_mass_stack_12->SetBinError(32,0.0002653869);
   VbbHcc_tags_H_mass_stack_12->SetBinError(33,0.0004105718);
   VbbHcc_tags_H_mass_stack_12->SetBinError(35,0.0002045483);
   VbbHcc_tags_H_mass_stack_12->SetBinError(36,0.0002162029);
   VbbHcc_tags_H_mass_stack_12->SetBinError(37,0.0004119988);
   VbbHcc_tags_H_mass_stack_12->SetBinError(38,0.0005244451);
   VbbHcc_tags_H_mass_stack_12->SetBinError(39,0.0002737688);
   VbbHcc_tags_H_mass_stack_12->SetBinError(40,0.0002829378);
   VbbHcc_tags_H_mass_stack_12->SetBinError(41,0.001970189);
   VbbHcc_tags_H_mass_stack_12->SetEntries(277);

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
   
   TH1D *VbbHcc_tags_H_mass__15 = new TH1D("VbbHcc_tags_H_mass__15","",40,0,400);
   VbbHcc_tags_H_mass__15->SetBinContent(3,25);
   VbbHcc_tags_H_mass__15->SetBinContent(4,325);
   VbbHcc_tags_H_mass__15->SetBinContent(5,959);
   VbbHcc_tags_H_mass__15->SetBinContent(6,1388);
   VbbHcc_tags_H_mass__15->SetBinContent(7,1562);
   VbbHcc_tags_H_mass__15->SetBinContent(15,1331);
   VbbHcc_tags_H_mass__15->SetBinContent(16,1316);
   VbbHcc_tags_H_mass__15->SetBinContent(17,1215);
   VbbHcc_tags_H_mass__15->SetBinContent(18,1161);
   VbbHcc_tags_H_mass__15->SetBinContent(19,1102);
   VbbHcc_tags_H_mass__15->SetBinContent(20,1066);
   VbbHcc_tags_H_mass__15->SetBinContent(21,977);
   VbbHcc_tags_H_mass__15->SetBinContent(22,1009);
   VbbHcc_tags_H_mass__15->SetBinContent(23,955);
   VbbHcc_tags_H_mass__15->SetBinContent(24,959);
   VbbHcc_tags_H_mass__15->SetBinContent(25,892);
   VbbHcc_tags_H_mass__15->SetBinContent(26,899);
   VbbHcc_tags_H_mass__15->SetBinContent(27,832);
   VbbHcc_tags_H_mass__15->SetBinContent(28,798);
   VbbHcc_tags_H_mass__15->SetBinContent(29,790);
   VbbHcc_tags_H_mass__15->SetBinContent(30,737);
   VbbHcc_tags_H_mass__15->SetBinContent(31,791);
   VbbHcc_tags_H_mass__15->SetBinContent(32,709);
   VbbHcc_tags_H_mass__15->SetBinContent(33,708);
   VbbHcc_tags_H_mass__15->SetBinContent(34,677);
   VbbHcc_tags_H_mass__15->SetBinContent(35,652);
   VbbHcc_tags_H_mass__15->SetBinContent(36,649);
   VbbHcc_tags_H_mass__15->SetBinContent(37,654);
   VbbHcc_tags_H_mass__15->SetBinContent(38,628);
   VbbHcc_tags_H_mass__15->SetBinContent(39,642);
   VbbHcc_tags_H_mass__15->SetBinContent(40,630);
   VbbHcc_tags_H_mass__15->SetBinContent(41,25259);
   VbbHcc_tags_H_mass__15->SetEntries(63158);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass__15->SetLineColor(ci);
   VbbHcc_tags_H_mass__15->SetLineWidth(2);
   VbbHcc_tags_H_mass__15->SetMarkerStyle(20);
   VbbHcc_tags_H_mass__15->SetMarkerSize(1.2);
   VbbHcc_tags_H_mass__15->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass__15->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__15->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__15->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__15->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__15->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__15->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__15->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__15->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass__15->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__15->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__15->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__15->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__15->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__15->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_mass_fx1011[40] = {
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
   Double_t Graph_from_VbbHcc_tags_H_mass_fy1011[40] = {
   0,
   0,
   170.8577,
   524.4089,
   3490.699,
   5408.367,
   5250.557,
   5766.034,
   4423.859,
   3522.381,
   4364.234,
   4435.14,
   4114.956,
   3528.753,
   3686.189,
   3825.779,
   3906.294,
   2958.571,
   4127.971,
   2679.471,
   2964.159,
   2883.043,
   2815.863,
   2703.095,
   23604.21,
   1595.373,
   2388.248,
   3114.646,
   2002.479,
   2274.544,
   2683.927,
   2013.48,
   1901.486,
   2120.587,
   1823.903,
   2317.6,
   2404.663,
   2237.713,
   1578.546,
   1446.637};
   Double_t Graph_from_VbbHcc_tags_H_mass_fex1011[40] = {
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
   Double_t Graph_from_VbbHcc_tags_H_mass_fey1011[40] = {
   0,
   0,
   152.1885,
   194.9402,
   761.3982,
   955.4681,
   880.8542,
   991.608,
   723.2381,
   659.9364,
   805.1308,
   725.5385,
   709.5548,
   694.967,
   703.8824,
   767.8628,
   726.0273,
   565.522,
   1065.07,
   557.1032,
   673.6981,
   591.9862,
   559.0011,
   618.4526,
   20600.83,
   346.9559,
   562.8466,
   763.7036,
   519.7,
   589.7082,
   616.2745,
   479.176,
   542.6202,
   538.7714,
   417.3498,
   534.8918,
   599.3061,
   598.6677,
   421.8039,
   384.5366};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_H_mass_fx1011,Graph_from_VbbHcc_tags_H_mass_fy1011,Graph_from_VbbHcc_tags_H_mass_fex1011,Graph_from_VbbHcc_tags_H_mass_fey1011);
   gre->SetName("Graph_from_VbbHcc_tags_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_mass1011 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_mass1011","",100,0,440);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->SetMaximum(48625.55);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_mass1011->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_mass1011);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_mass","Data (JetHT, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__16 = new TH1D("data_mc_ratio__16","",40,0,400);
   data_mc_ratio__16->SetBinContent(3,0.1463206);
   data_mc_ratio__16->SetBinContent(4,0.6197454);
   data_mc_ratio__16->SetBinContent(5,0.2747301);
   data_mc_ratio__16->SetBinContent(6,0.2566394);
   data_mc_ratio__16->SetBinContent(7,0.2974922);
   data_mc_ratio__16->SetBinContent(8,0.283904);
   data_mc_ratio__16->SetBinContent(9,0.3594147);
   data_mc_ratio__16->SetBinContent(10,0.4531026);
   data_mc_ratio__16->SetBinContent(11,0.3469108);
   data_mc_ratio__16->SetBinContent(12,0.3530892);
   data_mc_ratio__16->SetBinContent(13,0.3521302);
   data_mc_ratio__16->SetBinContent(14,0.4165778);
   data_mc_ratio__16->SetBinContent(15,0.3610775);
   data_mc_ratio__16->SetBinContent(16,0.3439822);
   data_mc_ratio__16->SetBinContent(17,0.3110365);
   data_mc_ratio__16->SetBinContent(18,0.3924191);
   data_mc_ratio__16->SetBinContent(19,0.2669592);
   data_mc_ratio__16->SetBinContent(20,0.3978398);
   data_mc_ratio__16->SetBinContent(21,0.3296045);
   data_mc_ratio__16->SetBinContent(22,0.3499775);
   data_mc_ratio__16->SetBinContent(23,0.33915);
   data_mc_ratio__16->SetBinContent(24,0.3547785);
   data_mc_ratio__16->SetBinContent(25,0.03778986);
   data_mc_ratio__16->SetBinContent(26,0.5635047);
   data_mc_ratio__16->SetBinContent(27,0.3483726);
   data_mc_ratio__16->SetBinContent(28,0.2562089);
   data_mc_ratio__16->SetBinContent(29,0.394511);
   data_mc_ratio__16->SetBinContent(30,0.324021);
   data_mc_ratio__16->SetBinContent(31,0.2947174);
   data_mc_ratio__16->SetBinContent(32,0.3521266);
   data_mc_ratio__16->SetBinContent(33,0.3723404);
   data_mc_ratio__16->SetBinContent(34,0.3192512);
   data_mc_ratio__16->SetBinContent(35,0.3574752);
   data_mc_ratio__16->SetBinContent(36,0.280031);
   data_mc_ratio__16->SetBinContent(37,0.2719716);
   data_mc_ratio__16->SetBinContent(38,0.2806437);
   data_mc_ratio__16->SetBinContent(39,0.4067034);
   data_mc_ratio__16->SetBinContent(40,0.4354928);
   data_mc_ratio__16->SetBinContent(41,0.3027864);
   data_mc_ratio__16->SetBinError(3,0.02926413);
   data_mc_ratio__16->SetBinError(4,0.03437729);
   data_mc_ratio__16->SetBinError(5,0.008871496);
   data_mc_ratio__16->SetBinError(6,0.006888562);
   data_mc_ratio__16->SetBinError(7,0.007527229);
   data_mc_ratio__16->SetBinError(8,0.007016929);
   data_mc_ratio__16->SetBinError(9,0.009013579);
   data_mc_ratio__16->SetBinError(10,0.01134175);
   data_mc_ratio__16->SetBinError(11,0.008915689);
   data_mc_ratio__16->SetBinError(12,0.008922541);
   data_mc_ratio__16->SetBinError(13,0.009250582);
   data_mc_ratio__16->SetBinError(14,0.01086519);
   data_mc_ratio__16->SetBinError(15,0.009897179);
   data_mc_ratio__16->SetBinError(16,0.009482177);
   data_mc_ratio__16->SetBinError(17,0.008923254);
   data_mc_ratio__16->SetBinError(18,0.01151686);
   data_mc_ratio__16->SetBinError(19,0.008041817);
   data_mc_ratio__16->SetBinError(20,0.01218511);
   data_mc_ratio__16->SetBinError(21,0.01054498);
   data_mc_ratio__16->SetBinError(22,0.01101779);
   data_mc_ratio__16->SetBinError(23,0.01097464);
   data_mc_ratio__16->SetBinError(24,0.0114564);
   data_mc_ratio__16->SetBinError(25,0.001265298);
   data_mc_ratio__16->SetBinError(26,0.01879393);
   data_mc_ratio__16->SetBinError(27,0.01207765);
   data_mc_ratio__16->SetBinError(28,0.009069696);
   data_mc_ratio__16->SetBinError(29,0.01403607);
   data_mc_ratio__16->SetBinError(30,0.01193547);
   data_mc_ratio__16->SetBinError(31,0.01047894);
   data_mc_ratio__16->SetBinError(32,0.01322439);
   data_mc_ratio__16->SetBinError(33,0.01399341);
   data_mc_ratio__16->SetBinError(34,0.01226982);
   data_mc_ratio__16->SetBinError(35,0.01399981);
   data_mc_ratio__16->SetBinError(36,0.01099218);
   data_mc_ratio__16->SetBinError(37,0.01063493);
   data_mc_ratio__16->SetBinError(38,0.0111989);
   data_mc_ratio__16->SetBinError(39,0.0160513);
   data_mc_ratio__16->SetBinError(40,0.01735045);
   data_mc_ratio__16->SetBinError(41,0.06089247);
   data_mc_ratio__16->SetMinimum(0.4);
   data_mc_ratio__16->SetMaximum(1.6);
   data_mc_ratio__16->SetEntries(578.4214);
   data_mc_ratio__16->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__16->SetLineColor(ci);
   data_mc_ratio__16->SetLineWidth(2);
   data_mc_ratio__16->SetMarkerStyle(20);
   data_mc_ratio__16->SetMarkerSize(1.2);
   data_mc_ratio__16->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__16->GetXaxis()->SetRange(1,30);
   data_mc_ratio__16->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__16->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__16->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__16->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__16->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__16->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__16->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__16->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__16->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__16->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__16->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__16->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__16->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__16->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__16->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__16->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__16->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1012[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1012[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1012[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1012[40] = {
   0,
   0,
   0.8907326,
   0.3717333,
   0.218122,
   0.1766648,
   0.1677639,
   0.171974,
   0.1634858,
   0.1873552,
   0.1844839,
   0.1635886,
   0.1724332,
   0.1969441,
   0.1909512,
   0.2007076,
   0.1858609,
   0.191147,
   0.258013,
   0.2079154,
   0.2272814,
   0.2053338,
   0.1985186,
   0.2287943,
   0.8727606,
   0.2174764,
   0.2356734,
   0.2451976,
   0.2595283,
   0.2592644,
   0.2296167,
   0.2379839,
   0.2853664,
   0.2540671,
   0.2288224,
   0.2307955,
   0.2492266,
   0.2675356,
   0.2672104,
   0.2658142};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1012,Graph_from_mc_statistical_error_fy1012,Graph_from_mc_statistical_error_fex1012,Graph_from_mc_statistical_error_fey1012);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1012 = new TH1F("Graph_Graph_from_mc_statistical_error1012","",100,0,440);
   Graph_Graph_from_mc_statistical_error1012->SetMinimum(0.09834064);
   Graph_Graph_from_mc_statistical_error1012->SetMaximum(2.068879);
   Graph_Graph_from_mc_statistical_error1012->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1012->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1012);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tags_17->cd();
   H_mass_tags_17->Modified();
   H_mass_tags_17->cd();
   H_mass_tags_17->SetSelected(H_mass_tags_17);
}
