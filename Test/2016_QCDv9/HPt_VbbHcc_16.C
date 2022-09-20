void HPt_VbbHcc_16()
{
//=========Macro generated from canvas: HPt_VbbHcc_16/HPt_VbbHcc_16
//=========  (Tue Sep 20 12:29:20 2022) by ROOT version 6.14/09
   TCanvas *HPt_VbbHcc_16 = new TCanvas("HPt_VbbHcc_16", "HPt_VbbHcc_16",0,0,600,600);
   HPt_VbbHcc_16->SetHighLightColor(2);
   HPt_VbbHcc_16->Range(0,0,1,1);
   HPt_VbbHcc_16->SetFillColor(0);
   HPt_VbbHcc_16->SetFillStyle(4000);
   HPt_VbbHcc_16->SetBorderMode(0);
   HPt_VbbHcc_16->SetBorderSize(2);
   HPt_VbbHcc_16->SetFrameFillStyle(1000);
   HPt_VbbHcc_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-495.3745,1562.903,494889.1);
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
   st->SetMaximum(424143.5);
   
   TH1F *st_stack_13 = new TH1F("st_stack_13","",40,0,2000);
   st_stack_13->SetMinimum(0.01);
   st_stack_13->SetMaximum(445350.6);
   st_stack_13->SetDirectory(0);
   st_stack_13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_13->SetLineColor(ci);
   st_stack_13->GetXaxis()->SetRange(7,30);
   st_stack_13->GetXaxis()->SetLabelFont(42);
   st_stack_13->GetXaxis()->SetLabelSize(0.035);
   st_stack_13->GetXaxis()->SetTitleSize(0.035);
   st_stack_13->GetXaxis()->SetTitleFont(42);
   st_stack_13->GetYaxis()->SetTitle("Events/50.0");
   st_stack_13->GetYaxis()->SetLabelFont(42);
   st_stack_13->GetYaxis()->SetLabelSize(0.05);
   st_stack_13->GetYaxis()->SetTitleSize(0.057);
   st_stack_13->GetYaxis()->SetTitleOffset(1.2);
   st_stack_13->GetYaxis()->SetTitleFont(42);
   st_stack_13->GetZaxis()->SetLabelFont(42);
   st_stack_13->GetZaxis()->SetLabelSize(0.035);
   st_stack_13->GetZaxis()->SetTitleSize(0.035);
   st_stack_13->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_13);
   
   
   TH1D *VbbHcc_HPt_stack_1 = new TH1D("VbbHcc_HPt_stack_1","",40,0,2000);
   VbbHcc_HPt_stack_1->SetBinContent(1,33852.43);
   VbbHcc_HPt_stack_1->SetBinContent(2,139329.7);
   VbbHcc_HPt_stack_1->SetBinContent(3,169321.6);
   VbbHcc_HPt_stack_1->SetBinContent(4,104936.1);
   VbbHcc_HPt_stack_1->SetBinContent(5,42218.95);
   VbbHcc_HPt_stack_1->SetBinContent(6,17581.32);
   VbbHcc_HPt_stack_1->SetBinContent(7,7654.511);
   VbbHcc_HPt_stack_1->SetBinContent(8,4011.757);
   VbbHcc_HPt_stack_1->SetBinContent(9,2001.659);
   VbbHcc_HPt_stack_1->SetBinContent(10,1068.872);
   VbbHcc_HPt_stack_1->SetBinContent(11,624.9434);
   VbbHcc_HPt_stack_1->SetBinContent(12,428.9556);
   VbbHcc_HPt_stack_1->SetBinContent(13,216.6028);
   VbbHcc_HPt_stack_1->SetBinContent(14,121.1145);
   VbbHcc_HPt_stack_1->SetBinContent(15,86.84888);
   VbbHcc_HPt_stack_1->SetBinContent(16,55.99328);
   VbbHcc_HPt_stack_1->SetBinContent(17,36.4918);
   VbbHcc_HPt_stack_1->SetBinContent(18,23.68187);
   VbbHcc_HPt_stack_1->SetBinContent(19,19.20241);
   VbbHcc_HPt_stack_1->SetBinContent(20,14.73653);
   VbbHcc_HPt_stack_1->SetBinContent(21,5.934881);
   VbbHcc_HPt_stack_1->SetBinContent(22,5.247556);
   VbbHcc_HPt_stack_1->SetBinContent(23,3.881459);
   VbbHcc_HPt_stack_1->SetBinContent(24,2.199498);
   VbbHcc_HPt_stack_1->SetBinContent(25,2.209126);
   VbbHcc_HPt_stack_1->SetBinContent(26,0.583677);
   VbbHcc_HPt_stack_1->SetBinContent(27,0.7758773);
   VbbHcc_HPt_stack_1->SetBinContent(28,0.7800984);
   VbbHcc_HPt_stack_1->SetBinContent(30,0.6186597);
   VbbHcc_HPt_stack_1->SetBinContent(31,0.219667);
   VbbHcc_HPt_stack_1->SetBinContent(33,0.1818683);
   VbbHcc_HPt_stack_1->SetBinError(1,2881.808);
   VbbHcc_HPt_stack_1->SetBinError(2,6000.784);
   VbbHcc_HPt_stack_1->SetBinError(3,6526.958);
   VbbHcc_HPt_stack_1->SetBinError(4,4786.148);
   VbbHcc_HPt_stack_1->SetBinError(5,2355.911);
   VbbHcc_HPt_stack_1->SetBinError(6,903.9876);
   VbbHcc_HPt_stack_1->SetBinError(7,305.1119);
   VbbHcc_HPt_stack_1->SetBinError(8,172.4919);
   VbbHcc_HPt_stack_1->SetBinError(9,104.1714);
   VbbHcc_HPt_stack_1->SetBinError(10,67.34966);
   VbbHcc_HPt_stack_1->SetBinError(11,44.95825);
   VbbHcc_HPt_stack_1->SetBinError(12,35.38841);
   VbbHcc_HPt_stack_1->SetBinError(13,22.38768);
   VbbHcc_HPt_stack_1->SetBinError(14,14.56415);
   VbbHcc_HPt_stack_1->SetBinError(15,9.844192);
   VbbHcc_HPt_stack_1->SetBinError(16,7.335616);
   VbbHcc_HPt_stack_1->SetBinError(17,3.880069);
   VbbHcc_HPt_stack_1->SetBinError(18,2.934887);
   VbbHcc_HPt_stack_1->SetBinError(19,2.669748);
   VbbHcc_HPt_stack_1->SetBinError(20,2.201102);
   VbbHcc_HPt_stack_1->SetBinError(21,1.13119);
   VbbHcc_HPt_stack_1->SetBinError(22,1.097858);
   VbbHcc_HPt_stack_1->SetBinError(23,0.8918863);
   VbbHcc_HPt_stack_1->SetBinError(24,0.7420772);
   VbbHcc_HPt_stack_1->SetBinError(25,0.6668926);
   VbbHcc_HPt_stack_1->SetBinError(26,0.3369885);
   VbbHcc_HPt_stack_1->SetBinError(27,0.3879477);
   VbbHcc_HPt_stack_1->SetBinError(28,0.3900534);
   VbbHcc_HPt_stack_1->SetBinError(30,0.3573753);
   VbbHcc_HPt_stack_1->SetBinError(31,0.219667);
   VbbHcc_HPt_stack_1->SetBinError(33,0.1818683);
   VbbHcc_HPt_stack_1->SetEntries(15068);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_HPt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_1->SetLineColor(ci);
   VbbHcc_HPt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_1,"");
   
   TH1D *VbbHcc_HPt_stack_2 = new TH1D("VbbHcc_HPt_stack_2","",40,0,2000);
   VbbHcc_HPt_stack_2->SetBinContent(1,395.724);
   VbbHcc_HPt_stack_2->SetBinContent(2,1250.217);
   VbbHcc_HPt_stack_2->SetBinContent(3,1099.082);
   VbbHcc_HPt_stack_2->SetBinContent(4,570.1615);
   VbbHcc_HPt_stack_2->SetBinContent(5,278.0129);
   VbbHcc_HPt_stack_2->SetBinContent(6,149.5876);
   VbbHcc_HPt_stack_2->SetBinContent(7,91.80144);
   VbbHcc_HPt_stack_2->SetBinContent(8,59.09991);
   VbbHcc_HPt_stack_2->SetBinContent(9,38.77307);
   VbbHcc_HPt_stack_2->SetBinContent(10,21.44831);
   VbbHcc_HPt_stack_2->SetBinContent(11,10.56175);
   VbbHcc_HPt_stack_2->SetBinContent(12,10.18264);
   VbbHcc_HPt_stack_2->SetBinContent(13,6.475426);
   VbbHcc_HPt_stack_2->SetBinContent(14,4.947238);
   VbbHcc_HPt_stack_2->SetBinContent(15,2.408013);
   VbbHcc_HPt_stack_2->SetBinContent(16,0.1373953);
   VbbHcc_HPt_stack_2->SetBinContent(17,1.228527);
   VbbHcc_HPt_stack_2->SetBinContent(18,0.4661272);
   VbbHcc_HPt_stack_2->SetBinContent(19,0.09640947);
   VbbHcc_HPt_stack_2->SetBinContent(20,0.04628257);
   VbbHcc_HPt_stack_2->SetBinContent(21,0.569626);
   VbbHcc_HPt_stack_2->SetBinContent(22,1.069579);
   VbbHcc_HPt_stack_2->SetBinContent(23,0.04474588);
   VbbHcc_HPt_stack_2->SetBinContent(24,0.3241234);
   VbbHcc_HPt_stack_2->SetBinContent(26,0.2533381);
   VbbHcc_HPt_stack_2->SetBinContent(29,0.04574467);
   VbbHcc_HPt_stack_2->SetBinError(1,8.297136);
   VbbHcc_HPt_stack_2->SetBinError(2,14.53591);
   VbbHcc_HPt_stack_2->SetBinError(3,13.87453);
   VbbHcc_HPt_stack_2->SetBinError(4,10.20763);
   VbbHcc_HPt_stack_2->SetBinError(5,7.224869);
   VbbHcc_HPt_stack_2->SetBinError(6,5.522477);
   VbbHcc_HPt_stack_2->SetBinError(7,4.406735);
   VbbHcc_HPt_stack_2->SetBinError(8,3.580177);
   VbbHcc_HPt_stack_2->SetBinError(9,2.99544);
   VbbHcc_HPt_stack_2->SetBinError(10,2.222361);
   VbbHcc_HPt_stack_2->SetBinError(11,1.579761);
   VbbHcc_HPt_stack_2->SetBinError(12,1.555714);
   VbbHcc_HPt_stack_2->SetBinError(13,1.212992);
   VbbHcc_HPt_stack_2->SetBinError(14,1.097478);
   VbbHcc_HPt_stack_2->SetBinError(15,0.7126629);
   VbbHcc_HPt_stack_2->SetBinError(16,0.4115651);
   VbbHcc_HPt_stack_2->SetBinError(17,0.5835625);
   VbbHcc_HPt_stack_2->SetBinError(18,0.2896304);
   VbbHcc_HPt_stack_2->SetBinError(19,0.06817333);
   VbbHcc_HPt_stack_2->SetBinError(20,0.04628257);
   VbbHcc_HPt_stack_2->SetBinError(21,0.4028087);
   VbbHcc_HPt_stack_2->SetBinError(22,0.5420459);
   VbbHcc_HPt_stack_2->SetBinError(23,0.04474588);
   VbbHcc_HPt_stack_2->SetBinError(24,0.3241234);
   VbbHcc_HPt_stack_2->SetBinError(26,0.2533381);
   VbbHcc_HPt_stack_2->SetBinError(29,0.04574467);
   VbbHcc_HPt_stack_2->SetEntries(54400);

   ci = TColor::GetColor("#660066");
   VbbHcc_HPt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_2->SetLineColor(ci);
   VbbHcc_HPt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_2,"");
   
   TH1D *VbbHcc_HPt_stack_3 = new TH1D("VbbHcc_HPt_stack_3","",40,0,2000);
   VbbHcc_HPt_stack_3->SetBinContent(1,8182.707);
   VbbHcc_HPt_stack_3->SetBinContent(2,23418.66);
   VbbHcc_HPt_stack_3->SetBinContent(3,19282.31);
   VbbHcc_HPt_stack_3->SetBinContent(4,8051.91);
   VbbHcc_HPt_stack_3->SetBinContent(5,3606.31);
   VbbHcc_HPt_stack_3->SetBinContent(6,1818.114);
   VbbHcc_HPt_stack_3->SetBinContent(7,965.9174);
   VbbHcc_HPt_stack_3->SetBinContent(8,561.2644);
   VbbHcc_HPt_stack_3->SetBinContent(9,320.933);
   VbbHcc_HPt_stack_3->SetBinContent(10,189.1289);
   VbbHcc_HPt_stack_3->SetBinContent(11,118.5137);
   VbbHcc_HPt_stack_3->SetBinContent(12,76.84241);
   VbbHcc_HPt_stack_3->SetBinContent(13,47.84972);
   VbbHcc_HPt_stack_3->SetBinContent(14,32.43963);
   VbbHcc_HPt_stack_3->SetBinContent(15,19.25586);
   VbbHcc_HPt_stack_3->SetBinContent(16,10.8883);
   VbbHcc_HPt_stack_3->SetBinContent(17,8.294275);
   VbbHcc_HPt_stack_3->SetBinContent(18,5.460464);
   VbbHcc_HPt_stack_3->SetBinContent(19,2.995226);
   VbbHcc_HPt_stack_3->SetBinContent(20,1.807777);
   VbbHcc_HPt_stack_3->SetBinContent(21,2.194313);
   VbbHcc_HPt_stack_3->SetBinContent(22,1.04833);
   VbbHcc_HPt_stack_3->SetBinContent(23,0.7598256);
   VbbHcc_HPt_stack_3->SetBinContent(24,0.628889);
   VbbHcc_HPt_stack_3->SetBinContent(25,0.2748793);
   VbbHcc_HPt_stack_3->SetBinContent(26,0.07928941);
   VbbHcc_HPt_stack_3->SetBinContent(27,0.2027191);
   VbbHcc_HPt_stack_3->SetBinContent(28,0.08006999);
   VbbHcc_HPt_stack_3->SetBinContent(32,0.1415531);
   VbbHcc_HPt_stack_3->SetBinContent(34,0.07048946);
   VbbHcc_HPt_stack_3->SetBinError(1,23.43002);
   VbbHcc_HPt_stack_3->SetBinError(2,39.76086);
   VbbHcc_HPt_stack_3->SetBinError(3,36.16115);
   VbbHcc_HPt_stack_3->SetBinError(4,23.19887);
   VbbHcc_HPt_stack_3->SetBinError(5,15.46033);
   VbbHcc_HPt_stack_3->SetBinError(6,10.96726);
   VbbHcc_HPt_stack_3->SetBinError(7,8.017348);
   VbbHcc_HPt_stack_3->SetBinError(8,6.12761);
   VbbHcc_HPt_stack_3->SetBinError(9,4.643482);
   VbbHcc_HPt_stack_3->SetBinError(10,3.576996);
   VbbHcc_HPt_stack_3->SetBinError(11,2.836339);
   VbbHcc_HPt_stack_3->SetBinError(12,2.279884);
   VbbHcc_HPt_stack_3->SetBinError(13,1.813923);
   VbbHcc_HPt_stack_3->SetBinError(14,1.496455);
   VbbHcc_HPt_stack_3->SetBinError(15,1.158101);
   VbbHcc_HPt_stack_3->SetBinError(16,0.8844812);
   VbbHcc_HPt_stack_3->SetBinError(17,0.7634758);
   VbbHcc_HPt_stack_3->SetBinError(18,0.6123731);
   VbbHcc_HPt_stack_3->SetBinError(19,0.4414937);
   VbbHcc_HPt_stack_3->SetBinError(20,0.3416624);
   VbbHcc_HPt_stack_3->SetBinError(21,0.3881631);
   VbbHcc_HPt_stack_3->SetBinError(22,0.266941);
   VbbHcc_HPt_stack_3->SetBinError(23,0.2502848);
   VbbHcc_HPt_stack_3->SetBinError(24,0.202095);
   VbbHcc_HPt_stack_3->SetBinError(25,0.139315);
   VbbHcc_HPt_stack_3->SetBinError(26,0.07928941);
   VbbHcc_HPt_stack_3->SetBinError(27,0.1176802);
   VbbHcc_HPt_stack_3->SetBinError(28,0.08006999);
   VbbHcc_HPt_stack_3->SetBinError(32,0.1000941);
   VbbHcc_HPt_stack_3->SetBinError(34,0.07048946);
   VbbHcc_HPt_stack_3->SetEntries(1044436);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_HPt_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_3->SetLineColor(ci);
   VbbHcc_HPt_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_3,"");
   
   TH1D *VbbHcc_HPt_stack_4 = new TH1D("VbbHcc_HPt_stack_4","",40,0,2000);
   VbbHcc_HPt_stack_4->SetBinContent(1,195.3614);
   VbbHcc_HPt_stack_4->SetBinContent(2,667.9483);
   VbbHcc_HPt_stack_4->SetBinContent(3,913.9114);
   VbbHcc_HPt_stack_4->SetBinContent(4,780.8505);
   VbbHcc_HPt_stack_4->SetBinContent(5,479.147);
   VbbHcc_HPt_stack_4->SetBinContent(6,261.8895);
   VbbHcc_HPt_stack_4->SetBinContent(7,137.7937);
   VbbHcc_HPt_stack_4->SetBinContent(8,78.86597);
   VbbHcc_HPt_stack_4->SetBinContent(9,47.99883);
   VbbHcc_HPt_stack_4->SetBinContent(10,24.97982);
   VbbHcc_HPt_stack_4->SetBinContent(11,15.31075);
   VbbHcc_HPt_stack_4->SetBinContent(12,11.12285);
   VbbHcc_HPt_stack_4->SetBinContent(13,6.016842);
   VbbHcc_HPt_stack_4->SetBinContent(14,4.747805);
   VbbHcc_HPt_stack_4->SetBinContent(15,2.347567);
   VbbHcc_HPt_stack_4->SetBinContent(16,1.960429);
   VbbHcc_HPt_stack_4->SetBinContent(17,1.763496);
   VbbHcc_HPt_stack_4->SetBinContent(18,0.7892367);
   VbbHcc_HPt_stack_4->SetBinContent(19,0.5777834);
   VbbHcc_HPt_stack_4->SetBinContent(20,0.6544254);
   VbbHcc_HPt_stack_4->SetBinContent(21,0.2307743);
   VbbHcc_HPt_stack_4->SetBinContent(22,0.3763404);
   VbbHcc_HPt_stack_4->SetBinContent(23,0.1404006);
   VbbHcc_HPt_stack_4->SetBinError(1,7.007717);
   VbbHcc_HPt_stack_4->SetBinError(2,13.04223);
   VbbHcc_HPt_stack_4->SetBinError(3,15.20161);
   VbbHcc_HPt_stack_4->SetBinError(4,13.57764);
   VbbHcc_HPt_stack_4->SetBinError(5,9.616928);
   VbbHcc_HPt_stack_4->SetBinError(6,5.660585);
   VbbHcc_HPt_stack_4->SetBinError(7,3.431594);
   VbbHcc_HPt_stack_4->SetBinError(8,2.444474);
   VbbHcc_HPt_stack_4->SetBinError(9,1.857636);
   VbbHcc_HPt_stack_4->SetBinError(10,1.336272);
   VbbHcc_HPt_stack_4->SetBinError(11,1.038826);
   VbbHcc_HPt_stack_4->SetBinError(12,0.8916341);
   VbbHcc_HPt_stack_4->SetBinError(13,0.6563489);
   VbbHcc_HPt_stack_4->SetBinError(14,0.5825206);
   VbbHcc_HPt_stack_4->SetBinError(15,0.4096195);
   VbbHcc_HPt_stack_4->SetBinError(16,0.3745736);
   VbbHcc_HPt_stack_4->SetBinError(17,0.3534477);
   VbbHcc_HPt_stack_4->SetBinError(18,0.2382059);
   VbbHcc_HPt_stack_4->SetBinError(19,0.2044753);
   VbbHcc_HPt_stack_4->SetBinError(20,0.2189267);
   VbbHcc_HPt_stack_4->SetBinError(21,0.1334686);
   VbbHcc_HPt_stack_4->SetBinError(22,0.1559187);
   VbbHcc_HPt_stack_4->SetBinError(23,0.09927873);
   VbbHcc_HPt_stack_4->SetEntries(25079);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_HPt_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_4->SetLineColor(ci);
   VbbHcc_HPt_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_4,"");
   
   TH1D *VbbHcc_HPt_stack_5 = new TH1D("VbbHcc_HPt_stack_5","",40,0,2000);
   VbbHcc_HPt_stack_5->SetBinContent(1,30.23656);
   VbbHcc_HPt_stack_5->SetBinContent(2,113.2438);
   VbbHcc_HPt_stack_5->SetBinContent(3,177.3007);
   VbbHcc_HPt_stack_5->SetBinContent(4,181.1456);
   VbbHcc_HPt_stack_5->SetBinContent(5,131.2714);
   VbbHcc_HPt_stack_5->SetBinContent(6,75.39672);
   VbbHcc_HPt_stack_5->SetBinContent(7,44.2508);
   VbbHcc_HPt_stack_5->SetBinContent(8,30.85701);
   VbbHcc_HPt_stack_5->SetBinContent(9,17.69793);
   VbbHcc_HPt_stack_5->SetBinContent(10,10.95477);
   VbbHcc_HPt_stack_5->SetBinContent(11,7.32519);
   VbbHcc_HPt_stack_5->SetBinContent(12,5.116957);
   VbbHcc_HPt_stack_5->SetBinContent(13,3.703324);
   VbbHcc_HPt_stack_5->SetBinContent(14,3.135727);
   VbbHcc_HPt_stack_5->SetBinContent(15,1.151977);
   VbbHcc_HPt_stack_5->SetBinContent(16,0.898771);
   VbbHcc_HPt_stack_5->SetBinContent(17,1.141274);
   VbbHcc_HPt_stack_5->SetBinContent(18,0.4555126);
   VbbHcc_HPt_stack_5->SetBinContent(19,0.7454341);
   VbbHcc_HPt_stack_5->SetBinContent(20,0.03600253);
   VbbHcc_HPt_stack_5->SetBinContent(21,0.02438599);
   VbbHcc_HPt_stack_5->SetBinContent(22,0.2752585);
   VbbHcc_HPt_stack_5->SetBinContent(23,0.2375252);
   VbbHcc_HPt_stack_5->SetBinContent(24,0.07968257);
   VbbHcc_HPt_stack_5->SetBinContent(25,0.001670486);
   VbbHcc_HPt_stack_5->SetBinContent(26,0.00140318);
   VbbHcc_HPt_stack_5->SetBinContent(27,0.001025987);
   VbbHcc_HPt_stack_5->SetBinContent(28,0.001198067);
   VbbHcc_HPt_stack_5->SetBinContent(29,0.0006144182);
   VbbHcc_HPt_stack_5->SetBinContent(30,0.0006895993);
   VbbHcc_HPt_stack_5->SetBinContent(31,0.0001993791);
   VbbHcc_HPt_stack_5->SetBinContent(32,0.0002023505);
   VbbHcc_HPt_stack_5->SetBinContent(34,0.0001378118);
   VbbHcc_HPt_stack_5->SetBinContent(36,0.0002061854);
   VbbHcc_HPt_stack_5->SetBinContent(37,7.204299e-05);
   VbbHcc_HPt_stack_5->SetBinContent(38,7.388226e-05);
   VbbHcc_HPt_stack_5->SetBinContent(41,0.0001389973);
   VbbHcc_HPt_stack_5->SetBinError(1,4.491598);
   VbbHcc_HPt_stack_5->SetBinError(2,9.182553);
   VbbHcc_HPt_stack_5->SetBinError(3,11.82891);
   VbbHcc_HPt_stack_5->SetBinError(4,11.4655);
   VbbHcc_HPt_stack_5->SetBinError(5,8.335616);
   VbbHcc_HPt_stack_5->SetBinError(6,4.846845);
   VbbHcc_HPt_stack_5->SetBinError(7,2.434296);
   VbbHcc_HPt_stack_5->SetBinError(8,1.681602);
   VbbHcc_HPt_stack_5->SetBinError(9,1.136279);
   VbbHcc_HPt_stack_5->SetBinError(10,0.8886734);
   VbbHcc_HPt_stack_5->SetBinError(11,0.7245153);
   VbbHcc_HPt_stack_5->SetBinError(12,0.5811936);
   VbbHcc_HPt_stack_5->SetBinError(13,0.5039319);
   VbbHcc_HPt_stack_5->SetBinError(14,0.4569107);
   VbbHcc_HPt_stack_5->SetBinError(15,0.2681052);
   VbbHcc_HPt_stack_5->SetBinError(16,0.2452122);
   VbbHcc_HPt_stack_5->SetBinError(17,0.2781234);
   VbbHcc_HPt_stack_5->SetBinError(18,0.1708722);
   VbbHcc_HPt_stack_5->SetBinError(19,0.2324123);
   VbbHcc_HPt_stack_5->SetBinError(20,0.01728594);
   VbbHcc_HPt_stack_5->SetBinError(21,0.0134024);
   VbbHcc_HPt_stack_5->SetBinError(22,0.1343177);
   VbbHcc_HPt_stack_5->SetBinError(23,0.1315048);
   VbbHcc_HPt_stack_5->SetBinError(24,0.05506147);
   VbbHcc_HPt_stack_5->SetBinError(25,0.0003287998);
   VbbHcc_HPt_stack_5->SetBinError(26,0.0003049597);
   VbbHcc_HPt_stack_5->SetBinError(27,0.0002651382);
   VbbHcc_HPt_stack_5->SetBinError(28,0.0002844335);
   VbbHcc_HPt_stack_5->SetBinError(29,0.000205124);
   VbbHcc_HPt_stack_5->SetBinError(30,0.0002095627);
   VbbHcc_HPt_stack_5->SetBinError(31,0.0001166585);
   VbbHcc_HPt_stack_5->SetBinError(32,0.0001170148);
   VbbHcc_HPt_stack_5->SetBinError(34,9.774523e-05);
   VbbHcc_HPt_stack_5->SetBinError(36,0.0001191263);
   VbbHcc_HPt_stack_5->SetBinError(37,7.204299e-05);
   VbbHcc_HPt_stack_5->SetBinError(38,7.388226e-05);
   VbbHcc_HPt_stack_5->SetBinError(41,9.843176e-05);
   VbbHcc_HPt_stack_5->SetEntries(6309);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_HPt_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_5->SetLineColor(ci);
   VbbHcc_HPt_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_5,"");
   
   TH1D *VbbHcc_HPt_stack_6 = new TH1D("VbbHcc_HPt_stack_6","",40,0,2000);
   VbbHcc_HPt_stack_6->SetBinContent(1,1.382591);
   VbbHcc_HPt_stack_6->SetBinContent(2,3.252716);
   VbbHcc_HPt_stack_6->SetBinContent(3,2.313432);
   VbbHcc_HPt_stack_6->SetBinContent(4,1.445674);
   VbbHcc_HPt_stack_6->SetBinContent(5,0.6634347);
   VbbHcc_HPt_stack_6->SetBinContent(6,0.4954246);
   VbbHcc_HPt_stack_6->SetBinContent(7,0.3670937);
   VbbHcc_HPt_stack_6->SetBinContent(9,0.08871826);
   VbbHcc_HPt_stack_6->SetBinContent(10,0.09409418);
   VbbHcc_HPt_stack_6->SetBinError(1,0.3586366);
   VbbHcc_HPt_stack_6->SetBinError(2,0.5527726);
   VbbHcc_HPt_stack_6->SetBinError(3,0.4610377);
   VbbHcc_HPt_stack_6->SetBinError(4,0.3704512);
   VbbHcc_HPt_stack_6->SetBinError(5,0.2509695);
   VbbHcc_HPt_stack_6->SetBinError(6,0.2218766);
   VbbHcc_HPt_stack_6->SetBinError(7,0.1849453);
   VbbHcc_HPt_stack_6->SetBinError(9,0.08871826);
   VbbHcc_HPt_stack_6->SetBinError(10,0.09409418);
   VbbHcc_HPt_stack_6->SetEntries(110);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_HPt_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_6->SetLineColor(ci);
   VbbHcc_HPt_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_6,"");
   
   TH1D *VbbHcc_HPt_stack_7 = new TH1D("VbbHcc_HPt_stack_7","",40,0,2000);
   VbbHcc_HPt_stack_7->SetBinContent(1,3.067746);
   VbbHcc_HPt_stack_7->SetBinContent(2,8.722123);
   VbbHcc_HPt_stack_7->SetBinContent(3,7.597036);
   VbbHcc_HPt_stack_7->SetBinContent(4,3.802559);
   VbbHcc_HPt_stack_7->SetBinContent(5,2.010866);
   VbbHcc_HPt_stack_7->SetBinContent(6,1.591213);
   VbbHcc_HPt_stack_7->SetBinContent(7,0.6355458);
   VbbHcc_HPt_stack_7->SetBinContent(8,0.6829996);
   VbbHcc_HPt_stack_7->SetBinContent(9,0.2744913);
   VbbHcc_HPt_stack_7->SetBinContent(10,0.06765685);
   VbbHcc_HPt_stack_7->SetBinContent(11,0.06205532);
   VbbHcc_HPt_stack_7->SetBinContent(13,0.1432195);
   VbbHcc_HPt_stack_7->SetBinContent(14,0.1424492);
   VbbHcc_HPt_stack_7->SetBinError(1,0.456043);
   VbbHcc_HPt_stack_7->SetBinError(2,0.771371);
   VbbHcc_HPt_stack_7->SetBinError(3,0.7268996);
   VbbHcc_HPt_stack_7->SetBinError(4,0.510124);
   VbbHcc_HPt_stack_7->SetBinError(5,0.3691108);
   VbbHcc_HPt_stack_7->SetBinError(6,0.3291226);
   VbbHcc_HPt_stack_7->SetBinError(7,0.2129538);
   VbbHcc_HPt_stack_7->SetBinError(8,0.2163462);
   VbbHcc_HPt_stack_7->SetBinError(9,0.1373658);
   VbbHcc_HPt_stack_7->SetBinError(10,0.06765685);
   VbbHcc_HPt_stack_7->SetBinError(11,0.06205532);
   VbbHcc_HPt_stack_7->SetBinError(13,0.1013771);
   VbbHcc_HPt_stack_7->SetBinError(14,0.1007462);
   VbbHcc_HPt_stack_7->SetEntries(424);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_HPt_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_7->SetLineColor(ci);
   VbbHcc_HPt_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_7,"");
   
   TH1D *VbbHcc_HPt_stack_8 = new TH1D("VbbHcc_HPt_stack_8","",40,0,2000);
   VbbHcc_HPt_stack_8->SetBinContent(1,16.93476);
   VbbHcc_HPt_stack_8->SetBinContent(2,64.57779);
   VbbHcc_HPt_stack_8->SetBinContent(3,28.64127);
   VbbHcc_HPt_stack_8->SetBinContent(4,14.17727);
   VbbHcc_HPt_stack_8->SetBinContent(5,7.03018);
   VbbHcc_HPt_stack_8->SetBinContent(6,2.22526);
   VbbHcc_HPt_stack_8->SetBinContent(7,1.936591);
   VbbHcc_HPt_stack_8->SetBinContent(8,1.295084);
   VbbHcc_HPt_stack_8->SetBinContent(10,0.1936011);
   VbbHcc_HPt_stack_8->SetBinContent(17,0.1881969);
   VbbHcc_HPt_stack_8->SetBinError(1,1.81435);
   VbbHcc_HPt_stack_8->SetBinError(2,3.544001);
   VbbHcc_HPt_stack_8->SetBinError(3,2.367849);
   VbbHcc_HPt_stack_8->SetBinError(4,1.658397);
   VbbHcc_HPt_stack_8->SetBinError(5,1.163305);
   VbbHcc_HPt_stack_8->SetBinError(6,0.6718901);
   VbbHcc_HPt_stack_8->SetBinError(7,0.6208392);
   VbbHcc_HPt_stack_8->SetBinError(8,0.4898538);
   VbbHcc_HPt_stack_8->SetBinError(10,0.1936011);
   VbbHcc_HPt_stack_8->SetBinError(17,0.1881969);
   VbbHcc_HPt_stack_8->SetEntries(712);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_HPt_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_8->SetLineColor(ci);
   VbbHcc_HPt_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_8,"");
   
   TH1D *VbbHcc_HPt_stack_9 = new TH1D("VbbHcc_HPt_stack_9","",40,0,2000);
   VbbHcc_HPt_stack_9->SetBinContent(1,8.968316);
   VbbHcc_HPt_stack_9->SetBinContent(2,39.23328);
   VbbHcc_HPt_stack_9->SetBinContent(3,22.28204);
   VbbHcc_HPt_stack_9->SetBinContent(4,11.06391);
   VbbHcc_HPt_stack_9->SetBinContent(5,6.041557);
   VbbHcc_HPt_stack_9->SetBinContent(6,3.469608);
   VbbHcc_HPt_stack_9->SetBinContent(7,1.88067);
   VbbHcc_HPt_stack_9->SetBinContent(8,0.9522661);
   VbbHcc_HPt_stack_9->SetBinContent(9,0.4913321);
   VbbHcc_HPt_stack_9->SetBinContent(10,0.2260126);
   VbbHcc_HPt_stack_9->SetBinContent(11,0.07872115);
   VbbHcc_HPt_stack_9->SetBinContent(12,0.03163596);
   VbbHcc_HPt_stack_9->SetBinContent(13,0.02652919);
   VbbHcc_HPt_stack_9->SetBinContent(14,0.005554032);
   VbbHcc_HPt_stack_9->SetBinContent(15,0.007200579);
   VbbHcc_HPt_stack_9->SetBinContent(16,0.00885279);
   VbbHcc_HPt_stack_9->SetBinContent(17,0.001532314);
   VbbHcc_HPt_stack_9->SetBinContent(18,0.002837666);
   VbbHcc_HPt_stack_9->SetBinContent(21,0.00144258);
   VbbHcc_HPt_stack_9->SetBinError(1,0.1179124);
   VbbHcc_HPt_stack_9->SetBinError(2,0.2476392);
   VbbHcc_HPt_stack_9->SetBinError(3,0.1855847);
   VbbHcc_HPt_stack_9->SetBinError(4,0.1311054);
   VbbHcc_HPt_stack_9->SetBinError(5,0.09663268);
   VbbHcc_HPt_stack_9->SetBinError(6,0.07296339);
   VbbHcc_HPt_stack_9->SetBinError(7,0.05381588);
   VbbHcc_HPt_stack_9->SetBinError(8,0.03861128);
   VbbHcc_HPt_stack_9->SetBinError(9,0.02739855);
   VbbHcc_HPt_stack_9->SetBinError(10,0.01847126);
   VbbHcc_HPt_stack_9->SetBinError(11,0.01071026);
   VbbHcc_HPt_stack_9->SetBinError(12,0.006872754);
   VbbHcc_HPt_stack_9->SetBinError(13,0.006223539);
   VbbHcc_HPt_stack_9->SetBinError(14,0.002785534);
   VbbHcc_HPt_stack_9->SetBinError(15,0.003243221);
   VbbHcc_HPt_stack_9->SetBinError(16,0.003625994);
   VbbHcc_HPt_stack_9->SetBinError(17,0.001532314);
   VbbHcc_HPt_stack_9->SetBinError(18,0.002027816);
   VbbHcc_HPt_stack_9->SetBinError(21,0.00144258);
   VbbHcc_HPt_stack_9->SetEntries(66921);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_HPt_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_9->SetLineColor(ci);
   VbbHcc_HPt_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_9,"");
   
   TH1D *VbbHcc_HPt_stack_10 = new TH1D("VbbHcc_HPt_stack_10","",40,0,2000);
   VbbHcc_HPt_stack_10->SetBinContent(1,2.179463);
   VbbHcc_HPt_stack_10->SetBinContent(2,8.331512);
   VbbHcc_HPt_stack_10->SetBinContent(3,7.712882);
   VbbHcc_HPt_stack_10->SetBinContent(4,4.69624);
   VbbHcc_HPt_stack_10->SetBinContent(5,2.454684);
   VbbHcc_HPt_stack_10->SetBinContent(6,1.216689);
   VbbHcc_HPt_stack_10->SetBinContent(7,0.6289924);
   VbbHcc_HPt_stack_10->SetBinContent(8,0.309415);
   VbbHcc_HPt_stack_10->SetBinContent(9,0.1630819);
   VbbHcc_HPt_stack_10->SetBinContent(10,0.08562143);
   VbbHcc_HPt_stack_10->SetBinContent(11,0.05407788);
   VbbHcc_HPt_stack_10->SetBinContent(12,0.03207642);
   VbbHcc_HPt_stack_10->SetBinContent(13,0.02218991);
   VbbHcc_HPt_stack_10->SetBinContent(14,0.01453972);
   VbbHcc_HPt_stack_10->SetBinContent(15,0.01035327);
   VbbHcc_HPt_stack_10->SetBinContent(16,0.003295628);
   VbbHcc_HPt_stack_10->SetBinContent(17,0.002204623);
   VbbHcc_HPt_stack_10->SetBinContent(18,0.002754006);
   VbbHcc_HPt_stack_10->SetBinContent(19,0.002975712);
   VbbHcc_HPt_stack_10->SetBinContent(20,0.001141535);
   VbbHcc_HPt_stack_10->SetBinContent(21,0.001920611);
   VbbHcc_HPt_stack_10->SetBinContent(22,0.001211489);
   VbbHcc_HPt_stack_10->SetBinContent(23,0.000385282);
   VbbHcc_HPt_stack_10->SetBinContent(24,0.000375936);
   VbbHcc_HPt_stack_10->SetBinContent(26,0.0004324426);
   VbbHcc_HPt_stack_10->SetBinError(1,0.02905105);
   VbbHcc_HPt_stack_10->SetBinError(2,0.05690336);
   VbbHcc_HPt_stack_10->SetBinError(3,0.05474053);
   VbbHcc_HPt_stack_10->SetBinError(4,0.04268695);
   VbbHcc_HPt_stack_10->SetBinError(5,0.03080518);
   VbbHcc_HPt_stack_10->SetBinError(6,0.0216807);
   VbbHcc_HPt_stack_10->SetBinError(7,0.01559367);
   VbbHcc_HPt_stack_10->SetBinError(8,0.01094539);
   VbbHcc_HPt_stack_10->SetBinError(9,0.007929184);
   VbbHcc_HPt_stack_10->SetBinError(10,0.00571546);
   VbbHcc_HPt_stack_10->SetBinError(11,0.004561272);
   VbbHcc_HPt_stack_10->SetBinError(12,0.003521252);
   VbbHcc_HPt_stack_10->SetBinError(13,0.002930373);
   VbbHcc_HPt_stack_10->SetBinError(14,0.002330654);
   VbbHcc_HPt_stack_10->SetBinError(15,0.002008237);
   VbbHcc_HPt_stack_10->SetBinError(16,0.001104582);
   VbbHcc_HPt_stack_10->SetBinError(17,0.0009056049);
   VbbHcc_HPt_stack_10->SetBinError(18,0.001043048);
   VbbHcc_HPt_stack_10->SetBinError(19,0.001055187);
   VbbHcc_HPt_stack_10->SetBinError(20,0.0006592205);
   VbbHcc_HPt_stack_10->SetBinError(21,0.000860853);
   VbbHcc_HPt_stack_10->SetBinError(22,0.0007001659);
   VbbHcc_HPt_stack_10->SetBinError(23,0.000385282);
   VbbHcc_HPt_stack_10->SetBinError(24,0.000375936);
   VbbHcc_HPt_stack_10->SetBinError(26,0.0004324426);
   VbbHcc_HPt_stack_10->SetEntries(72910);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_HPt_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_10->SetLineColor(ci);
   VbbHcc_HPt_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_10,"");
   
   TH1D *VbbHcc_HPt_stack_11 = new TH1D("VbbHcc_HPt_stack_11","",40,0,2000);
   VbbHcc_HPt_stack_11->SetBinContent(1,0.3020751);
   VbbHcc_HPt_stack_11->SetBinContent(2,1.511384);
   VbbHcc_HPt_stack_11->SetBinContent(3,1.335607);
   VbbHcc_HPt_stack_11->SetBinContent(4,0.6902065);
   VbbHcc_HPt_stack_11->SetBinContent(5,0.3609968);
   VbbHcc_HPt_stack_11->SetBinContent(6,0.1896948);
   VbbHcc_HPt_stack_11->SetBinContent(7,0.1267853);
   VbbHcc_HPt_stack_11->SetBinContent(8,0.07526759);
   VbbHcc_HPt_stack_11->SetBinContent(9,0.03552235);
   VbbHcc_HPt_stack_11->SetBinContent(10,0.03186176);
   VbbHcc_HPt_stack_11->SetBinContent(11,0.01284514);
   VbbHcc_HPt_stack_11->SetBinContent(12,0.01056679);
   VbbHcc_HPt_stack_11->SetBinContent(13,0.003983224);
   VbbHcc_HPt_stack_11->SetBinContent(14,0.001533624);
   VbbHcc_HPt_stack_11->SetBinContent(16,0.001516151);
   VbbHcc_HPt_stack_11->SetBinContent(20,0.003022099);
   VbbHcc_HPt_stack_11->SetBinContent(27,0.001563217);
   VbbHcc_HPt_stack_11->SetBinError(1,0.02189334);
   VbbHcc_HPt_stack_11->SetBinError(2,0.04844084);
   VbbHcc_HPt_stack_11->SetBinError(3,0.04554701);
   VbbHcc_HPt_stack_11->SetBinError(4,0.03265349);
   VbbHcc_HPt_stack_11->SetBinError(5,0.02407744);
   VbbHcc_HPt_stack_11->SetBinError(6,0.01744282);
   VbbHcc_HPt_stack_11->SetBinError(7,0.014042);
   VbbHcc_HPt_stack_11->SetBinError(8,0.01080082);
   VbbHcc_HPt_stack_11->SetBinError(9,0.007386654);
   VbbHcc_HPt_stack_11->SetBinError(10,0.007217076);
   VbbHcc_HPt_stack_11->SetBinError(11,0.004318877);
   VbbHcc_HPt_stack_11->SetBinError(12,0.004001678);
   VbbHcc_HPt_stack_11->SetBinError(13,0.002364504);
   VbbHcc_HPt_stack_11->SetBinError(14,0.001533624);
   VbbHcc_HPt_stack_11->SetBinError(16,0.001516151);
   VbbHcc_HPt_stack_11->SetBinError(20,0.002136951);
   VbbHcc_HPt_stack_11->SetBinError(27,0.001563217);
   VbbHcc_HPt_stack_11->SetEntries(3413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_HPt_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_11->SetLineColor(ci);
   VbbHcc_HPt_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_11,"");
   
   TH1D *VbbHcc_HPt_stack_12 = new TH1D("VbbHcc_HPt_stack_12","",40,0,2000);
   VbbHcc_HPt_stack_12->SetBinContent(1,0.07314099);
   VbbHcc_HPt_stack_12->SetBinContent(2,0.3003771);
   VbbHcc_HPt_stack_12->SetBinContent(3,0.4337218);
   VbbHcc_HPt_stack_12->SetBinContent(4,0.318966);
   VbbHcc_HPt_stack_12->SetBinContent(5,0.1864626);
   VbbHcc_HPt_stack_12->SetBinContent(6,0.09890917);
   VbbHcc_HPt_stack_12->SetBinContent(7,0.06042082);
   VbbHcc_HPt_stack_12->SetBinContent(8,0.03752707);
   VbbHcc_HPt_stack_12->SetBinContent(9,0.0178883);
   VbbHcc_HPt_stack_12->SetBinContent(10,0.01342078);
   VbbHcc_HPt_stack_12->SetBinContent(11,0.005357132);
   VbbHcc_HPt_stack_12->SetBinContent(12,0.004261142);
   VbbHcc_HPt_stack_12->SetBinContent(13,0.003314495);
   VbbHcc_HPt_stack_12->SetBinContent(14,0.002719142);
   VbbHcc_HPt_stack_12->SetBinContent(15,0.002084024);
   VbbHcc_HPt_stack_12->SetBinContent(16,0.0009499412);
   VbbHcc_HPt_stack_12->SetBinContent(17,0.001924909);
   VbbHcc_HPt_stack_12->SetBinContent(18,0.0007594089);
   VbbHcc_HPt_stack_12->SetBinContent(19,0.0009893139);
   VbbHcc_HPt_stack_12->SetBinContent(20,0.0007743055);
   VbbHcc_HPt_stack_12->SetBinContent(21,0.0007409289);
   VbbHcc_HPt_stack_12->SetBinContent(22,0.0001291847);
   VbbHcc_HPt_stack_12->SetBinContent(23,0.0001898897);
   VbbHcc_HPt_stack_12->SetBinContent(24,0.0002126125);
   VbbHcc_HPt_stack_12->SetBinContent(27,0.0002118312);
   VbbHcc_HPt_stack_12->SetBinContent(28,0.0002127011);
   VbbHcc_HPt_stack_12->SetBinContent(32,0.0002057899);
   VbbHcc_HPt_stack_12->SetBinContent(34,0.0003823192);
   VbbHcc_HPt_stack_12->SetBinContent(38,0.0001915038);
   VbbHcc_HPt_stack_12->SetBinError(1,0.003724704);
   VbbHcc_HPt_stack_12->SetBinError(2,0.007574543);
   VbbHcc_HPt_stack_12->SetBinError(3,0.009101077);
   VbbHcc_HPt_stack_12->SetBinError(4,0.007788633);
   VbbHcc_HPt_stack_12->SetBinError(5,0.005962358);
   VbbHcc_HPt_stack_12->SetBinError(6,0.004317656);
   VbbHcc_HPt_stack_12->SetBinError(7,0.003384592);
   VbbHcc_HPt_stack_12->SetBinError(8,0.002667347);
   VbbHcc_HPt_stack_12->SetBinError(9,0.001846);
   VbbHcc_HPt_stack_12->SetBinError(10,0.001586853);
   VbbHcc_HPt_stack_12->SetBinError(11,0.0009899632);
   VbbHcc_HPt_stack_12->SetBinError(12,0.0009055897);
   VbbHcc_HPt_stack_12->SetBinError(13,0.0008054155);
   VbbHcc_HPt_stack_12->SetBinError(14,0.0007028427);
   VbbHcc_HPt_stack_12->SetBinError(15,0.000630857);
   VbbHcc_HPt_stack_12->SetBinError(16,0.0004194387);
   VbbHcc_HPt_stack_12->SetBinError(17,0.0006088544);
   VbbHcc_HPt_stack_12->SetBinError(18,0.0003797121);
   VbbHcc_HPt_stack_12->SetBinError(19,0.0004429799);
   VbbHcc_HPt_stack_12->SetBinError(20,0.0003879776);
   VbbHcc_HPt_stack_12->SetBinError(21,0.0003765106);
   VbbHcc_HPt_stack_12->SetBinError(22,0.0001291847);
   VbbHcc_HPt_stack_12->SetBinError(23,0.0001892249);
   VbbHcc_HPt_stack_12->SetBinError(24,0.0002126125);
   VbbHcc_HPt_stack_12->SetBinError(27,0.0002118312);
   VbbHcc_HPt_stack_12->SetBinError(28,0.0002127011);
   VbbHcc_HPt_stack_12->SetBinError(32,0.0002057899);
   VbbHcc_HPt_stack_12->SetBinError(34,0.0002703544);
   VbbHcc_HPt_stack_12->SetBinError(38,0.0001915038);
   VbbHcc_HPt_stack_12->SetEntries(8846);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_HPt_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_12->SetLineColor(ci);
   VbbHcc_HPt_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_HPt__25 = new TH1D("VbbHcc_HPt__25","",40,0,2000);
   VbbHcc_HPt__25->SetBinContent(1,13662);
   VbbHcc_HPt__25->SetBinContent(2,38619);
   VbbHcc_HPt__25->SetBinContent(3,46241);
   VbbHcc_HPt__25->SetBinContent(4,35966);
   VbbHcc_HPt__25->SetBinContent(5,22923);
   VbbHcc_HPt__25->SetBinContent(6,15106);
   VbbHcc_HPt__25->SetBinContent(7,10280);
   VbbHcc_HPt__25->SetBinContent(8,6454);
   VbbHcc_HPt__25->SetBinContent(9,3672);
   VbbHcc_HPt__25->SetBinContent(10,2168);
   VbbHcc_HPt__25->SetBinContent(11,1194);
   VbbHcc_HPt__25->SetBinContent(12,747);
   VbbHcc_HPt__25->SetBinContent(13,426);
   VbbHcc_HPt__25->SetBinContent(14,314);
   VbbHcc_HPt__25->SetBinContent(15,182);
   VbbHcc_HPt__25->SetBinContent(16,125);
   VbbHcc_HPt__25->SetBinContent(17,84);
   VbbHcc_HPt__25->SetBinContent(18,62);
   VbbHcc_HPt__25->SetBinContent(19,27);
   VbbHcc_HPt__25->SetBinContent(20,26);
   VbbHcc_HPt__25->SetBinContent(21,14);
   VbbHcc_HPt__25->SetBinContent(22,8);
   VbbHcc_HPt__25->SetBinContent(23,9);
   VbbHcc_HPt__25->SetBinContent(24,7);
   VbbHcc_HPt__25->SetBinContent(25,2);
   VbbHcc_HPt__25->SetBinContent(26,3);
   VbbHcc_HPt__25->SetBinContent(27,1);
   VbbHcc_HPt__25->SetBinContent(28,1);
   VbbHcc_HPt__25->SetBinContent(33,1);
   VbbHcc_HPt__25->SetEntries(198324);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt__25->SetLineColor(ci);
   VbbHcc_HPt__25->SetLineWidth(2);
   VbbHcc_HPt__25->SetMarkerStyle(20);
   VbbHcc_HPt__25->SetMarkerSize(1.2);
   VbbHcc_HPt__25->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt__25->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt__25->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt__25->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt__25->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt__25->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt__25->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt__25->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt__25->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt__25->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt__25->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt__25->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt__25->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt__25->GetZaxis()->SetTitleFont(42);
   VbbHcc_HPt__25->Draw("same E");
   
   Double_t Graph_from_VbbHcc_HPt_fx1025[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_VbbHcc_HPt_fy1025[40] = {
   42689.36,
   164905.7,
   190864.6,
   114556.4,
   46732.43,
   19895.59,
   8899.911,
   4745.196,
   2428.133,
   1316.096,
   776.8678,
   532.299,
   280.8473,
   166.5517,
   112.0319,
   69.89279,
   49.11323,
   30.85956,
   23.62123,
   17.28596,
   8.958084,
   8.018405,
   5.064531,
   3.232782,
   2.485676,
   0.9181402,
   0.9813975,
   0.8615791,
   0.04635909,
   0.6193492,
   0.2198664,
   0.1419612,
   0.1818683,
   0.07100959,
   0,
   0.0002061854,
   7.204299e-05,
   0.0002653861,
   0,
   0};
   Double_t Graph_from_VbbHcc_HPt_fex1025[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_VbbHcc_HPt_fey1025[40] = {
   2881.928,
   6000.955,
   6527.102,
   4786.248,
   2356.008,
   904.1021,
   305.2788,
   172.6642,
   104.3407,
   67.50064,
   45.09316,
   35.51184,
   22.50922,
   14.7009,
   9.949718,
   7.413731,
   4.026919,
   3.026284,
   2.724508,
   2.23874,
   1.26906,
   1.269928,
   0.9419426,
   0.8364263,
   0.6812888,
   0.4289855,
   0.4054067,
   0.3981872,
   0.04574513,
   0.3573754,
   0.2196671,
   0.1000944,
   0.1818683,
   0.07049005,
   0,
   0.0001191263,
   7.204299e-05,
   0.0002052616,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_HPt_fx1025,Graph_from_VbbHcc_HPt_fy1025,Graph_from_VbbHcc_HPt_fex1025,Graph_from_VbbHcc_HPt_fey1025);
   gre->SetName("Graph_from_VbbHcc_HPt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_HPt1025 = new TH1F("Graph_Graph_from_VbbHcc_HPt1025","",100,0,2200);
   Graph_Graph_from_VbbHcc_HPt1025->SetMinimum(-19739.17);
   Graph_Graph_from_VbbHcc_HPt1025->SetMaximum(217130.8);
   Graph_Graph_from_VbbHcc_HPt1025->SetDirectory(0);
   Graph_Graph_from_VbbHcc_HPt1025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_HPt1025->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_HPt1025->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HPt1025->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HPt1025->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HPt1025->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_HPt1025->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HPt1025->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HPt1025->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HPt1025->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_HPt1025->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_HPt1025->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HPt1025->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HPt1025->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HPt1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_HPt1025);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_HPt","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HPt_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_HPt","MC unc. (stat.)","fl");

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
   HPt_VbbHcc_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(116.1295,-0.2774193,1562.903,1.658065);
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
   
   TH1D *data_mc_ratio__26 = new TH1D("data_mc_ratio__26","",40,0,2000);
   data_mc_ratio__26->SetBinContent(1,0.3200329);
   data_mc_ratio__26->SetBinContent(2,0.2341884);
   data_mc_ratio__26->SetBinContent(3,0.2422713);
   data_mc_ratio__26->SetBinContent(4,0.3139589);
   data_mc_ratio__26->SetBinContent(5,0.4905159);
   data_mc_ratio__26->SetBinContent(6,0.7592636);
   data_mc_ratio__26->SetBinContent(7,1.155068);
   data_mc_ratio__26->SetBinContent(8,1.360112);
   data_mc_ratio__26->SetBinContent(9,1.512273);
   data_mc_ratio__26->SetBinContent(10,1.647296);
   data_mc_ratio__26->SetBinContent(11,1.536941);
   data_mc_ratio__26->SetBinContent(12,1.403347);
   data_mc_ratio__26->SetBinContent(13,1.516838);
   data_mc_ratio__26->SetBinContent(14,1.8853);
   data_mc_ratio__26->SetBinContent(15,1.624537);
   data_mc_ratio__26->SetBinContent(16,1.788454);
   data_mc_ratio__26->SetBinContent(17,1.710333);
   data_mc_ratio__26->SetBinContent(18,2.009102);
   data_mc_ratio__26->SetBinContent(19,1.14304);
   data_mc_ratio__26->SetBinContent(20,1.504111);
   data_mc_ratio__26->SetBinContent(21,1.562834);
   data_mc_ratio__26->SetBinContent(22,0.9977047);
   data_mc_ratio__26->SetBinContent(23,1.777065);
   data_mc_ratio__26->SetBinContent(24,2.165318);
   data_mc_ratio__26->SetBinContent(25,0.8046102);
   data_mc_ratio__26->SetBinContent(26,3.267475);
   data_mc_ratio__26->SetBinContent(27,1.018955);
   data_mc_ratio__26->SetBinContent(28,1.160659);
   data_mc_ratio__26->SetBinContent(33,5.498485);
   data_mc_ratio__26->SetBinError(1,0.002738025);
   data_mc_ratio__26->SetBinError(2,0.001191694);
   data_mc_ratio__26->SetBinError(3,0.001126648);
   data_mc_ratio__26->SetBinError(4,0.00165549);
   data_mc_ratio__26->SetBinError(5,0.003239793);
   data_mc_ratio__26->SetBinError(6,0.006177572);
   data_mc_ratio__26->SetBinError(7,0.01139229);
   data_mc_ratio__26->SetBinError(8,0.01693013);
   data_mc_ratio__26->SetBinError(9,0.02495622);
   data_mc_ratio__26->SetBinError(10,0.0353787);
   data_mc_ratio__26->SetBinError(11,0.044479);
   data_mc_ratio__26->SetBinError(12,0.05134577);
   data_mc_ratio__26->SetBinError(13,0.07349106);
   data_mc_ratio__26->SetBinError(14,0.1063936);
   data_mc_ratio__26->SetBinError(15,0.1204187);
   data_mc_ratio__26->SetBinError(16,0.1599641);
   data_mc_ratio__26->SetBinError(17,0.1866127);
   data_mc_ratio__26->SetBinError(18,0.2551562);
   data_mc_ratio__26->SetBinError(19,0.2199781);
   data_mc_ratio__26->SetBinError(20,0.2949804);
   data_mc_ratio__26->SetBinError(21,0.417685);
   data_mc_ratio__26->SetBinError(22,0.3527419);
   data_mc_ratio__26->SetBinError(23,0.5923549);
   data_mc_ratio__26->SetBinError(24,0.8184133);
   data_mc_ratio__26->SetBinError(25,0.5689453);
   data_mc_ratio__26->SetBinError(26,1.886478);
   data_mc_ratio__26->SetBinError(27,1.018955);
   data_mc_ratio__26->SetBinError(28,1.160659);
   data_mc_ratio__26->SetBinError(33,5.498485);
   data_mc_ratio__26->SetMinimum(0.4);
   data_mc_ratio__26->SetMaximum(1.6);
   data_mc_ratio__26->SetEntries(25.00078);
   data_mc_ratio__26->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__26->SetLineColor(ci);
   data_mc_ratio__26->SetLineWidth(2);
   data_mc_ratio__26->SetMarkerStyle(20);
   data_mc_ratio__26->SetMarkerSize(1.2);
   data_mc_ratio__26->GetXaxis()->SetTitle("H p_{T} [GeV]");
   data_mc_ratio__26->GetXaxis()->SetRange(7,30);
   data_mc_ratio__26->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__26->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__26->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__26->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__26->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__26->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__26->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__26->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__26->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__26->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__26->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__26->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__26->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__26->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__26->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__26->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__26->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1026[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_mc_statistical_error_fy1026[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1026[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_mc_statistical_error_fey1026[40] = {
   0.06750928,
   0.03639022,
   0.03419756,
   0.04178071,
   0.05041483,
   0.04544233,
   0.03430133,
   0.03638716,
   0.04297157,
   0.05128852,
   0.05804483,
   0.06671408,
   0.08014753,
   0.08826627,
   0.08881144,
   0.1060729,
   0.08199254,
   0.09806632,
   0.1153415,
   0.1295121,
   0.1416664,
   0.1583766,
   0.1859881,
   0.2587327,
   0.274086,
   0.4672331,
   0.4130913,
   0.4621597,
   0.9867565,
   0.5770175,
   0.9990933,
   0.7050826,
   1,
   0.9926835,
   0,
   0.5777629,
   1,
   0.773445,
   0,
   0};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1026,Graph_from_mc_statistical_error_fy1026,Graph_from_mc_statistical_error_fex1026,Graph_from_mc_statistical_error_fey1026);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1026 = new TH1F("Graph_Graph_from_mc_statistical_error1026","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1026->SetMinimum(-0.2);
   Graph_Graph_from_mc_statistical_error1026->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1026->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1026->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1026->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1026->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1026->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1026->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1026->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1026->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1026->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1026);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   HPt_VbbHcc_16->cd();
   HPt_VbbHcc_16->Modified();
   HPt_VbbHcc_16->cd();
   HPt_VbbHcc_16->SetSelected(HPt_VbbHcc_16);
}
