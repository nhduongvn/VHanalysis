#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_16_logY()
{
//=========Macro generated from canvas: nC_medium_jets_16/nC_medium_jets_16
//=========  (Tue Dec  6 15:26:15 2022) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_16 = new TCanvas("nC_medium_jets_16", "nC_medium_jets_16",0,0,600,600);
   nC_medium_jets_16->SetHighLightColor(2);
   nC_medium_jets_16->Range(-2.683529,-1.611715,11.21633,14.67917);
   nC_medium_jets_16->SetFillColor(0);
   nC_medium_jets_16->SetFillStyle(4000);
   nC_medium_jets_16->SetBorderMode(0);
   nC_medium_jets_16->SetBorderSize(2);
   nC_medium_jets_16->SetLogy();
   nC_medium_jets_16->SetLeftMargin(0.15709);
   nC_medium_jets_16->SetRightMargin(0.1234783);
   nC_medium_jets_16->SetBottomMargin(0.12);
   nC_medium_jets_16->SetFrameFillStyle(1000);
   nC_medium_jets_16->SetFrameBorderMode(0);
   nC_medium_jets_16->SetFrameFillStyle(1000);
   nC_medium_jets_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(14.7296);
   st->SetMaximum(3.428336e+12);
   
   TH1F *st_stack_21 = new TH1F("st_stack_21","",10,-0.5,9.5);
   st_stack_21->SetMinimum(2.203894);
   st_stack_21->SetMaximum(1.122224e+13);
   st_stack_21->SetDirectory(0);
   st_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_21->SetLineColor(ci);
   st_stack_21->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_21->GetXaxis()->SetRange(1,10);
   st_stack_21->GetXaxis()->SetLabelFont(42);
   st_stack_21->GetXaxis()->SetTitleOffset(1);
   st_stack_21->GetXaxis()->SetTitleFont(42);
   st_stack_21->GetYaxis()->SetTitle("Events/1.0");
   st_stack_21->GetYaxis()->SetLabelFont(42);
   st_stack_21->GetYaxis()->SetTitleSize(0.037);
   st_stack_21->GetYaxis()->SetTitleFont(42);
   st_stack_21->GetZaxis()->SetLabelFont(42);
   st_stack_21->GetZaxis()->SetTitleOffset(1);
   st_stack_21->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_21);
   
   
   TH1D *VbbHcc_jets_nC_medium_stack_1 = new TH1D("VbbHcc_jets_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(1,3.426289e+10);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(2,1.963184e+10);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(3,4.275246e+09);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(4,4.533871e+08);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(5,2.869422e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(6,1383911);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(7,60963.29);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(8,1265.921);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(1,7142430);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(2,5403793);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(3,2518529);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(4,818218.6);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(5,205048.7);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(6,44744.47);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(7,9403.73);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(8,1265.921);
   VbbHcc_jets_nC_medium_stack_1->SetEntries(4.010866e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_2 = new TH1D("VbbHcc_jets_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(1,4851783);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(2,4019010);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(3,1471766);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(4,321359.4);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(5,49094.14);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(6,5882.108);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(7,604.3008);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(8,50.28361);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(9,5.074211);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(10,0.2287562);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(1,695.0041);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(2,677.6911);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(3,444.3448);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(4,225.7477);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(5,94.70752);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(6,34.22952);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(7,11.14024);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(8,3.127001);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(9,0.9924327);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(10,0.103013);
   VbbHcc_jets_nC_medium_stack_2->SetEntries(1.791955e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_jets_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_2,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_3 = new TH1D("VbbHcc_jets_nC_medium_stack_3","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(1,8471641);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(2,1.140734e+07);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(3,6863419);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(4,2436531);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(5,573494.1);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(6,96940.06);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(7,12699.92);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(8,1376.142);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(9,139.0243);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(10,13.57061);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(11,1.22023);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(1,721.5804);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(2,863.9977);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(3,688.7235);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(4,419.1975);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(5,206.3063);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(6,85.46392);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(7,30.99191);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(8,10.19132);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(9,3.249479);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(10,0.999097);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(11,0.2916493);
   VbbHcc_jets_nC_medium_stack_3->SetEntries(4.953882e+08);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_jets_nC_medium_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_3->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_3->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_3,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_4 = new TH1D("VbbHcc_jets_nC_medium_stack_4","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(1,1344977);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(2,1709099);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(3,888991.1);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(4,242721.2);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(5,38704.09);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(6,4076.345);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(7,326.6937);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(8,18.01047);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(9,0.8091034);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(1,647.9465);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(2,731.5849);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(3,527.8687);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(4,275.6326);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(5,109.8133);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(6,35.49768);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(7,10.00208);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(8,2.345765);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(9,0.4716868);
   VbbHcc_jets_nC_medium_stack_4->SetEntries(1.381774e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_jets_nC_medium_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_4->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_4->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_4,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_5 = new TH1D("VbbHcc_jets_nC_medium_stack_5","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(1,2937405);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(2,4204107);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(3,2312458);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(4,634306.4);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(5,99487.94);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(6,10172.11);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(7,796.7496);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(8,54.42284);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(9,2.12478);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(10,1.008374);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(1,1782.48);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(2,2139.623);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(3,1588.488);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(4,831.1928);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(5,328.4011);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(6,104.6479);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(7,29.10653);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(8,7.523623);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(9,1.504629);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(10,1.008374);
   VbbHcc_jets_nC_medium_stack_5->SetEntries(9601782);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_jets_nC_medium_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_5->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_5->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_5,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_6 = new TH1D("VbbHcc_jets_nC_medium_stack_6","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(1,1655554);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(2,905686.5);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(3,237901.7);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(4,37349.7);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(5,3989.274);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(6,326.0991);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(7,26.31041);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(8,1.408977);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(9,0.1925977);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(1,391.9989);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(2,289.784);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(3,148.3284);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(4,58.63368);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(5,19.094);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(6,5.435012);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(7,1.535949);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(8,0.3511989);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(9,0.136497);
   VbbHcc_jets_nC_medium_stack_6->SetEntries(3.111554e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_jets_nC_medium_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_6->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_6->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_6,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_7 = new TH1D("VbbHcc_jets_nC_medium_stack_7","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(1,594303.4);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(2,324205.7);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(3,88872.79);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(4,15172.36);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(5,1742.091);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(6,152.5503);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(7,10.10761);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(8,0.7040603);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(9,0.06347025);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(1,211.2839);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(2,155.8473);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(3,81.46906);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(4,33.59326);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(5,11.34737);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(6,3.340029);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(7,0.8531926);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(8,0.2241892);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(9,0.06347025);
   VbbHcc_jets_nC_medium_stack_7->SetEntries(1.387664e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_jets_nC_medium_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_7->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_7->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_7,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_8 = new TH1D("VbbHcc_jets_nC_medium_stack_8","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(1,263978.8);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(2,139326.3);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(3,40283.98);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(4,6998.945);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(5,798.5938);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(6,63.21677);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(7,5.014268);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(8,0.5225296);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(1,229.2138);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(2,166.273);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(3,89.28419);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(4,37.15246);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(5,12.5285);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(6,3.507812);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(7,0.9811249);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(8,0.3034265);
   VbbHcc_jets_nC_medium_stack_8->SetEntries(2307748);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_jets_nC_medium_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_8->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_8->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_8,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_9 = new TH1D("VbbHcc_jets_nC_medium_stack_9","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(1,5825.999);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(2,5163.159);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(3,2056.687);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(4,468.8505);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(5,67.94997);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(6,7.625529);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(7,0.8075876);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(8,0.07468346);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(9,0.005519625);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(1,3.151689);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(2,2.9363);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(3,1.838229);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(4,0.8705423);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(5,0.3278986);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(6,0.1086179);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(7,0.03514168);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(8,0.01060066);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(9,0.002886559);
   VbbHcc_jets_nC_medium_stack_9->SetEntries(9308026);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_jets_nC_medium_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_9->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_9->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_9,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_10 = new TH1D("VbbHcc_jets_nC_medium_stack_10","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(1,593.2488);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(2,737.3411);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(3,400.4456);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(4,122.2121);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(5,23.26008);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(6,3.140601);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(7,0.3282028);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(8,0.03063706);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(9,0.002071346);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(1,0.4782862);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(2,0.5323712);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(3,0.391616);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(4,0.215868);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(5,0.0938639);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(6,0.03433795);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(7,0.01104836);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(8,0.003380649);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(9,0.0008632216);
   VbbHcc_jets_nC_medium_stack_10->SetEntries(4977633);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_jets_nC_medium_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_10->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_10->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_10,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_11 = new TH1D("VbbHcc_jets_nC_medium_stack_11","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(1,194.7625);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(2,252.0657);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(3,139.5203);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(4,36.19824);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(5,4.534802);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(6,0.2753738);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(7,0.01870339);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(8,0.001465462);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(1,0.5667905);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(2,0.6372643);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(3,0.4706775);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(4,0.2384635);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(5,0.08367796);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(6,0.02047267);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(7,0.0050083);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(8,0.001465462);
   VbbHcc_jets_nC_medium_stack_11->SetEntries(472445);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nC_medium_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_11->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_11->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_11,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_12 = new TH1D("VbbHcc_jets_nC_medium_stack_12","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_12->SetBinContent(1,341329.9);
   VbbHcc_jets_nC_medium_stack_12->SetBinContent(2,705514.9);
   VbbHcc_jets_nC_medium_stack_12->SetBinContent(3,546873.2);
   VbbHcc_jets_nC_medium_stack_12->SetBinContent(4,209036);
   VbbHcc_jets_nC_medium_stack_12->SetBinContent(5,42457.12);
   VbbHcc_jets_nC_medium_stack_12->SetBinContent(6,3905.097);
   VbbHcc_jets_nC_medium_stack_12->SetBinContent(7,144.6864);
   VbbHcc_jets_nC_medium_stack_12->SetBinError(1,1174.223);
   VbbHcc_jets_nC_medium_stack_12->SetBinError(2,1688.648);
   VbbHcc_jets_nC_medium_stack_12->SetBinError(3,1485.228);
   VbbHcc_jets_nC_medium_stack_12->SetBinError(4,916.5965);
   VbbHcc_jets_nC_medium_stack_12->SetBinError(5,412.3651);
   VbbHcc_jets_nC_medium_stack_12->SetBinError(6,124.6204);
   VbbHcc_jets_nC_medium_stack_12->SetBinError(7,23.66712);
   VbbHcc_jets_nC_medium_stack_12->SetEntries(492720);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nC_medium_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_12->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_12->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_12,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_2","Single Top","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_1","QCD","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_16->Modified();
   nC_medium_jets_16->cd();
   nC_medium_jets_16->SetSelected(nC_medium_jets_16);
}
