void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Aug 10 12:24:18 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(0,0,1,1);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetFillStyle(4000);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetFrameFillStyle(1000);
   Sphericity_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2024.118,1.052419,2022104);
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
   st->SetMaximum(1733039);
   
   TH1F *st_stack_155 = new TH1F("st_stack_155","",25,0,1);
   st_stack_155->SetMinimum(0.01);
   st_stack_155->SetMaximum(1819691);
   st_stack_155->SetDirectory(0);
   st_stack_155->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_155->SetLineColor(ci);
   st_stack_155->GetXaxis()->SetRange(1,25);
   st_stack_155->GetXaxis()->SetLabelFont(42);
   st_stack_155->GetXaxis()->SetLabelSize(0.035);
   st_stack_155->GetXaxis()->SetTitleSize(0.035);
   st_stack_155->GetXaxis()->SetTitleFont(42);
   st_stack_155->GetYaxis()->SetTitle("Events/0.04");
   st_stack_155->GetYaxis()->SetLabelFont(42);
   st_stack_155->GetYaxis()->SetLabelSize(0.05);
   st_stack_155->GetYaxis()->SetTitleSize(0.057);
   st_stack_155->GetYaxis()->SetTitleOffset(1.2);
   st_stack_155->GetYaxis()->SetTitleFont(42);
   st_stack_155->GetZaxis()->SetLabelFont(42);
   st_stack_155->GetZaxis()->SetLabelSize(0.035);
   st_stack_155->GetZaxis()->SetTitleSize(0.035);
   st_stack_155->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_155);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,688016.4);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,612582.3);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,355078.5);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,189795);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,90647.12);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,44855.23);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,13799.48);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,3724.653);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,1703.171);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,918.4954);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,369.5151);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,500.9028);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,138.0959);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,91.34093);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,59.97646);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,78.53044);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,626.9709);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,35.40044);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,6.552051);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,15.74401);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,13115.06);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,12832);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,24664.93);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,6225.189);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,4445.768);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,3489.688);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,2370.135);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,1036.862);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,601.3059);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,445.3091);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,106.8073);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,336.1916);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,55.46487);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,38.88319);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,34.96583);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,36.72199);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,542.1065);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,17.84378);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,6.552051);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,11.3812);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(112239);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,4311.398);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,4049.184);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,2296.644);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,1311.119);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,710.5693);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,341.6884);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,143.1119);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,59.91709);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,29.025);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,13.45651);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,10.39981);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,6.544314);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,4.182404);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,3.195336);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,2.863878);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,2.223201);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,1.636132);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,0.4866238);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.2375921);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.2967841);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(21,0.07007135);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,30.48954);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,29.72127);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,25.73943);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,17.28518);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,12.88763);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,10.27308);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,6.477345);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,3.583994);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,2.430186);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,1.574036);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,1.396311);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,1.141191);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.8688746);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.8154892);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.8459863);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.6663519);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.5191253);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.3595091);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.1200267);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.2967841);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(21,0.07007135);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(153765);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_3 = new TH1D("VbbHcc_algo_Sphericity_stack_3","",25,0,1);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(1,81741.38);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(2,82280.9);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(3,44012.11);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(4,24382.81);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(5,13176.32);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(6,6300.121);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(7,2725.524);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(8,1192.933);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(9,589.4977);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(10,311.9428);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(11,184.726);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(12,112.7487);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(13,71.79355);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(14,50.98524);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(15,32.69968);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(16,26.02529);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(17,15.75296);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(18,11.25559);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(19,6.042739);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(20,3.292168);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(21,1.066174);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(22,0.3051818);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(23,0.08933013);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(1,89.80761);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(2,90.53128);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(3,65.44264);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(4,49.04601);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(5,35.82231);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(6,24.64134);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(7,15.70854);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(8,10.55582);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(9,7.239923);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(10,5.299892);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(11,3.97047);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(12,3.067501);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(13,2.447073);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(14,2.081002);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(15,1.638995);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(16,1.531882);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(17,1.139275);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(18,0.9543674);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(19,0.6991345);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(20,0.5690715);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(21,0.3172521);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(22,0.1626454);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(23,0.08933013);
   VbbHcc_algo_Sphericity_stack_3->SetEntries(3228671);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_4 = new TH1D("VbbHcc_algo_Sphericity_stack_4","",25,0,1);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(1,4224.36);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(2,3882.009);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(3,2210.227);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(4,1340.804);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(5,690.894);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(6,300.4255);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(7,93.71542);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(8,30.72032);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(9,7.886105);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(10,3.65426);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(11,3.661437);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(12,7.464378);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(13,0.8204359);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(14,0.6820568);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(15,0.4307968);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(16,0.3983546);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(17,0.4195517);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(18,1.507483);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(1,55.87508);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(2,55.92404);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(3,41.97312);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(4,31.056);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(5,21.40858);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(6,14.25228);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(7,6.966079);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(8,3.270781);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(9,1.541673);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(10,0.9333638);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(11,0.9878969);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(12,5.917411);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(13,0.3364476);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(14,0.2813121);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(15,0.2158915);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(16,0.23345);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(17,0.3375436);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(18,1.169415);
   VbbHcc_algo_Sphericity_stack_4->SetEntries(55877);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_5 = new TH1D("VbbHcc_algo_Sphericity_stack_5","",25,0,1);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(1,1400.011);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(2,1147.079);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(3,633.8311);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(4,413.3139);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(5,207.9231);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(6,83.28288);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(7,39.76095);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(8,13.87531);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(9,2.481083);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(10,2.410485);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(11,0.5258938);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(12,0.1372148);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(13,0.7853563);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(15,0.4091388);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(16,0.7071319);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(17,0.1817852);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(19,0.2445201);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(1,68.09376);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(2,48.13905);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(3,32.63772);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(4,32.60685);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(5,15.29232);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(6,8.884838);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(7,13.15922);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(8,4.462387);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(9,0.7558492);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(10,0.7397596);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(11,0.3219228);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(12,0.1372148);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(13,0.4387972);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(15,0.224777);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(16,0.4685435);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(17,0.1425271);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(19,0.2445201);
   VbbHcc_algo_Sphericity_stack_5->SetEntries(15424);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_6 = new TH1D("VbbHcc_algo_Sphericity_stack_6","",25,0,1);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(1,12.87341);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(2,12.35784);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(3,7.240596);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(4,7.02285);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(5,1.178599);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(6,1.504893);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(8,0.3439428);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(1,3.280815);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(2,2.608689);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(3,1.974879);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(4,2.163978);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(5,0.6973578);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(6,0.8690189);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(8,0.3439428);
   VbbHcc_algo_Sphericity_stack_6->SetEntries(77);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_7 = new TH1D("VbbHcc_algo_Sphericity_stack_7","",25,0,1);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(1,38.13325);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(2,26.14089);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(3,14.88986);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(4,10.97282);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(5,3.961963);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(6,3.514403);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(7,0.3856298);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(13,0.3805224);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(1,4.002787);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(2,3.352563);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(3,2.431445);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(4,2.168608);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(5,1.264703);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(6,1.141687);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(7,0.3856298);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(13,0.3805224);
   VbbHcc_algo_Sphericity_stack_7->SetEntries(247);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_8 = new TH1D("VbbHcc_algo_Sphericity_stack_8","",25,0,1);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(1,62.73242);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(2,44.94665);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(3,25.99803);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(4,15.84685);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(5,10.85074);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(6,6.311279);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(7,0.9769692);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(8,0.3001798);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(11,0.3042088);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(1,4.551263);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(2,3.772745);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(3,2.848805);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(4,2.336422);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(5,1.885467);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(6,1.432444);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(7,0.5687967);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(8,0.3001798);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(11,0.3042088);
   VbbHcc_algo_Sphericity_stack_8->SetEntries(543);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_9 = new TH1D("VbbHcc_algo_Sphericity_stack_9","",25,0,1);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(1,38.20452);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(2,34.93774);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(3,19.31657);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(4,13.36552);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(5,8.894728);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(6,4.546548);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(7,1.194871);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(8,0.2421234);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(9,0.08882878);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(10,0.02825044);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(11,0.01574477);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(12,0.008265852);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(13,0.001892769);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(14,0.00497437);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(15,0.005514692);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(16,0.003348055);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(17,0.002455652);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(1,0.345879);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(2,0.3277864);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(3,0.2467283);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(4,0.2010441);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(5,0.1591274);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(6,0.154465);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(7,0.06324833);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(8,0.02533107);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(9,0.01540177);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(10,0.009000898);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(11,0.006128044);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(12,0.00482774);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(13,0.001892769);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(14,0.003518307);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(15,0.003911202);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(16,0.003348055);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(17,0.002455652);
   VbbHcc_algo_Sphericity_stack_9->SetEntries(47604);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_10 = new TH1D("VbbHcc_algo_Sphericity_stack_10","",25,0,1);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(1,21.69008);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(2,21.99489);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(3,12.37311);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(4,7.549929);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(5,4.274106);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(6,2.011464);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(7,0.667185);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(8,0.2336959);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(9,0.08093913);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(10,0.05632324);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(11,0.02532653);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(12,0.01500466);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(13,0.01323687);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(14,0.005623911);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(15,0.005331054);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(16,0.002631817);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(17,0.004027191);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(18,0.001855727);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(19,0.001761837);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(1,0.118076);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(2,0.1190331);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(3,0.08926547);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(4,0.06977923);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(5,0.05244948);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(6,0.03597735);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(7,0.02061615);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(8,0.012102);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(9,0.007044248);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(10,0.005844504);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(11,0.003913548);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(12,0.00291891);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(13,0.002800251);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(14,0.00168472);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(15,0.001616657);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(16,0.001143493);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(17,0.001534841);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(18,0.001080629);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(19,0.000885325);
   VbbHcc_algo_Sphericity_stack_10->SetEntries(112076);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_11 = new TH1D("VbbHcc_algo_Sphericity_stack_11","",25,0,1);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(1,0.2313931);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(2,0.2801848);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(3,0.1154427);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(4,0.1328777);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(5,0.06095259);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(6,0.03295657);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(7,0.01128779);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(1,0.02712296);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(2,0.02948771);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(3,0.01899728);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(4,0.02071375);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(5,0.01386397);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(6,0.01002824);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(7,0.005644525);
   VbbHcc_algo_Sphericity_stack_11->SetEntries(313);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_12 = new TH1D("VbbHcc_algo_Sphericity_stack_12","",25,0,1);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(1,0.1332926);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(2,0.1356044);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(3,0.06837977);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(4,0.04796716);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(5,0.02785545);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(6,0.009327937);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(7,0.004754963);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(8,0.002480536);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(9,0.0004049829);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(10,0.0003400733);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(11,0.0004371028);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(12,0.0003400733);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(13,0.0003035629);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(1,0.006959682);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(2,0.007704532);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(3,0.004887342);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(4,0.004160502);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(5,0.004672176);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(6,0.001855263);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(7,0.001333521);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(8,0.0009414042);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(9,0.0004049829);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(10,0.0003400733);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(11,0.0004371028);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(12,0.0003400733);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(13,0.0003035629);
   VbbHcc_algo_Sphericity_stack_12->SetEntries(1270);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Sphericity__425 = new TH1D("VbbHcc_algo_Sphericity__425","",25,0,1);
   VbbHcc_algo_Sphericity__425->SetBinContent(1,709832);
   VbbHcc_algo_Sphericity__425->SetBinContent(2,662437);
   VbbHcc_algo_Sphericity__425->SetBinContent(3,380801);
   VbbHcc_algo_Sphericity__425->SetBinContent(4,210431);
   VbbHcc_algo_Sphericity__425->SetBinContent(5,105666);
   VbbHcc_algo_Sphericity__425->SetBinContent(6,44463);
   VbbHcc_algo_Sphericity__425->SetBinContent(7,15455);
   VbbHcc_algo_Sphericity__425->SetBinContent(8,5579);
   VbbHcc_algo_Sphericity__425->SetBinContent(9,2418);
   VbbHcc_algo_Sphericity__425->SetBinContent(10,1304);
   VbbHcc_algo_Sphericity__425->SetBinContent(11,747);
   VbbHcc_algo_Sphericity__425->SetBinContent(12,493);
   VbbHcc_algo_Sphericity__425->SetBinContent(13,344);
   VbbHcc_algo_Sphericity__425->SetBinContent(14,225);
   VbbHcc_algo_Sphericity__425->SetBinContent(15,181);
   VbbHcc_algo_Sphericity__425->SetBinContent(16,137);
   VbbHcc_algo_Sphericity__425->SetBinContent(17,67);
   VbbHcc_algo_Sphericity__425->SetBinContent(18,60);
   VbbHcc_algo_Sphericity__425->SetBinContent(19,24);
   VbbHcc_algo_Sphericity__425->SetBinContent(20,13);
   VbbHcc_algo_Sphericity__425->SetBinContent(21,8);
   VbbHcc_algo_Sphericity__425->SetBinContent(22,1);
   VbbHcc_algo_Sphericity__425->SetEntries(2140710);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity__425->SetLineColor(ci);
   VbbHcc_algo_Sphericity__425->SetLineWidth(2);
   VbbHcc_algo_Sphericity__425->SetMarkerStyle(20);
   VbbHcc_algo_Sphericity__425->SetMarkerSize(1.2);
   VbbHcc_algo_Sphericity__425->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity__425->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__425->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__425->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__425->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__425->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__425->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__425->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__425->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity__425->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__425->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__425->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__425->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__425->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__425->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Sphericity_fx1309[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fy1309[25] = {
   779867.6,
   704082.2,
   404311.4,
   217298,
   105462.1,
   51898.68,
   16804.83,
   5023.221,
   2332.231,
   1250.044,
   569.1739,
   627.821,
   216.0736,
   146.2142,
   96.3908,
   107.8904,
   644.9678,
   48.65199,
   13.07866,
   19.33296,
   1.136245,
   0.3051818,
   0.08933013,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fex1309[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fey1309[25] = {
   13115.7,
   12832.57,
   24665.09,
   6225.57,
   4446.01,
   3489.832,
   2370.243,
   1036.936,
   601.3569,
   445.345,
   106.8956,
   336.2596,
   55.52968,
   38.94839,
   35.01583,
   36.7637,
   542.1081,
   17.91112,
   6.594873,
   11.39928,
   0.3248983,
   0.1626454,
   0.08933013,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_algo_Sphericity_fx1309,Graph_from_VbbHcc_algo_Sphericity_fy1309,Graph_from_VbbHcc_algo_Sphericity_fex1309,Graph_from_VbbHcc_algo_Sphericity_fey1309);
   gre->SetName("Graph_from_VbbHcc_algo_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Sphericity1309 = new TH1F("Graph_Graph_from_VbbHcc_algo_Sphericity1309","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->SetMaximum(872281.6);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Sphericity1309);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Sphericity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__426 = new TH1D("data_mc_ratio__426","",25,0,1);
   data_mc_ratio__426->SetBinContent(1,0.9101955);
   data_mc_ratio__426->SetBinContent(2,0.9408517);
   data_mc_ratio__426->SetBinContent(3,0.9418508);
   data_mc_ratio__426->SetBinContent(4,0.9683983);
   data_mc_ratio__426->SetBinContent(5,1.001934);
   data_mc_ratio__426->SetBinContent(6,0.856727);
   data_mc_ratio__426->SetBinContent(7,0.9196759);
   data_mc_ratio__426->SetBinContent(8,1.110642);
   data_mc_ratio__426->SetBinContent(9,1.036775);
   data_mc_ratio__426->SetBinContent(10,1.043163);
   data_mc_ratio__426->SetBinContent(11,1.312428);
   data_mc_ratio__426->SetBinContent(12,0.7852557);
   data_mc_ratio__426->SetBinContent(13,1.59205);
   data_mc_ratio__426->SetBinContent(14,1.538839);
   data_mc_ratio__426->SetBinContent(15,1.877773);
   data_mc_ratio__426->SetBinContent(16,1.269807);
   data_mc_ratio__426->SetBinContent(17,0.1038811);
   data_mc_ratio__426->SetBinContent(18,1.233249);
   data_mc_ratio__426->SetBinContent(19,1.83505);
   data_mc_ratio__426->SetBinContent(20,0.6724269);
   data_mc_ratio__426->SetBinContent(21,7.040732);
   data_mc_ratio__426->SetBinContent(22,3.276736);
   data_mc_ratio__426->SetBinError(1,0.001080331);
   data_mc_ratio__426->SetBinError(2,0.001155976);
   data_mc_ratio__426->SetBinError(3,0.001526276);
   data_mc_ratio__426->SetBinError(4,0.002111053);
   data_mc_ratio__426->SetBinError(5,0.003082274);
   data_mc_ratio__426->SetBinError(6,0.004062965);
   data_mc_ratio__426->SetBinError(7,0.007397761);
   data_mc_ratio__426->SetBinError(8,0.01486948);
   data_mc_ratio__426->SetBinError(9,0.02108417);
   data_mc_ratio__426->SetBinError(10,0.02888773);
   data_mc_ratio__426->SetBinError(11,0.04801924);
   data_mc_ratio__426->SetBinError(12,0.03536614);
   data_mc_ratio__426->SetBinError(13,0.08583758);
   data_mc_ratio__426->SetBinError(14,0.1025892);
   data_mc_ratio__426->SetBinError(15,0.1395737);
   data_mc_ratio__426->SetBinError(16,0.108487);
   data_mc_ratio__426->SetBinError(17,0.0126911);
   data_mc_ratio__426->SetBinError(18,0.1592117);
   data_mc_ratio__426->SetBinError(19,0.374578);
   data_mc_ratio__426->SetBinError(20,0.1864977);
   data_mc_ratio__426->SetBinError(21,2.489275);
   data_mc_ratio__426->SetBinError(22,3.276736);
   data_mc_ratio__426->SetMinimum(0.4);
   data_mc_ratio__426->SetMaximum(1.6);
   data_mc_ratio__426->SetEntries(38.51845);
   data_mc_ratio__426->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__426->SetLineColor(ci);
   data_mc_ratio__426->SetLineWidth(2);
   data_mc_ratio__426->SetMarkerStyle(20);
   data_mc_ratio__426->SetMarkerSize(1.2);
   data_mc_ratio__426->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__426->GetXaxis()->SetRange(1,25);
   data_mc_ratio__426->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__426->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__426->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__426->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__426->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__426->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__426->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__426->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__426->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__426->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__426->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__426->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__426->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__426->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__426->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__426->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__426->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1310[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1310[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1310[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1310[25] = {
   0.01681786,
   0.01822595,
   0.06100519,
   0.02864992,
   0.04215743,
   0.06724316,
   0.1410453,
   0.2064286,
   0.2578461,
   0.3562634,
   0.1878084,
   0.5355979,
   0.2569943,
   0.2663791,
   0.3632694,
   0.3407504,
   0.8405196,
   0.3681477,
   0.5042467,
   0.5896295,
   0.2859402,
   0.532946,
   1,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1310,Graph_from_mc_statistical_error_fy1310,Graph_from_mc_statistical_error_fex1310,Graph_from_mc_statistical_error_fey1310);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1310 = new TH1F("Graph_Graph_from_mc_statistical_error1310","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1310->SetMinimum(9.992007e-17);
   Graph_Graph_from_mc_statistical_error1310->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1310->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1310->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1310->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1310->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1310->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1310->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1310->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1310->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1310->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1310->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1310);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->SetSelected(Sphericity_algo_18);
}
