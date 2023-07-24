void Sphericity_tags_all()
{
//=========Macro generated from canvas: Sphericity_tags_all/Sphericity_tags_all
//=========  (Mon Jul 24 10:11:25 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_all = new TCanvas("Sphericity_tags_all", "Sphericity_tags_all",0,0,600,600);
   Sphericity_tags_all->SetHighLightColor(2);
   Sphericity_tags_all->Range(0,0,1,1);
   Sphericity_tags_all->SetFillColor(0);
   Sphericity_tags_all->SetFillStyle(4000);
   Sphericity_tags_all->SetBorderMode(0);
   Sphericity_tags_all->SetBorderSize(2);
   Sphericity_tags_all->SetFrameFillStyle(1000);
   Sphericity_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-6658.648,1.052419,6652289);
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
   st->SetMaximum(5701328);
   
   TH1F *st_stack_60 = new TH1F("st_stack_60","",25,0,1);
   st_stack_60->SetMinimum(0.3);
   st_stack_60->SetMaximum(5986394);
   st_stack_60->SetDirectory(0);
   st_stack_60->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_60->SetLineColor(ci);
   st_stack_60->GetXaxis()->SetRange(1,25);
   st_stack_60->GetXaxis()->SetLabelFont(42);
   st_stack_60->GetXaxis()->SetLabelSize(0.035);
   st_stack_60->GetXaxis()->SetTitleSize(0.035);
   st_stack_60->GetXaxis()->SetTitleFont(42);
   st_stack_60->GetYaxis()->SetTitle("Events/0.04");
   st_stack_60->GetYaxis()->SetLabelFont(42);
   st_stack_60->GetYaxis()->SetLabelSize(0.05);
   st_stack_60->GetYaxis()->SetTitleSize(0.057);
   st_stack_60->GetYaxis()->SetTitleOffset(1.2);
   st_stack_60->GetYaxis()->SetTitleFont(42);
   st_stack_60->GetZaxis()->SetLabelFont(42);
   st_stack_60->GetZaxis()->SetLabelSize(0.035);
   st_stack_60->GetZaxis()->SetTitleSize(0.035);
   st_stack_60->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_60);
   
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_1 = new TH1D("VbbHcc_tags_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(1,2128211);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(2,1765909);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(3,957231.2);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(4,588919.4);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(5,291843);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(6,155952.2);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(7,67834.01);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(8,39836.55);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(9,27800.06);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(10,19621.21);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(11,12038.23);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(12,10386.01);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(13,7701.076);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(14,6496.589);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(15,4239.993);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(16,6441.918);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(17,2295.774);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(18,1600.501);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(19,789.6647);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(20,277.7843);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(21,43.22765);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(22,0.6165256);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(1,34916.38);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(2,39251.19);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(3,15368.27);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(4,24128.75);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(5,7845.914);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(6,5442.364);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(7,3268.652);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(8,2459.369);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(9,1740.482);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(10,1510.427);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(11,1069.622);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(12,845.2413);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(13,706.8919);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(14,794.7102);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(15,528.1905);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(16,3168.63);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(17,434.5685);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(18,339.0086);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(19,117.7314);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(20,61.55763);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(21,17.62297);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(22,0.3606379);
   VbbHcc_tags_Sphericity_all_stack_1->SetEntries(488683);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_2 = new TH1D("VbbHcc_tags_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(1,21945.09);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(2,18506.07);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(3,10804.15);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(4,6209.958);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(5,3506.317);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(6,1929.308);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(7,1015.814);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(8,608.7453);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(9,377.8047);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(10,258.207);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(11,177.391);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(12,130.3112);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(13,100.5465);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(14,68.22791);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(15,54.40078);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(16,37.24142);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(17,28.03324);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(18,18.56539);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(19,12.81481);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(20,3.339556);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(21,3.228018);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(22,0.7307395);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(23,0.165532);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(1,67.48258);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(2,60.08418);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(3,46.48479);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(4,37.78862);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(5,27.05618);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(6,20.66288);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(7,14.51977);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(8,11.69949);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(9,8.987676);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(10,7.361909);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(11,6.563533);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(12,5.249989);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(13,4.565247);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(14,3.66147);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(15,3.254428);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(16,2.702227);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(17,2.289196);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(18,1.867416);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(19,1.564231);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(20,0.7581649);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(21,0.8530007);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(22,0.3853148);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(23,0.2274236);
   VbbHcc_tags_Sphericity_all_stack_2->SetEntries(822483);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Sphericity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_2,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_3 = new TH1D("VbbHcc_tags_Sphericity_all_stack_3","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(1,388388.8);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(2,343015.8);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(3,190148.3);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(4,108151.2);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(5,62072.21);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(6,35168.02);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(7,20158.9);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(8,12177.12);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(9,7925.636);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(10,5439.496);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(11,3857.2);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(12,2838.742);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(13,2126.08);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(14,1613.699);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(15,1255.586);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(16,932.3149);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(17,671.6725);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(18,438.5783);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(19,257.3383);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(20,104.1191);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(21,38.50086);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(22,10.55077);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(23,1.864007);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(24,0.433925);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(1,171.3534);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(2,160.5721);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(3,119.7785);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(4,90.52705);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(5,68.36788);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(6,51.2939);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(7,38.51475);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(8,29.99366);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(9,24.52517);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(10,19.97786);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(11,16.83469);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(12,14.80715);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(13,12.4501);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(14,10.77207);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(15,9.745246);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(16,8.219567);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(17,7.804172);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(18,5.675769);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(19,4.297736);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(20,2.827425);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(21,1.65074);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(22,0.863098);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(23,0.3510522);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(24,0.1839591);
   VbbHcc_tags_Sphericity_all_stack_3->SetEntries(1.800198e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Sphericity_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_3,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_4 = new TH1D("VbbHcc_tags_Sphericity_all_stack_4","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(1,16867.56);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(2,13127.25);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(3,7680.489);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(4,4654.353);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(5,2648.791);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(6,1373.387);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(7,689.7336);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(8,390.1459);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(9,271.8439);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(10,184.8525);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(11,139.6514);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(12,101.0002);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(13,79.23545);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(14,56.5562);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(15,45.83496);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(16,30.54125);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(17,29.33427);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(18,21.30599);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(19,6.679921);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(20,3.085722);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(21,1.483827);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(22,0.4951559);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(23,0.4799386);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(1,91.02604);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(2,93.79925);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(3,69.25452);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(4,51.22257);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(5,35.30134);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(6,22.65965);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(7,15.85605);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(8,9.330622);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(9,9.073627);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(10,8.212209);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(11,5.109222);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(12,3.934285);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(13,4.343902);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(14,3.958607);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(15,2.732726);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(16,2.024638);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(17,4.017402);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(18,3.673316);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(19,1.05038);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(20,0.7363336);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(21,0.4476723);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(22,0.3367479);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(23,0.4799386);
   VbbHcc_tags_Sphericity_all_stack_4->SetEntries(340933);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Sphericity_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_4,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_5 = new TH1D("VbbHcc_tags_Sphericity_all_stack_5","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(1,9772.656);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(2,7107.71);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(3,4091.168);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(4,2614.016);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(5,1524.817);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(6,809.6587);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(7,417.917);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(8,246.9212);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(9,169.2111);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(10,131.26);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(11,92.44822);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(12,73.10379);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(13,46.53961);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(14,36.61747);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(15,22.21682);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(16,24.69984);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(17,11.41079);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(18,10.85151);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(19,4.386561);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(20,0.9182164);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(21,2.302158);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(23,0.04571952);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(1,118.5457);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(2,102.6841);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(3,76.53473);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(4,63.87444);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(5,51.31559);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(6,28.45683);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(7,20.82044);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(8,14.05006);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(9,16.47268);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(10,12.28247);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(11,12.61935);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(12,10.73134);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(13,3.494009);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(14,8.060073);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(15,2.962803);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(16,5.373028);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(17,1.33321);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(18,2.910525);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(19,0.7704341);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(20,0.3201722);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(21,2.228146);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(23,0.04571952);
   VbbHcc_tags_Sphericity_all_stack_5->SetEntries(194636);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Sphericity_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_5,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_6 = new TH1D("VbbHcc_tags_Sphericity_all_stack_6","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(1,55.30788);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(2,40.09343);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(3,23.14326);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(4,14.3932);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(5,9.453228);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(6,5.683541);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(7,2.524871);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(8,2.412031);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(9,0.3789139);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(10,0.1920874);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(11,0.4146988);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(12,0.256404);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(13,0.7136216);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(14,0.1726209);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(15,0.4626553);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(16,0.08857249);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(19,0.08368601);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(1,3.319452);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(2,2.723781);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(3,2.156562);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(4,1.689382);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(5,1.256609);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(6,1.097899);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(7,0.660696);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(8,0.7550017);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(9,0.1898435);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(10,0.1362077);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(11,0.3281196);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(12,0.1496082);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(13,0.4589456);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(14,0.1220637);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(15,0.3462152);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(16,0.08857249);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(19,0.08368601);
   VbbHcc_tags_Sphericity_all_stack_6->SetEntries(1108);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Sphericity_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_6,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_7 = new TH1D("VbbHcc_tags_Sphericity_all_stack_7","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(1,89.00217);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(2,66.69835);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(3,41.56743);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(4,23.25924);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(5,13.91634);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(6,8.989699);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(7,3.528112);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(8,2.997568);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(9,0.3986131);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(10,0.9668351);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(11,0.6641215);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(12,0.1357011);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(13,1.017811);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(14,0.1084883);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(15,0.4626553);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(16,0.07527418);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(17,0.2714695);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(20,0.06025132);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(1,3.573753);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(2,2.965649);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(3,2.385732);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(4,1.822669);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(5,1.334249);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(6,1.175854);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(7,0.6900518);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(8,0.771111);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(9,0.1630581);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(10,0.2587311);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(11,0.3491999);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(12,0.09621303);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(13,0.4780686);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(14,0.07682197);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(15,0.3462152);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(16,0.07527418);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(17,0.1357449);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(20,0.06025132);
   VbbHcc_tags_Sphericity_all_stack_7->SetEntries(2838);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Sphericity_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_7,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_8 = new TH1D("VbbHcc_tags_Sphericity_all_stack_8","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(1,129.3315);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(2,102.3578);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(3,51.55626);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(4,35.19006);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(5,25.16562);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(6,10.27001);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(7,4.934483);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(8,3.570122);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(9,1.142826);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(10,1.452906);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(11,0.1881865);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(12,0.8183654);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(13,0.2772775);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(14,0.5091188);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(15,0.5129295);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(18,0.1804655);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(1,5.345196);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(2,4.668718);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(3,3.322447);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(4,2.75719);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(5,2.335034);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(6,1.450085);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(7,1.015206);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(8,0.8397032);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(9,0.4701438);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(10,0.5671019);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(11,0.1881865);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(12,0.4098917);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(13,0.2772775);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(14,0.2958791);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(15,0.3683352);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(18,0.1804655);
   VbbHcc_tags_Sphericity_all_stack_8->SetEntries(1788);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Sphericity_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_8,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_9 = new TH1D("VbbHcc_tags_Sphericity_all_stack_9","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(1,76.73738);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(2,66.71317);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(3,38.1026);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(4,25.02639);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(5,16.21939);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(6,8.56843);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(7,3.621922);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(8,1.755961);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(9,1.095258);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(10,0.8123261);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(11,0.5216345);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(12,0.4246556);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(13,0.3530333);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(14,0.2310805);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(15,0.1717634);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(16,0.1166647);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(17,0.08882648);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(18,0.06473697);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(19,0.03837873);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(20,0.02069037);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(21,0.004784507);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(22,0.00345605);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(23,0.002593215);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(1,0.4083184);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(2,0.3905665);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(3,0.2862904);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(4,0.2271188);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(5,0.1865323);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(6,0.1355844);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(7,0.08552604);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(8,0.05921308);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(9,0.04760233);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(10,0.04019087);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(11,0.03208739);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(12,0.02969873);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(13,0.02751797);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(14,0.02084662);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(15,0.01946257);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(16,0.01489919);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(17,0.01351239);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(18,0.0119816);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(19,0.009069254);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(20,0.006831569);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(21,0.003389899);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(22,0.002446022);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(23,0.0018351);
   VbbHcc_tags_Sphericity_all_stack_9->SetEntries(135628);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Sphericity_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_9,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_10 = new TH1D("VbbHcc_tags_Sphericity_all_stack_10","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(1,58.78206);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(2,49.17333);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(3,28.09109);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(4,17.58776);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(5,10.4993);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(6,5.809157);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(7,3.096151);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(8,1.857665);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(9,1.046957);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(10,0.839506);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(11,0.6177992);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(12,0.5315746);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(13,0.3834887);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(14,0.2852707);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(15,0.2227807);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(16,0.1588315);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(17,0.1125628);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(18,0.07739813);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(19,0.04293242);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(20,0.01408048);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(21,0.004335496);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(22,0.001425026);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(1,0.1732557);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(2,0.1586376);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(3,0.1199445);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(4,0.09494898);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(5,0.07334967);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(6,0.05453516);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(7,0.03975006);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(8,0.0307038);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(9,0.02307826);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(10,0.02065915);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(11,0.01776133);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(12,0.01642054);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(13,0.01390483);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(14,0.0120076);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(15,0.0106496);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(16,0.00893172);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(17,0.00759989);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(18,0.006287027);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(19,0.004677794);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(20,0.002653822);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(21,0.001480823);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(22,0.0008428765);
   VbbHcc_tags_Sphericity_all_stack_10->SetEntries(374655);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Sphericity_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_10,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_11 = new TH1D("VbbHcc_tags_Sphericity_all_stack_11","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(1,2.16948);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(2,1.805414);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(3,0.9999604);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(4,0.7008244);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(5,0.4760533);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(6,0.2414181);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(7,0.09168954);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(8,0.04873303);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(9,0.02723006);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(10,0.02565169);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(11,0.02157633);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(12,0.01256096);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(13,0.009348205);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(14,0.006089417);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(15,0.00284611);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(16,0.001952183);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(18,0.002532203);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(1,0.07943486);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(2,0.06882992);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(3,0.05389108);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(4,0.04311154);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(5,0.03549819);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(6,0.02472099);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(7,0.01584184);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(8,0.01111054);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(9,0.007914962);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(10,0.007620418);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(11,0.006681365);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(12,0.005261191);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(13,0.004832546);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(14,0.004158691);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(15,0.002087809);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(16,0.001952183);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(18,0.002532203);
   VbbHcc_tags_Sphericity_all_stack_11->SetEntries(2879);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_11,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_12 = new TH1D("VbbHcc_tags_Sphericity_all_stack_12","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(1,1.060284);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(2,0.9031026);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(3,0.4644079);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(4,0.3196564);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(5,0.1781338);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(6,0.1087636);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(7,0.04917338);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(8,0.0319751);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(9,0.01955384);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(10,0.01166319);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(11,0.01022286);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(12,0.009674196);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(13,0.006405191);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(14,0.007008634);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(15,0.006021986);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(16,0.002620376);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(17,0.00240112);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(18,0.0008931712);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(19,0.0007970187);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(20,0.0004888712);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(1,0.01875007);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(2,0.01729825);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(3,0.01232743);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(4,0.01042037);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(5,0.008538874);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(6,0.006036327);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(7,0.003995712);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(8,0.003151072);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(9,0.00252317);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(10,0.001941252);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(11,0.001794414);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(12,0.001819084);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(13,0.001419816);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(14,0.001521018);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(15,0.001452922);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(16,0.0009567339);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(17,0.0009238692);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(18,0.0005252896);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(19,0.0004767613);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(20,0.0003580904);
   VbbHcc_tags_Sphericity_all_stack_12->SetEntries(10461);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Sphericity_all__119 = new TH1D("VbbHcc_tags_Sphericity_all__119","",25,0,1);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(1,1763790);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(2,1340551);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(3,775968);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(4,453602);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(5,261080);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(6,145428);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(7,80629);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(8,49073);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(9,32874);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(10,23013);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(11,16579);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(12,12398);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(13,9401);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(14,7300);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(15,5472);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(16,4123);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(17,3001);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(18,2002);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(19,1039);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(20,427);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(21,146);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(22,41);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(23,12);
   VbbHcc_tags_Sphericity_all__119->SetBinContent(24,2);
   VbbHcc_tags_Sphericity_all__119->SetEntries(4987975);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all__119->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all__119->SetLineWidth(2);
   VbbHcc_tags_Sphericity_all__119->SetMarkerStyle(20);
   VbbHcc_tags_Sphericity_all__119->SetMarkerSize(1.2);
   VbbHcc_tags_Sphericity_all__119->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all__119->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all__119->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all__119->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all__119->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all__119->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all__119->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all__119->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all__119->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all__119->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all__119->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all__119->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all__119->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all__119->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all__119->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Sphericity_all_fx1119[25] = {
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
   Double_t Graph_from_VbbHcc_tags_Sphericity_all_fy1119[25] = {
   2565597,
   2147994,
   1170139,
   710665.5,
   361671,
   195272.3,
   90134.22,
   53272.15,
   36548.67,
   25639.33,
   16307.36,
   13531.35,
   10056.24,
   8273.009,
   5619.873,
   7467.159,
   3036.7,
   2090.128,
   1071.05,
   389.3424,
   88.75163,
   12.39807,
   2.55779,
   0.433925,
   0};
   Double_t Graph_from_VbbHcc_tags_Sphericity_all_fex1119[25] = {
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
   Double_t Graph_from_VbbHcc_tags_Sphericity_all_fey1119[25] = {
   34917.18,
   39251.81,
   15369.16,
   24129.09,
   7846.507,
   5442.767,
   3269.016,
   2459.638,
   1740.78,
   1510.649,
   1069.861,
   845.4647,
   707.0386,
   794.8424,
   528.3062,
   3168.648,
   434.6653,
   339.0937,
   117.8274,
   61.63246,
   17.8658,
   1.066242,
   0.6382741,
   0.1839591,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_tags_Sphericity_all_fx1119,Graph_from_VbbHcc_tags_Sphericity_all_fy1119,Graph_from_VbbHcc_tags_Sphericity_all_fex1119,Graph_from_VbbHcc_tags_Sphericity_all_fey1119);
   gre->SetName("Graph_from_VbbHcc_tags_Sphericity_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Sphericity_all1119 = new TH1F("Graph_Graph_from_VbbHcc_tags_Sphericity_all1119","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->SetMaximum(2860566);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Sphericity_all1119);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Sphericity_all","MC unc. (stat.)","fl");

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
   Sphericity_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__120 = new TH1D("data_mc_ratio__120","",25,0,1);
   data_mc_ratio__120->SetBinContent(1,0.6874773);
   data_mc_ratio__120->SetBinContent(2,0.6240945);
   data_mc_ratio__120->SetBinContent(3,0.6631416);
   data_mc_ratio__120->SetBinContent(4,0.6382778);
   data_mc_ratio__120->SetBinContent(5,0.7218714);
   data_mc_ratio__120->SetBinContent(6,0.7447447);
   data_mc_ratio__120->SetBinContent(7,0.8945437);
   data_mc_ratio__120->SetBinContent(8,0.9211755);
   data_mc_ratio__120->SetBinContent(9,0.8994582);
   data_mc_ratio__120->SetBinContent(10,0.8975665);
   data_mc_ratio__120->SetBinContent(11,1.016658);
   data_mc_ratio__120->SetBinContent(12,0.9162425);
   data_mc_ratio__120->SetBinContent(13,0.9348426);
   data_mc_ratio__120->SetBinContent(14,0.8823875);
   data_mc_ratio__120->SetBinContent(15,0.9736875);
   data_mc_ratio__120->SetBinContent(16,0.5521511);
   data_mc_ratio__120->SetBinContent(17,0.9882438);
   data_mc_ratio__120->SetBinContent(18,0.9578361);
   data_mc_ratio__120->SetBinContent(19,0.9700761);
   data_mc_ratio__120->SetBinContent(20,1.096721);
   data_mc_ratio__120->SetBinContent(21,1.64504);
   data_mc_ratio__120->SetBinContent(22,3.306966);
   data_mc_ratio__120->SetBinContent(23,4.69155);
   data_mc_ratio__120->SetBinContent(24,4.609091);
   data_mc_ratio__120->SetBinError(1,0.0005176485);
   data_mc_ratio__120->SetBinError(2,0.0005390247);
   data_mc_ratio__120->SetBinError(3,0.0007528082);
   data_mc_ratio__120->SetBinError(4,0.000947703);
   data_mc_ratio__120->SetBinError(5,0.001412775);
   data_mc_ratio__120->SetBinError(6,0.001952915);
   data_mc_ratio__120->SetBinError(7,0.003150329);
   data_mc_ratio__120->SetBinError(8,0.00415835);
   data_mc_ratio__120->SetBinError(9,0.004960834);
   data_mc_ratio__120->SetBinError(10,0.005916707);
   data_mc_ratio__120->SetBinError(11,0.007895791);
   data_mc_ratio__120->SetBinError(12,0.008228765);
   data_mc_ratio__120->SetBinError(13,0.009641652);
   data_mc_ratio__120->SetBinError(14,0.01032756);
   data_mc_ratio__120->SetBinError(15,0.01316275);
   data_mc_ratio__120->SetBinError(16,0.008599066);
   data_mc_ratio__120->SetBinError(17,0.01803977);
   data_mc_ratio__120->SetBinError(18,0.02140717);
   data_mc_ratio__120->SetBinError(19,0.03009525);
   data_mc_ratio__120->SetBinError(20,0.05307405);
   data_mc_ratio__120->SetBinError(21,0.1361445);
   data_mc_ratio__120->SetBinError(22,0.5164613);
   data_mc_ratio__120->SetBinError(23,1.354334);
   data_mc_ratio__120->SetBinError(24,3.25912);
   data_mc_ratio__120->SetMinimum(0.4);
   data_mc_ratio__120->SetMaximum(1.6);
   data_mc_ratio__120->SetEntries(53.3005);
   data_mc_ratio__120->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__120->SetLineColor(ci);
   data_mc_ratio__120->SetLineWidth(2);
   data_mc_ratio__120->SetMarkerStyle(20);
   data_mc_ratio__120->SetMarkerSize(1.2);
   data_mc_ratio__120->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__120->GetXaxis()->SetRange(1,25);
   data_mc_ratio__120->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__120->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__120->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__120->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__120->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__120->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__120->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__120->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__120->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__120->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__120->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__120->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__120->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__120->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__120->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__120->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__120->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1120[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1120[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1120[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1120[25] = {
   0.01360977,
   0.01827371,
   0.01313447,
   0.03395282,
   0.02169515,
   0.02787271,
   0.03626831,
   0.04617119,
   0.04762909,
   0.05891923,
   0.06560604,
   0.06248191,
   0.07030846,
   0.09607658,
   0.09400679,
   0.4243445,
   0.1431374,
   0.1622359,
   0.1100111,
   0.1582989,
   0.201301,
   0.0860006,
   0.2495412,
   0.4239422,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1120,Graph_from_mc_statistical_error_fy1120,Graph_from_mc_statistical_error_fex1120,Graph_from_mc_statistical_error_fey1120);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1120 = new TH1F("Graph_Graph_from_mc_statistical_error1120","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1120->SetMinimum(0.4907866);
   Graph_Graph_from_mc_statistical_error1120->SetMaximum(1.509213);
   Graph_Graph_from_mc_statistical_error1120->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1120->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1120->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1120->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1120->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1120->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1120->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1120->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1120->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1120->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1120->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1120->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1120->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1120->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1120->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1120->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1120);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_tags_all->cd();
   Sphericity_tags_all->Modified();
   Sphericity_tags_all->cd();
   Sphericity_tags_all->SetSelected(Sphericity_tags_all);
}
