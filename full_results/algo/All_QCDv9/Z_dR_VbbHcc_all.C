void Z_dR_VbbHcc_all()
{
//=========Macro generated from canvas: Z_dR_VbbHcc_all/Z_dR_VbbHcc_all
//=========  (Tue Nov 22 09:16:00 2022) by ROOT version 6.14/09
   TCanvas *Z_dR_VbbHcc_all = new TCanvas("Z_dR_VbbHcc_all", "Z_dR_VbbHcc_all",0,0,600,600);
   Z_dR_VbbHcc_all->SetHighLightColor(2);
   Z_dR_VbbHcc_all->Range(0,0,1,1);
   Z_dR_VbbHcc_all->SetFillColor(0);
   Z_dR_VbbHcc_all->SetFillStyle(4000);
   Z_dR_VbbHcc_all->SetBorderMode(0);
   Z_dR_VbbHcc_all->SetBorderSize(2);
   Z_dR_VbbHcc_all->SetFrameFillStyle(1000);
   Z_dR_VbbHcc_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-2468.231,10.52419,2466062);
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
   st->SetMinimum(0.3);
   st->SetMaximum(2113533);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",50,0,10);
   st_stack_20->SetMinimum(0.3);
   st_stack_20->SetMaximum(2219209);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetRange(1,50);
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetLabelSize(0.035);
   st_stack_20->GetXaxis()->SetTitleSize(0.035);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Events/0.2");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetLabelSize(0.05);
   st_stack_20->GetYaxis()->SetTitleSize(0.057);
   st_stack_20->GetYaxis()->SetTitleOffset(1.2);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetLabelSize(0.035);
   st_stack_20->GetZaxis()->SetTitleSize(0.035);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_all_stack_1","",50,0,10);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(3,628778.9);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(4,927288.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(5,731811.6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(6,642848.1);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(7,519368.7);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(8,499718.4);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(9,436718);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(10,371425.1);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(11,341580.9);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(12,306013.2);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(13,302047.8);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(14,285092.4);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(15,284226.3);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(16,223313.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(17,121926.3);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(18,78905.79);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(19,45407.58);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(20,36631.91);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(21,24985.01);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(22,7926.938);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(23,5386.408);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(24,3018.439);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(25,2617.312);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(3,29136.87);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(4,35252.33);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(5,31416.59);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(6,29510.86);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(7,26520.38);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(8,26025.01);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(9,24247.57);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(10,22209.73);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(11,21317.55);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(12,20121.62);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(13,20084.17);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(14,19463.08);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(15,19687.54);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(16,17365.51);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(17,12565.98);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(18,10221.94);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(19,7770.249);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(20,6919.316);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(21,5763.137);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(22,3280.508);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(23,2693.43);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(24,2134.359);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(25,1850.719);
   VbbHcc_algo_Z_dR_all_stack_1->SetEntries(5252);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_all_stack_2","",50,0,10);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(2,1.395926);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(3,872.5874);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(4,1872.477);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(5,2448.458);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(6,3027.53);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(7,3485.531);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(8,3710.39);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(9,3756.975);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(10,3605.745);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(11,3307.834);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(12,2991.57);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(13,2650.945);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(14,2348.155);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(15,2104.783);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(16,1808.417);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(17,970.5943);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(18,555.0872);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(19,324.288);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(20,195.1644);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(21,107.3133);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(22,58.1116);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(23,27.58751);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(24,15.53656);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(25,5.090054);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(26,2.727848);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(27,0.6647614);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(28,0.2464181);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(2,0.4925343);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(3,11.7465);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(4,16.74827);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(5,18.95131);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(6,20.78826);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(7,22.10231);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(8,22.46155);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(9,22.77279);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(10,22.23991);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(11,21.0763);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(12,20.0458);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(13,18.86218);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(14,17.83532);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(15,16.94511);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(16,15.77173);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(17,11.61171);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(18,8.68224);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(19,6.799779);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(20,5.297611);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(21,3.812335);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(22,2.847289);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(23,1.96024);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(24,1.469757);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(25,0.7847414);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(26,0.6375391);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(27,0.3195201);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(28,0.1995198);
   VbbHcc_algo_Z_dR_all_stack_2->SetEntries(660055);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_3 = new TH1D("VbbHcc_algo_Z_dR_all_stack_3","",50,0,10);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(2,7.346796);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(3,7353.752);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(4,16504.07);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(5,21984.41);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(6,27511.48);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(7,31393.81);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(8,33270.81);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(9,33046.53);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(10,31182.05);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(11,28314.85);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(12,25181.64);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(13,22079.13);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(14,19501.25);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(15,17550.04);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(16,15034.5);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(17,7055.054);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(18,3534.943);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(19,1812.026);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(20,935.9648);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(21,471.9768);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(22,220.0076);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(23,98.97085);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(24,40.32642);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(25,15.25954);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(26,5.381054);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(27,1.423302);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinContent(28,0.1790246);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(2,0.6889411);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(3,22.04644);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(4,33.01483);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(5,38.13604);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(6,42.65005);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(7,45.54607);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(8,46.83909);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(9,46.60518);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(10,45.18121);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(11,42.96979);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(12,40.37772);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(13,37.69486);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(14,35.31192);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(15,33.40064);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(16,30.84443);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(17,21.10335);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(18,14.89635);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(19,10.64176);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(20,7.593455);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(21,5.394886);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(22,3.665272);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(23,2.439997);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(24,1.5384);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(25,0.9655933);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(26,0.5644571);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(27,0.2822149);
   VbbHcc_algo_Z_dR_all_stack_3->SetBinError(28,0.1088898);
   VbbHcc_algo_Z_dR_all_stack_3->SetEntries(5745826);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_4 = new TH1D("VbbHcc_algo_Z_dR_all_stack_4","",50,0,10);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(2,1.257363);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(3,536.892);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(4,2214.191);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(5,2929.047);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(6,2076.284);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(7,1118.563);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(8,719.1335);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(9,562.6667);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(10,454.0768);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(11,413.0563);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(12,348.1878);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(13,322.5777);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(14,305.705);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(15,266.5648);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(16,245.6857);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(17,152.2136);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(18,97.30767);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(19,57.2105);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(20,44.74812);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(21,33.46519);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(22,24.29585);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(23,11.60805);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(24,6.22595);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(25,1.034305);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(26,1.564232);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(27,0.3954546);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinContent(28,0.786712);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(2,0.6293538);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(3,13.54994);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(4,27.42181);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(5,31.48458);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(6,26.49663);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(7,19.37977);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(8,15.45255);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(9,13.71777);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(10,12.34285);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(11,11.72072);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(12,10.76288);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(13,10.31714);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(14,10.12823);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(15,9.398627);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(16,9.059538);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(17,7.096163);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(18,5.755932);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(19,4.334874);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(20,3.849174);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(21,3.250571);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(22,2.890278);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(23,1.995755);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(24,1.448059);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(25,0.5280397);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(26,0.7089678);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(27,0.3954546);
   VbbHcc_algo_Z_dR_all_stack_4->SetBinError(28,0.5474776);
   VbbHcc_algo_Z_dR_all_stack_4->SetEntries(40350);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_5 = new TH1D("VbbHcc_algo_Z_dR_all_stack_5","",50,0,10);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(2,1.464731);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(3,846.1718);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(4,863.2712);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(5,585.0855);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(6,441.6864);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(7,381.014);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(8,344.2794);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(9,269.7054);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(10,282.3489);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(11,227.5514);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(12,298.0397);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(13,234.707);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(14,215.9806);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(15,213.7119);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(16,145.0592);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(17,116.945);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(18,85.06005);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(19,52.65025);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(20,50.10224);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(21,27.8158);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(22,16.69844);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(23,12.73204);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(24,1.540664);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(25,1.058951);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(26,2.138514);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinContent(27,0.5454643);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(2,1.464731);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(3,31.82978);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(4,32.10408);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(5,26.56537);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(6,22.99429);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(7,21.61665);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(8,20.2125);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(9,17.82087);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(10,18.33543);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(11,16.4631);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(12,19.01933);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(13,16.61152);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(14,15.97316);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(15,15.81711);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(16,13.06143);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(17,11.79889);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(18,10.0363);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(19,7.795901);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(20,7.774824);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(21,5.646296);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(22,4.347763);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(23,3.776686);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(24,1.106387);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(25,1.058951);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(26,1.512158);
   VbbHcc_algo_Z_dR_all_stack_5->SetBinError(27,0.5454643);
   VbbHcc_algo_Z_dR_all_stack_5->SetEntries(4995);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_6 = new TH1D("VbbHcc_algo_Z_dR_all_stack_6","",50,0,10);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(3,11.97589);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(4,18.13013);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(5,12.47522);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(6,16.38151);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(7,14.59106);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(8,15.32713);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(9,12.39073);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(10,11.6285);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(11,8.775384);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(12,10.38829);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(13,8.997091);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(14,8.599386);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(15,9.609848);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(16,9.241499);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(17,8.19468);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(18,3.911714);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(19,1.564459);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(20,0.4465146);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(21,0.5565635);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(22,0.4515066);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(23,0.1715432);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinContent(24,0.2397567);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(3,1.22615);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(4,1.643481);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(5,1.419582);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(6,1.529929);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(7,1.48165);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(8,1.540488);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(9,1.386259);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(10,1.444059);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(11,1.263131);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(12,1.345897);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(13,1.153967);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(14,1.148533);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(15,1.192928);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(16,1.210908);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(17,1.174171);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(18,0.7757458);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(19,0.5048456);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(20,0.2894001);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(21,0.2272681);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(22,0.2882582);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(23,0.1212993);
   VbbHcc_algo_Z_dR_all_stack_6->SetBinError(24,0.2397567);
   VbbHcc_algo_Z_dR_all_stack_6->SetEntries(1494);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_7 = new TH1D("VbbHcc_algo_Z_dR_all_stack_7","",50,0,10);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(3,37.29188);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(4,66.50234);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(5,67.87833);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(6,72.46056);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(7,78.7463);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(8,78.18239);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(9,60.39764);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(10,44.64684);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(11,36.02177);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(12,33.84782);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(13,22.80931);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(14,20.7459);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(15,19.07323);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(16,12.91916);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(17,5.669675);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(18,2.460855);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(19,1.78484);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(20,0.9646172);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(21,0.1331549);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(22,0.7180997);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(23,0.2567259);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinContent(24,0.1409904);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(3,2.051705);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(4,2.686528);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(5,2.834815);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(6,2.7395);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(7,2.971887);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(8,2.934984);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(9,2.554389);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(10,2.244955);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(11,2.038897);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(12,1.973043);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(13,1.59036);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(14,1.569824);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(15,1.507034);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(16,1.214735);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(17,0.8158628);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(18,0.5533767);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(19,0.4173611);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(20,0.3018315);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(21,0.09415476);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(22,0.2233071);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(23,0.1283886);
   VbbHcc_algo_Z_dR_all_stack_7->SetBinError(24,0.1409904);
   VbbHcc_algo_Z_dR_all_stack_7->SetEntries(7384);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_8 = new TH1D("VbbHcc_algo_Z_dR_all_stack_8","",50,0,10);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(3,32.5467);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(4,53.22567);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(5,63.99906);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(6,79.07284);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(7,74.29528);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(8,63.84508);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(9,59.94877);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(10,50.80325);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(11,38.83358);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(12,34.20844);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(13,32.79072);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(14,25.16927);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(15,14.92344);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(16,14.14198);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(17,5.632352);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(18,2.353608);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(19,1.959583);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(20,0.9494827);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(21,0.36775);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(23,0.2105156);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinContent(24,0.3697924);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(3,2.576656);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(4,3.295049);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(5,3.616962);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(6,4.023514);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(7,3.892014);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(8,3.621807);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(9,3.489268);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(10,3.198612);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(11,2.803358);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(12,2.628902);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(13,2.556182);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(14,2.266315);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(15,1.72695);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(16,1.700328);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(17,1.076063);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(18,0.6619407);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(19,0.6218423);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(20,0.4282428);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(21,0.2600386);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(23,0.2105156);
   VbbHcc_algo_Z_dR_all_stack_8->SetBinError(24,0.2614827);
   VbbHcc_algo_Z_dR_all_stack_8->SetEntries(3300);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_9 = new TH1D("VbbHcc_algo_Z_dR_all_stack_9","",50,0,10);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(2,0.001547651);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(3,6.726676);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(4,15.09808);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(5,18.87896);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(6,21.50425);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(7,21.37444);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(8,19.96359);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(9,17.96763);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(10,14.35788);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(11,11.27771);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(12,8.491191);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(13,6.35408);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(14,5.497398);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(15,4.341308);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(16,3.738432);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(17,1.255968);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(18,0.4315982);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(19,0.1725916);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(20,0.07504722);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(21,0.06041241);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(22,0.02964695);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(23,0.01445724);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(24,0.01227308);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinContent(26,0.00487909);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(2,0.001547651);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(3,0.1073826);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(4,0.1606993);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(5,0.1804221);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(6,0.1918511);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(7,0.191798);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(8,0.1850618);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(9,0.1749539);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(10,0.1564859);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(11,0.1381393);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(12,0.1197141);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(13,0.1040913);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(14,0.09583928);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(15,0.08499776);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(16,0.07841799);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(17,0.04593994);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(18,0.02681194);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(19,0.01658981);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(20,0.01080072);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(21,0.00977798);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(22,0.007849845);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(23,0.005195722);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(24,0.004427217);
   VbbHcc_algo_Z_dR_all_stack_9->SetBinError(26,0.002827259);
   VbbHcc_algo_Z_dR_all_stack_9->SetEntries(116514);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_10 = new TH1D("VbbHcc_algo_Z_dR_all_stack_10","",50,0,10);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(2,0.007686712);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(3,1.786502);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(4,3.796836);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(5,5.378643);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(6,6.484934);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(7,6.733595);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(8,5.844031);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(9,4.611675);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(10,3.155981);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(11,2.265022);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(12,1.71941);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(13,1.356096);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(14,1.161385);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(15,0.9833165);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(16,0.8079508);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(17,0.2945004);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(18,0.1551935);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(19,0.05332229);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(20,0.03652089);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(21,0.01903351);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(22,0.009466698);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(23,0.003621733);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(24,0.002288474);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinContent(25,0.002513185);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(2,0.001818652);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(3,0.02685583);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(4,0.03918446);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(5,0.04675801);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(6,0.05132851);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(7,0.05238433);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(8,0.04874607);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(9,0.04327944);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(10,0.03583682);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(11,0.0302733);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(12,0.02630646);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(13,0.02337768);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(14,0.02161987);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(15,0.01986613);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(16,0.01807893);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(17,0.01084771);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(18,0.007866408);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(19,0.004620905);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(20,0.003740787);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(21,0.002758943);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(22,0.001942785);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(23,0.001210489);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(24,0.000936627);
   VbbHcc_algo_Z_dR_all_stack_10->SetBinError(25,0.00103103);
   VbbHcc_algo_Z_dR_all_stack_10->SetEntries(117744);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_11 = new TH1D("VbbHcc_algo_Z_dR_all_stack_11","",50,0,10);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(3,0.2660605);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(4,0.3208594);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(5,0.6901833);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(6,0.833258);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(7,0.760974);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(8,0.6760895);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(9,0.5033073);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(10,0.4096934);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(11,0.2777913);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(12,0.1631982);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(13,0.1562915);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(14,0.1137367);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(15,0.1118594);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(16,0.06948439);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(17,0.02333844);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(18,0.01461976);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(20,0.004414845);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinContent(21,0.001472708);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(3,0.02091893);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(4,0.02344039);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(5,0.03439017);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(6,0.03754848);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(7,0.03572468);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(8,0.0339304);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(9,0.02944808);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(10,0.02696383);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(11,0.02165989);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(12,0.01659605);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(13,0.01608998);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(14,0.01376026);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(15,0.01340506);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(16,0.01044981);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(17,0.006046711);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(18,0.004978747);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(20,0.002551557);
   VbbHcc_algo_Z_dR_all_stack_11->SetBinError(21,0.001472708);
   VbbHcc_algo_Z_dR_all_stack_11->SetEntries(3789);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_12 = new TH1D("VbbHcc_algo_Z_dR_all_stack_12","",50,0,10);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(3,1019.973);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(4,2190.147);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(5,5329.689);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(6,6522.942);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(7,4976.2);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(8,3174.507);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(9,1993.263);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(10,1399.37);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(11,815.6664);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(12,788.8624);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(13,497.1198);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(14,494.4903);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(15,403.9205);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(16,371.1187);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(17,134.9375);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(18,88.23809);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(19,40.77903);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(20,23.02414);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(21,21.7533);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(22,14.53939);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinContent(23,7.990558);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(3,67.24214);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(4,99.80395);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(5,156.393);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(6,172.6178);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(7,151.4605);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(8,119.5446);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(9,94.05);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(10,80.64248);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(11,60.28634);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(12,59.72353);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(13,47.55018);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(14,46.66822);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(15,42.91361);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(16,41.33936);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(17,24.10995);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(18,20.08718);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(19,13.5657);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(20,9.884094);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(21,9.915649);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(22,8.494152);
   VbbHcc_algo_Z_dR_all_stack_12->SetBinError(23,5.627513);
   VbbHcc_algo_Z_dR_all_stack_12->SetEntries(7489);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_all__39 = new TH1D("VbbHcc_algo_Z_dR_all__39","",50,0,10);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(2,123);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(3,106717);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(4,103612);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(5,69090);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(6,59803);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(7,54873);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(8,50153);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(9,46260);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(10,43135);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(11,39174);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(12,36116);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(13,33285);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(14,31243);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(15,29794);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(16,27203);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(17,16610);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(18,10777);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(19,7031);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(20,4293);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(21,2919);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(22,1578);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(23,836);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(24,436);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(25,210);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(26,106);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(27,33);
   VbbHcc_algo_Z_dR_all__39->SetBinContent(28,5);
   VbbHcc_algo_Z_dR_all__39->SetEntries(775415);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all__39->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all__39->SetLineWidth(2);
   VbbHcc_algo_Z_dR_all__39->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_all__39->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_all__39->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_all__39->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all__39->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all__39->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all__39->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all__39->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all__39->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all__39->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all__39->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_all__39->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all__39->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all__39->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_all__39->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_all__39->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all__39->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_all_fx1039[50] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_all_fy1039[50] = {
   0,
   11.47405,
   639498.9,
   951089.7,
   765257.6,
   682624.8,
   560920.3,
   541121.4,
   476502.9,
   408473.7,
   374757.3,
   335710.3,
   327904.7,
   308019.2,
   304814.3,
   240959.2,
   130377.2,
   83275.75,
   47700.07,
   37883.39,
   25648.47,
   8261.799,
   5545.954,
   3082.834,
   2639.757,
   11.81653,
   3.028982,
   1.212155,
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_all_fex1039[50] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_all_fey1039[50] = {
   0,
   1.805204,
   29136.98,
   35252.51,
   31417.04,
   29511.42,
   26520.87,
   26025.34,
   24247.81,
   22209.95,
   21317.69,
   20121.77,
   20084.28,
   19463.18,
   19687.64,
   17365.61,
   12566.04,
   10221.98,
   7770.277,
   6919.335,
   5763.153,
   3280.526,
   2693.441,
   2134.361,
   1850.72,
   1.874655,
   0.7972791,
   0.5927873,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_Z_dR_all_fx1039,Graph_from_VbbHcc_algo_Z_dR_all_fy1039,Graph_from_VbbHcc_algo_Z_dR_all_fex1039,Graph_from_VbbHcc_algo_Z_dR_all_fey1039);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_all1039 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_all1039","",100,0,11);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1039->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1039->SetMaximum(1084976);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1039->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1039->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1039->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1039->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1039->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1039->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1039->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1039->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1039->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1039->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1039->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1039->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1039->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1039->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_all1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_all1039);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_VbbHcc_all->cd();
  
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
   
   TH1D *data_mc_ratio__40 = new TH1D("data_mc_ratio__40","",50,0,10);
   data_mc_ratio__40->SetBinContent(2,10.71984);
   data_mc_ratio__40->SetBinContent(3,0.166876);
   data_mc_ratio__40->SetBinContent(4,0.1089403);
   data_mc_ratio__40->SetBinContent(5,0.09028332);
   data_mc_ratio__40->SetBinContent(6,0.08760743);
   data_mc_ratio__40->SetBinContent(7,0.09782674);
   data_mc_ratio__40->SetBinContent(8,0.09268346);
   data_mc_ratio__40->SetBinContent(9,0.0970823);
   data_mc_ratio__40->SetBinContent(10,0.1056004);
   data_mc_ratio__40->SetBinContent(11,0.1045316);
   data_mc_ratio__40->SetBinContent(12,0.1075808);
   data_mc_ratio__40->SetBinContent(13,0.1015081);
   data_mc_ratio__40->SetBinContent(14,0.101432);
   data_mc_ratio__40->SetBinContent(15,0.09774475);
   data_mc_ratio__40->SetBinContent(16,0.1128946);
   data_mc_ratio__40->SetBinContent(17,0.1273996);
   data_mc_ratio__40->SetBinContent(18,0.1294134);
   data_mc_ratio__40->SetBinContent(19,0.1474002);
   data_mc_ratio__40->SetBinContent(20,0.1133214);
   data_mc_ratio__40->SetBinContent(21,0.113808);
   data_mc_ratio__40->SetBinContent(22,0.1909996);
   data_mc_ratio__40->SetBinContent(23,0.1507405);
   data_mc_ratio__40->SetBinContent(24,0.1414283);
   data_mc_ratio__40->SetBinContent(25,0.07955278);
   data_mc_ratio__40->SetBinContent(26,8.970487);
   data_mc_ratio__40->SetBinContent(27,10.89475);
   data_mc_ratio__40->SetBinContent(28,4.124886);
   data_mc_ratio__40->SetBinError(2,0.9665755);
   data_mc_ratio__40->SetBinError(3,0.0005108307);
   data_mc_ratio__40->SetBinError(4,0.0003384414);
   data_mc_ratio__40->SetBinError(5,0.0003434788);
   data_mc_ratio__40->SetBinError(6,0.0003582444);
   data_mc_ratio__40->SetBinError(7,0.000417617);
   data_mc_ratio__40->SetBinError(8,0.0004138603);
   data_mc_ratio__40->SetBinError(9,0.0004513747);
   data_mc_ratio__40->SetBinError(10,0.0005084529);
   data_mc_ratio__40->SetBinError(11,0.0005281397);
   data_mc_ratio__40->SetBinError(12,0.0005660895);
   data_mc_ratio__40->SetBinError(13,0.0005563865);
   data_mc_ratio__40->SetBinError(14,0.0005738502);
   data_mc_ratio__40->SetBinError(15,0.0005662771);
   data_mc_ratio__40->SetBinError(16,0.0006844866);
   data_mc_ratio__40->SetBinError(17,0.0009885152);
   data_mc_ratio__40->SetBinError(18,0.001246609);
   data_mc_ratio__40->SetBinError(19,0.001757881);
   data_mc_ratio__40->SetBinError(20,0.001729544);
   data_mc_ratio__40->SetBinError(21,0.002106471);
   data_mc_ratio__40->SetBinError(22,0.004808159);
   data_mc_ratio__40->SetBinError(23,0.00521347);
   data_mc_ratio__40->SetBinError(24,0.006773187);
   data_mc_ratio__40->SetBinError(25,0.005489663);
   data_mc_ratio__40->SetBinError(26,0.8712907);
   data_mc_ratio__40->SetBinError(27,1.896532);
   data_mc_ratio__40->SetBinError(28,1.844705);
   data_mc_ratio__40->SetMinimum(0.4);
   data_mc_ratio__40->SetMaximum(1.6);
   data_mc_ratio__40->SetEntries(53.9758);
   data_mc_ratio__40->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__40->SetLineColor(ci);
   data_mc_ratio__40->SetLineWidth(2);
   data_mc_ratio__40->SetMarkerStyle(20);
   data_mc_ratio__40->SetMarkerSize(1.2);
   data_mc_ratio__40->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__40->GetXaxis()->SetRange(1,50);
   data_mc_ratio__40->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__40->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__40->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__40->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__40->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__40->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__40->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__40->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__40->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__40->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__40->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__40->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__40->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__40->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__40->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__40->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__40->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1040[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1040[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1040[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1040[50] = {
   0,
   0.1573292,
   0.04556221,
   0.03706539,
   0.0410542,
   0.04323228,
   0.047281,
   0.04809521,
   0.05088702,
   0.05437302,
   0.056884,
   0.05993789,
   0.06125036,
   0.06318821,
   0.06458894,
   0.07206866,
   0.09638221,
   0.1227485,
   0.1628987,
   0.1826483,
   0.2246977,
   0.3970716,
   0.4856587,
   0.6923372,
   0.7010947,
   0.1586469,
   0.2632168,
   0.489036,
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
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1040,Graph_from_mc_statistical_error_fy1040,Graph_from_mc_statistical_error_fex1040,Graph_from_mc_statistical_error_fey1040);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1040 = new TH1F("Graph_Graph_from_mc_statistical_error1040","",100,0,11);
   Graph_Graph_from_mc_statistical_error1040->SetMinimum(0.1586864);
   Graph_Graph_from_mc_statistical_error1040->SetMaximum(1.841314);
   Graph_Graph_from_mc_statistical_error1040->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1040->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1040->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1040);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_VbbHcc_all->cd();
   Z_dR_VbbHcc_all->Modified();
   Z_dR_VbbHcc_all->cd();
   Z_dR_VbbHcc_all->SetSelected(Z_dR_VbbHcc_all);
}
