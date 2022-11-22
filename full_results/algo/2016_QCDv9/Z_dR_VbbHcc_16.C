void Z_dR_VbbHcc_16()
{
//=========Macro generated from canvas: Z_dR_VbbHcc_16/Z_dR_VbbHcc_16
//=========  (Tue Nov 22 09:16:00 2022) by ROOT version 6.14/09
   TCanvas *Z_dR_VbbHcc_16 = new TCanvas("Z_dR_VbbHcc_16", "Z_dR_VbbHcc_16",0,0,600,600);
   Z_dR_VbbHcc_16->SetHighLightColor(2);
   Z_dR_VbbHcc_16->Range(0,0,1,1);
   Z_dR_VbbHcc_16->SetFillColor(0);
   Z_dR_VbbHcc_16->SetFillStyle(4000);
   Z_dR_VbbHcc_16->SetBorderMode(0);
   Z_dR_VbbHcc_16->SetBorderSize(2);
   Z_dR_VbbHcc_16->SetFrameFillStyle(1000);
   Z_dR_VbbHcc_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-713.7908,10.52419,713087);
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
   st->SetMaximum(611149.4);
   
   TH1F *st_stack_17 = new TH1F("st_stack_17","",50,0,10);
   st_stack_17->SetMinimum(0.01);
   st_stack_17->SetMaximum(641706.9);
   st_stack_17->SetDirectory(0);
   st_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_17->SetLineColor(ci);
   st_stack_17->GetXaxis()->SetRange(1,50);
   st_stack_17->GetXaxis()->SetLabelFont(42);
   st_stack_17->GetXaxis()->SetLabelSize(0.035);
   st_stack_17->GetXaxis()->SetTitleSize(0.035);
   st_stack_17->GetXaxis()->SetTitleFont(42);
   st_stack_17->GetYaxis()->SetTitle("Events/0.2");
   st_stack_17->GetYaxis()->SetLabelFont(42);
   st_stack_17->GetYaxis()->SetLabelSize(0.05);
   st_stack_17->GetYaxis()->SetTitleSize(0.057);
   st_stack_17->GetYaxis()->SetTitleOffset(1.2);
   st_stack_17->GetYaxis()->SetTitleFont(42);
   st_stack_17->GetZaxis()->SetLabelFont(42);
   st_stack_17->GetZaxis()->SetLabelSize(0.035);
   st_stack_17->GetZaxis()->SetTitleSize(0.035);
   st_stack_17->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_17);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",50,0,10);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,166372.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,268213.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,201427.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,186186.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,141742.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,140321.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,130958.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,99144.49);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,90136.28);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,83581.09);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,80842.86);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,85277.63);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,83657.98);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,60019.97);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,28921.82);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,19549.78);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,12764.67);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,10961.13);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,10673.81);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,1213.32);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,2693.204);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,1509.22);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,1308.656);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,15161.88);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,19213.29);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,16710.51);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,16020.69);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,13900.65);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,13929.84);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,13425.82);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,11641.74);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,11084.45);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,10683.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,10520.81);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,10798.61);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,10756.49);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,9115.009);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,6010.087);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,5067.582);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,4096.348);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,3717.227);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,3792.409);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,1213.32);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,1904.542);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,1509.22);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,1308.656);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(1415);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",50,0,10);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,0.4879892);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,250.773);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,532.6633);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,700.9499);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,861.8275);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,990.7416);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,1062.586);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,1062.539);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,1026.034);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,948.9851);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,861.7928);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,757.3799);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,667.3314);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,606.658);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,513.6524);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,282.2361);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,159.182);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,93.14825);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,60.77089);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,33.32225);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,18.37486);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,7.795924);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,4.468206);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,1.564118);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,0.9282999);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,0.3088098);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.2989785);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,6.157888);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,8.833662);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,9.910384);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,10.84887);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,11.5073);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,11.72084);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,11.82269);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,11.61483);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,11.01771);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,10.57633);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,9.853961);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,9.3119);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,8.95372);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,8.200284);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,6.177325);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,4.4985);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,3.55527);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,2.961511);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,2.124391);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,1.591083);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,1.029408);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,0.7584606);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,0.4640351);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,0.4228468);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,0.2246789);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(198303);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_3 = new TH1D("VbbHcc_algo_Z_dR_stack_3","",50,0,10);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(2,2.282227);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(3,2126.731);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(4,4707.541);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(5,6280.421);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(6,7826.44);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(7,8962.725);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(8,9499.892);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(9,9422.477);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(10,8926.442);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(11,8073.56);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(12,7230.744);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(13,6330.537);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(14,5603.077);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(15,5054.537);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(16,4328.754);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(17,2038.498);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(18,1020.999);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(19,523.0431);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(20,271.7812);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(21,134.2344);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(22,64.20687);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(23,28.35536);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(24,12.09606);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(25,4.135034);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(26,1.564384);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(27,0.347035);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(2,0.379295);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(3,11.62393);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(4,17.27556);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(5,19.96824);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(6,22.28395);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(7,23.82751);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(8,24.50417);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(9,24.37665);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(10,23.68805);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(11,22.47942);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(12,21.21601);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(13,19.7931);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(14,18.56562);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(15,17.60235);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(16,16.25236);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(17,11.1487);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(18,7.860085);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(19,5.621255);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(20,4.021716);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(21,2.82735);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(22,1.94672);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(23,1.279906);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(24,0.8400412);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(25,0.4941879);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(26,0.3048664);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(27,0.1445695);
   VbbHcc_algo_Z_dR_stack_3->SetEntries(1672354);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_4 = new TH1D("VbbHcc_algo_Z_dR_stack_4","",50,0,10);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(2,0.6286815);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(3,148.3995);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(4,633.4714);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(5,859.0199);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(6,606.3172);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(7,328.29);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(8,212.7493);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(9,165.569);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(10,127.7915);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(11,119.9145);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(12,105.5656);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(13,99.57302);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(14,82.34191);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(15,77.88417);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(16,70.63684);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(17,44.49031);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(18,26.99829);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(19,15.65083);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(20,11.44269);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(21,11.27939);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(22,6.073656);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(23,3.256674);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(24,1.485096);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(25,0.3024779);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(26,0.5741751);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(28,0.1374532);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(2,0.4450203);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(3,6.661534);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(4,13.75731);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(5,16.0453);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(6,13.45865);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(7,9.857273);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(8,7.908036);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(9,6.982926);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(10,6.160585);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(11,5.959567);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(12,5.594983);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(13,5.430726);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(14,4.936893);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(15,4.792282);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(16,4.553416);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(17,3.618906);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(18,2.824926);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(19,2.141512);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(20,1.828222);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(21,1.820137);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(22,1.332971);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(23,0.9832205);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(24,0.6644683);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(25,0.3024779);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(26,0.4060034);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(28,0.1374532);
   VbbHcc_algo_Z_dR_stack_4->SetEntries(12883);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_5 = new TH1D("VbbHcc_algo_Z_dR_stack_5","",50,0,10);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(3,235.0716);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(4,247.3553);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(5,158.0585);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(6,119.2135);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(7,105.1354);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(8,104.5872);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(9,77.63692);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(10,80.88944);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(11,53.65575);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(12,79.45157);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(13,60.96082);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(14,65.90702);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(15,56.85715);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(16,40.21529);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(17,30.07443);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(18,22.25159);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(19,15.74492);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(20,14.05396);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(21,8.618861);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(22,4.696542);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(23,2.701494);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(26,1.069257);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(3,16.03462);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(4,16.46243);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(5,13.13162);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(6,11.39136);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(7,10.78111);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(8,10.69277);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(9,9.207395);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(10,9.443206);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(11,7.67073);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(12,9.345996);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(13,8.088792);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(14,8.518524);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(15,7.807034);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(16,6.583692);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(17,5.644955);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(18,4.864227);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(19,4.095907);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(20,3.92585);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(21,3.064486);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(22,2.207712);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(23,1.581211);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(26,1.069257);
   VbbHcc_algo_Z_dR_stack_5->SetEntries(1481);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_6 = new TH1D("VbbHcc_algo_Z_dR_stack_6","",50,0,10);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(3,4.390551);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(4,5.341078);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(5,3.103289);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(6,4.947226);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(7,4.203333);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(8,4.18483);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(9,3.242257);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(10,2.369585);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(11,1.724617);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(12,2.123894);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(13,2.706203);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(14,2.475547);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(15,2.917913);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(16,2.353107);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(17,2.043928);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(18,1.093631);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(19,0.3569488);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(20,0.09515087);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(21,0.2782817);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(22,0.1002693);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(23,0.08577159);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(3,0.6273645);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(4,0.6983545);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(5,0.5339973);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(6,0.6695204);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(7,0.6192116);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(8,0.6160715);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(9,0.5453639);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(10,0.4674465);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(11,0.3966604);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(12,0.4372486);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(13,0.5030265);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(14,0.4769309);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(15,0.5111495);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(16,0.4636917);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(17,0.4279989);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(18,0.3175986);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(19,0.1795182);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(20,0.09515087);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(21,0.1607028);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(22,0.1002693);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(23,0.08577159);
   VbbHcc_algo_Z_dR_stack_6->SetEntries(557);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_7 = new TH1D("VbbHcc_algo_Z_dR_stack_7","",50,0,10);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(3,10.48967);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(4,19.37927);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(5,17.35986);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(6,23.05021);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(7,22.16111);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(8,22.68787);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(9,18.17153);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(10,12.36337);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(11,9.920971);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(12,9.019179);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(13,6.313856);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(14,5.184188);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(15,4.735158);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(16,3.530902);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(17,1.332576);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(18,0.4145635);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(19,0.6316874);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(20,0.3319977);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(21,0.06657747);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(22,0.3070291);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(23,0.1283629);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(3,0.8451943);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(4,1.150613);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(5,1.089254);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(6,1.256822);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(7,1.231426);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(8,1.247409);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(9,1.114792);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(10,0.9177202);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(11,0.8254695);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(12,0.7852833);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(13,0.6553438);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(14,0.5959136);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(15,0.5633196);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(16,0.4911753);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(17,0.2957375);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(18,0.169505);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(19,0.2039784);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(20,0.1485235);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(21,0.06657747);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(22,0.1397166);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(23,0.09078445);
   VbbHcc_algo_Z_dR_stack_7->SetEntries(2794);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_8 = new TH1D("VbbHcc_algo_Z_dR_stack_8","",50,0,10);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(3,8.009079);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(4,14.87971);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(5,17.72684);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(6,22.84636);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(7,20.29787);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(8,16.64302);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(9,16.97217);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(10,14.43462);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(11,11.26712);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(12,9.888355);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(13,10.97877);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(14,5.465925);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(15,4.9968);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(16,4.312844);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(17,1.7068);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(18,0.8772133);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(19,0.7725895);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(20,0.1735375);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(21,0.183875);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(24,0.1848962);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(3,1.22861);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(4,1.701413);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(5,1.848738);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(6,2.100063);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(7,1.973966);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(8,1.789377);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(9,1.818541);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(10,1.658371);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(11,1.463761);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(12,1.380386);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(13,1.450227);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(14,1.035902);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(15,0.9850408);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(16,0.9210471);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(17,0.5739923);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(18,0.3974557);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(19,0.3867064);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(20,0.1735375);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(21,0.183875);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(24,0.1848962);
   VbbHcc_algo_Z_dR_stack_8->SetEntries(966);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_9 = new TH1D("VbbHcc_algo_Z_dR_stack_9","",50,0,10);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(3,2.042446);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(4,4.471218);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(5,5.536371);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(6,6.403651);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(7,6.234976);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(8,5.867397);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(9,5.283627);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(10,4.166563);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(11,3.349559);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(12,2.441568);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(13,1.823038);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(14,1.59199);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(15,1.285884);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(16,1.093652);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(17,0.3771272);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(18,0.1285332);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(19,0.04601926);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(20,0.02051747);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(21,0.01632896);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(22,0.003885388);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(23,0.005312558);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(24,0.004214378);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(26,0.001527858);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(3,0.05630369);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(4,0.08284075);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(5,0.09245584);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(6,0.09917135);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(7,0.09784057);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(8,0.0951859);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(9,0.08976938);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(10,0.07964702);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(11,0.0714006);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(12,0.06068651);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(13,0.05242872);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(14,0.04872424);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(15,0.04390243);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(16,0.04009109);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(17,0.02367632);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(18,0.01371024);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(19,0.008123496);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(20,0.005335928);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(21,0.004779864);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(22,0.003197668);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(23,0.003308522);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(24,0.002434198);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(26,0.001527858);
   VbbHcc_algo_Z_dR_stack_9->SetEntries(37196);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_10 = new TH1D("VbbHcc_algo_Z_dR_stack_10","",50,0,10);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(2,0.002434027);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(3,0.5657027);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(4,1.202283);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(5,1.703168);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(6,2.05348);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(7,2.132219);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(8,1.850535);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(9,1.460305);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(10,0.9993537);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(11,0.7172281);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(12,0.544458);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(13,0.4294129);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(14,0.367757);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(15,0.311371);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(16,0.2558408);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(17,0.09325468);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(18,0.04914263);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(19,0.01688471);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(20,0.01156448);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(21,0.006027035);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(22,0.002997667);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(23,0.001146836);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(24,0.0007246541);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(25,0.0007958099);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(2,0.0009949706);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(3,0.01469262);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(4,0.02143752);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(5,0.02558095);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(6,0.02808144);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(7,0.02865907);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(8,0.02666861);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(9,0.02367785);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(10,0.01960605);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(11,0.01656229);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(12,0.01439207);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(13,0.01278975);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(14,0.01182807);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(15,0.01086861);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(16,0.009890848);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(17,0.005934698);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(18,0.004303652);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(19,0.002528062);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(20,0.002046557);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(21,0.001509397);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(22,0.001062883);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(23,0.0006622496);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(24,0.0005124216);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(25,0.000564069);
   VbbHcc_algo_Z_dR_stack_10->SetEntries(39248);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_11 = new TH1D("VbbHcc_algo_Z_dR_stack_11","",50,0,10);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(3,0.08059909);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(4,0.07898907);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(5,0.1956305);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(6,0.2276901);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(7,0.2177484);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(8,0.1947799);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(9,0.1301793);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(10,0.1082074);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(11,0.0712519);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(12,0.03988305);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(13,0.05303438);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(14,0.03070603);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(15,0.03776072);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(16,0.01810776);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(17,0.004475978);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(18,0.004392742);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(20,0.001519035);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(3,0.01116193);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(4,0.01157927);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(5,0.01766231);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(6,0.01878877);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(7,0.0181966);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(8,0.01752455);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(9,0.01456394);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(10,0.01331579);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(11,0.01052911);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(12,0.007711525);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(13,0.009060481);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(14,0.006949465);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(15,0.007598937);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(16,0.005144614);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(17,0.002584558);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(18,0.002536716);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(20,0.001519035);
   VbbHcc_algo_Z_dR_stack_11->SetEntries(1085);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_12 = new TH1D("VbbHcc_algo_Z_dR_stack_12","",50,0,10);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(3,345.1676);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(4,637.7618);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(5,1485.479);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(6,1807.407);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(7,1307.507);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(8,914.3421);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(9,622.5665);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(10,381.0578);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(11,240.4862);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(12,250.3324);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(13,138.3771);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(14,153.2319);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(15,106.2383);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(16,111.7543);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(17,45.47547);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(18,19.05941);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(19,8.22665);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(20,4.198254);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(21,3.490435);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(22,4.316364);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(23,3.979187);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(3,37.61079);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(4,50.63002);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(5,77.86131);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(6,85.79215);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(7,72.65415);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(8,60.71464);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(9,50.09485);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(10,39.46722);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(11,31.02026);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(12,31.72631);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(13,23.48792);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(14,24.54938);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(15,20.70198);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(16,21.14197);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(17,13.54844);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(18,8.549075);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(19,5.766366);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(20,4.198254);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(21,3.490435);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(22,4.316364);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(23,3.979187);
   VbbHcc_algo_Z_dR_stack_12->SetEntries(2298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR__33 = new TH1D("VbbHcc_algo_Z_dR__33","",50,0,10);
   VbbHcc_algo_Z_dR__33->SetBinContent(2,51);
   VbbHcc_algo_Z_dR__33->SetBinContent(3,42884);
   VbbHcc_algo_Z_dR__33->SetBinContent(4,41997);
   VbbHcc_algo_Z_dR__33->SetBinContent(5,27894);
   VbbHcc_algo_Z_dR__33->SetBinContent(6,24359);
   VbbHcc_algo_Z_dR__33->SetBinContent(7,22211);
   VbbHcc_algo_Z_dR__33->SetBinContent(8,20524);
   VbbHcc_algo_Z_dR__33->SetBinContent(9,18790);
   VbbHcc_algo_Z_dR__33->SetBinContent(10,17534);
   VbbHcc_algo_Z_dR__33->SetBinContent(11,16073);
   VbbHcc_algo_Z_dR__33->SetBinContent(12,14769);
   VbbHcc_algo_Z_dR__33->SetBinContent(13,13636);
   VbbHcc_algo_Z_dR__33->SetBinContent(14,12763);
   VbbHcc_algo_Z_dR__33->SetBinContent(15,12242);
   VbbHcc_algo_Z_dR__33->SetBinContent(16,11175);
   VbbHcc_algo_Z_dR__33->SetBinContent(17,6817);
   VbbHcc_algo_Z_dR__33->SetBinContent(18,4424);
   VbbHcc_algo_Z_dR__33->SetBinContent(19,2893);
   VbbHcc_algo_Z_dR__33->SetBinContent(20,1772);
   VbbHcc_algo_Z_dR__33->SetBinContent(21,1242);
   VbbHcc_algo_Z_dR__33->SetBinContent(22,654);
   VbbHcc_algo_Z_dR__33->SetBinContent(23,346);
   VbbHcc_algo_Z_dR__33->SetBinContent(24,177);
   VbbHcc_algo_Z_dR__33->SetBinContent(25,86);
   VbbHcc_algo_Z_dR__33->SetBinContent(26,47);
   VbbHcc_algo_Z_dR__33->SetBinContent(27,15);
   VbbHcc_algo_Z_dR__33->SetBinContent(28,1);
   VbbHcc_algo_Z_dR__33->SetEntries(315376);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR__33->SetLineColor(ci);
   VbbHcc_algo_Z_dR__33->SetLineWidth(2);
   VbbHcc_algo_Z_dR__33->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR__33->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR__33->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR__33->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__33->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__33->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__33->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__33->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__33->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__33->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__33->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR__33->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__33->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__33->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__33->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__33->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__33->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_fx1033[50] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fy1033[50] = {
   0,
   3.401332,
   169504.1,
   275017.2,
   210957.1,
   197466.9,
   153492.2,
   152167.3,
   142354.8,
   109721.1,
   99599.93,
   92133.04,
   88251.99,
   91864.63,
   89574.44,
   65096.55,
   31368.15,
   20800.84,
   13422.31,
   11324.01,
   10865.31,
   1311.403,
   2739.513,
   1527.459,
   1314.658,
   4.137644,
   0.6558449,
   0.1374532,
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fex1033[50] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fey1033[50] = {
   0,
   0.656732,
   15161.94,
   19213.38,
   16710.72,
   16020.95,
   13900.88,
   13930,
   13425.95,
   11641.84,
   11084.52,
   10683.98,
   10520.86,
   10798.66,
   10756.53,
   9115.055,
   6010.119,
   5067.6,
   4096.36,
   3717.235,
   3792.413,
   1213.333,
   1904.548,
   1509.22,
   1308.656,
   1.256939,
   0.2671721,
   0.1374532,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_Z_dR_fx1033,Graph_from_VbbHcc_algo_Z_dR_fy1033,Graph_from_VbbHcc_algo_Z_dR_fex1033,Graph_from_VbbHcc_algo_Z_dR_fey1033);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR1033 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR1033","",100,0,11);
   Graph_Graph_from_VbbHcc_algo_Z_dR1033->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1033->SetMaximum(323653.7);
   Graph_Graph_from_VbbHcc_algo_Z_dR1033->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR1033->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR1033->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1033->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1033->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1033->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1033->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1033->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1033->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1033->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1033->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1033->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1033->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR1033);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_VbbHcc_16->cd();
  
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
   
   TH1D *data_mc_ratio__34 = new TH1D("data_mc_ratio__34","",50,0,10);
   data_mc_ratio__34->SetBinContent(2,14.99413);
   data_mc_ratio__34->SetBinContent(3,0.2529968);
   data_mc_ratio__34->SetBinContent(4,0.1527068);
   data_mc_ratio__34->SetBinContent(5,0.1322259);
   data_mc_ratio__34->SetBinContent(6,0.1233574);
   data_mc_ratio__34->SetBinContent(7,0.1447045);
   data_mc_ratio__34->SetBinContent(8,0.1348779);
   data_mc_ratio__34->SetBinContent(9,0.1319942);
   data_mc_ratio__34->SetBinContent(10,0.1598051);
   data_mc_ratio__34->SetBinContent(11,0.1613756);
   data_mc_ratio__34->SetBinContent(12,0.1603008);
   data_mc_ratio__34->SetBinContent(13,0.1545121);
   data_mc_ratio__34->SetBinContent(14,0.1389327);
   data_mc_ratio__34->SetBinContent(15,0.1366685);
   data_mc_ratio__34->SetBinContent(16,0.1716681);
   data_mc_ratio__34->SetBinContent(17,0.2173223);
   data_mc_ratio__34->SetBinContent(18,0.2126837);
   data_mc_ratio__34->SetBinContent(19,0.2155367);
   data_mc_ratio__34->SetBinContent(20,0.1564816);
   data_mc_ratio__34->SetBinContent(21,0.1143087);
   data_mc_ratio__34->SetBinContent(22,0.4987027);
   data_mc_ratio__34->SetBinContent(23,0.1262998);
   data_mc_ratio__34->SetBinContent(24,0.1158787);
   data_mc_ratio__34->SetBinContent(25,0.06541624);
   data_mc_ratio__34->SetBinContent(26,11.35912);
   data_mc_ratio__34->SetBinContent(27,22.87126);
   data_mc_ratio__34->SetBinContent(28,7.275204);
   data_mc_ratio__34->SetBinError(2,2.099598);
   data_mc_ratio__34->SetBinError(3,0.001221708);
   data_mc_ratio__34->SetBinError(4,0.0007451594);
   data_mc_ratio__34->SetBinError(5,0.0007917009);
   data_mc_ratio__34->SetBinError(6,0.0007903789);
   data_mc_ratio__34->SetBinError(7,0.0009709522);
   data_mc_ratio__34->SetBinError(8,0.0009414771);
   data_mc_ratio__34->SetBinError(9,0.0009629226);
   data_mc_ratio__34->SetBinError(10,0.001206841);
   data_mc_ratio__34->SetBinError(11,0.001272886);
   data_mc_ratio__34->SetBinError(12,0.001319047);
   data_mc_ratio__34->SetBinError(13,0.00132318);
   data_mc_ratio__34->SetBinError(14,0.001229782);
   data_mc_ratio__34->SetBinError(15,0.001235214);
   data_mc_ratio__34->SetBinError(16,0.001623924);
   data_mc_ratio__34->SetBinError(17,0.002632132);
   data_mc_ratio__34->SetBinError(18,0.003197619);
   data_mc_ratio__34->SetBinError(19,0.004007256);
   data_mc_ratio__34->SetBinError(20,0.003717333);
   data_mc_ratio__34->SetBinError(21,0.003243535);
   data_mc_ratio__34->SetBinError(22,0.01950082);
   data_mc_ratio__34->SetBinError(23,0.006789919);
   data_mc_ratio__34->SetBinError(24,0.008709979);
   data_mc_ratio__34->SetBinError(25,0.007054015);
   data_mc_ratio__34->SetBinError(26,1.656898);
   data_mc_ratio__34->SetBinError(27,5.905335);
   data_mc_ratio__34->SetBinError(28,7.275204);
   data_mc_ratio__34->SetMinimum(0.4);
   data_mc_ratio__34->SetMaximum(1.6);
   data_mc_ratio__34->SetEntries(14.2831);
   data_mc_ratio__34->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__34->SetLineColor(ci);
   data_mc_ratio__34->SetLineWidth(2);
   data_mc_ratio__34->SetMarkerStyle(20);
   data_mc_ratio__34->SetMarkerSize(1.2);
   data_mc_ratio__34->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__34->GetXaxis()->SetRange(1,50);
   data_mc_ratio__34->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__34->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__34->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__34->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__34->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__34->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__34->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__34->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__34->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__34->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__34->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__34->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__34->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__34->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__34->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__34->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__34->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1034[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1034[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1034[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1034[50] = {
   0,
   0.1930808,
   0.0894488,
   0.06986245,
   0.07921383,
   0.08113233,
   0.09056409,
   0.09154402,
   0.0943133,
   0.1061039,
   0.1112905,
   0.1159625,
   0.1192139,
   0.1175497,
   0.1200848,
   0.1400236,
   0.1915994,
   0.2436248,
   0.3051905,
   0.3282612,
   0.3490387,
   0.9252179,
   0.6952141,
   0.9880595,
   0.9954344,
   0.3037812,
   0.4073709,
   1,
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
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1034,Graph_from_mc_statistical_error_fy1034,Graph_from_mc_statistical_error_fex1034,Graph_from_mc_statistical_error_fey1034);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1034 = new TH1F("Graph_Graph_from_mc_statistical_error1034","",100,0,11);
   Graph_Graph_from_mc_statistical_error1034->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1034->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1034->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1034->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1034);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_VbbHcc_16->cd();
   Z_dR_VbbHcc_16->Modified();
   Z_dR_VbbHcc_16->cd();
   Z_dR_VbbHcc_16->SetSelected(Z_dR_VbbHcc_16);
}
