void Sphericity_algo_all()
{
//=========Macro generated from canvas: Sphericity_algo_all/Sphericity_algo_all
//=========  (Tue Aug 22 09:21:55 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_all = new TCanvas("Sphericity_algo_all", "Sphericity_algo_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_all->SetHighLightColor(2);
   Sphericity_algo_all->Range(0,0,1,1);
   Sphericity_algo_all->SetFillColor(0);
   Sphericity_algo_all->SetFillStyle(4000);
   Sphericity_algo_all->SetBorderMode(0);
   Sphericity_algo_all->SetBorderSize(2);
   Sphericity_algo_all->SetFrameFillStyle(1000);
   Sphericity_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-5522.164,1.052419,5516942);
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
   st->SetMaximum(4728281);
   
   TH1F *st_stack_156 = new TH1F("st_stack_156","",25,0,1);
   st_stack_156->SetMinimum(0.3);
   st_stack_156->SetMaximum(4964696);
   st_stack_156->SetDirectory(0);
   st_stack_156->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_156->SetLineColor(ci);
   st_stack_156->GetXaxis()->SetRange(1,25);
   st_stack_156->GetXaxis()->SetLabelFont(42);
   st_stack_156->GetXaxis()->SetLabelSize(0.035);
   st_stack_156->GetXaxis()->SetTitleSize(0.035);
   st_stack_156->GetXaxis()->SetTitleFont(42);
   st_stack_156->GetYaxis()->SetTitle("Events/0.04");
   st_stack_156->GetYaxis()->SetLabelFont(42);
   st_stack_156->GetYaxis()->SetLabelSize(0.05);
   st_stack_156->GetYaxis()->SetTitleSize(0.057);
   st_stack_156->GetYaxis()->SetTitleOffset(1.2);
   st_stack_156->GetYaxis()->SetTitleFont(42);
   st_stack_156->GetZaxis()->SetLabelFont(42);
   st_stack_156->GetZaxis()->SetLabelSize(0.035);
   st_stack_156->GetZaxis()->SetTitleSize(0.035);
   st_stack_156->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_156);
   
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_1 = new TH1D("VbbHcc_algo_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(1,1876901);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(2,1758743);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(3,993466.6);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(4,562512.2);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(5,264285);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(6,117257.6);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(7,35923.87);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(8,9686.617);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(9,3309.155);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(10,2238.012);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(11,1096.11);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(12,683.6194);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(13,303.9701);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(14,251.5712);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(15,115.1152);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(16,378.8197);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(17,738.4725);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(18,85.90433);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(19,35.26166);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(20,28.20014);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(1,32690.6);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(2,33608.12);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(3,29300.81);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(4,22565.31);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(5,7500.417);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(6,5238.993);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(7,3490.81);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(8,1341.02);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(9,680.8733);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(10,579.7387);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(11,334.9138);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(12,311.0364);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(13,80.89247);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(14,63.19344);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(15,40.62028);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(16,240.5077);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(17,512.4083);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(18,27.80797);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(19,19.63716);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(20,12.06233);
   VbbHcc_algo_Sphericity_all_stack_1->SetEntries(333044);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_2 = new TH1D("VbbHcc_algo_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(1,12265.78);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(2,11815.63);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(3,6648.464);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(4,3760.723);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(5,1967.508);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(6,934.4018);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(7,385.1994);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(8,162.65);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(9,79.82336);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(10,43.76327);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(11,26.85429);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(12,21.03767);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(13,12.06733);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(14,7.755963);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(15,6.160732);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(16,5.141467);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(17,4.097982);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(18,2.622002);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(19,0.6821073);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(20,0.3943422);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(21,0.08287338);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(22,0.01849631);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(1,44.20472);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(2,43.15346);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(3,34.46445);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(4,24.84529);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(5,18.22921);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(6,13.33915);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(7,8.442651);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(8,4.989881);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(9,3.49774);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(10,2.525107);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(11,1.989451);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(12,1.837676);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(13,1.318059);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(14,1.025832);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(15,1.032644);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(16,0.8771269);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(17,0.7575183);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(18,0.7844541);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(19,0.2825803);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(20,0.2786115);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(21,0.06480164);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(22,0.01849631);
   VbbHcc_algo_Sphericity_all_stack_2->SetEntries(631310);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_2,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_3 = new TH1D("VbbHcc_algo_Sphericity_all_stack_3","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(1,223732);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(2,231185.3);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(3,122686.2);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(4,66963.62);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(5,35646.98);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(6,17099.97);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(7,7413.101);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(8,3243.196);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(9,1581.209);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(10,840.2798);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(11,483.1615);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(12,296.1902);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(13,183.688);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(14,128.6905);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(15,85.30382);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(16,57.63116);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(17,39.65713);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(18,24.46607);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(19,15.29251);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(20,6.475754);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(21,2.182836);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(22,0.7018773);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(23,0.125603);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(24,0.04673127);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(1,121.4987);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(2,123.7211);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(3,89.71452);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(4,66.67777);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(5,48.46654);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(6,33.48749);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(7,21.41833);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(8,14.08128);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(9,9.641287);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(10,6.987397);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(11,5.183115);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(12,4.034906);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(13,3.167345);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(14,2.682707);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(15,2.144032);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(16,1.809451);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(17,1.695096);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(18,1.153357);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(19,0.9244832);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(20,0.6306023);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(21,0.3442473);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(22,0.1969214);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(23,0.07869376);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(24,0.04673127);
   VbbHcc_algo_Sphericity_all_stack_3->SetEntries(1.291274e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Sphericity_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_3,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_4 = new TH1D("VbbHcc_algo_Sphericity_all_stack_4","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(1,10184.95);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(2,9673.436);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(3,5500.883);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(4,3282.109);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(5,1672.367);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(6,717.9724);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(7,218.1868);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(8,77.30385);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(9,20.89549);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(10,11.00218);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(11,7.382571);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(12,11.20088);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(13,2.783306);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(14,1.423315);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(15,3.928027);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(16,3.986914);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(17,1.204406);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(18,2.026033);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(19,0.09835114);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(1,75.15119);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(2,77.94958);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(3,58.10862);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(4,43.98509);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(5,29.08018);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(6,18.42969);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(7,9.152558);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(8,5.727785);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(9,2.107493);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(10,1.499909);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(11,1.272076);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(12,5.838663);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(13,0.5612378);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(14,0.3649515);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(15,1.839649);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(16,3.124349);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(17,0.451314);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(18,1.235823);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(19,0.05853302);
   VbbHcc_algo_Sphericity_all_stack_4->SetEntries(198969);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Sphericity_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_4,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_5 = new TH1D("VbbHcc_algo_Sphericity_all_stack_5","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(1,4302.336);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(2,3605.965);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(3,2149.916);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(4,1264.94);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(5,611.6007);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(6,266.684);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(7,103.8642);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(8,26.85817);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(9,8.417013);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(10,7.246333);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(11,4.311706);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(12,7.988477);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(13,1.983657);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(14,1.253546);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(15,0.8363864);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(16,0.8075284);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(17,0.3448702);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(18,4.620989e-06);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(19,0.4310655);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(1,89.47175);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(2,75.29331);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(3,57.04578);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(4,46.85898);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(5,25.12789);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(6,14.44925);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(7,15.49709);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(8,4.650729);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(9,1.347888);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(10,1.701494);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(11,1.539819);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(12,5.605288);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(13,0.6449285);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(14,0.6149328);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(15,0.2893505);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(16,0.4866644);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(17,0.2002013);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(18,4.620989e-06);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(19,0.3098109);
   VbbHcc_algo_Sphericity_all_stack_5->SetEntries(95654);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Sphericity_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_5,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_6 = new TH1D("VbbHcc_algo_Sphericity_all_stack_6","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(1,41.62834);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(2,36.21679);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(3,20.08499);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(4,13.5466);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(5,6.689832);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(6,3.224952);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(7,1.318828);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(8,0.5237348);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(9,0.1179106);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(10,0.08262463);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(11,0.1103859);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(1,4.302316);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(2,3.409688);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(3,2.61248);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(4,2.536497);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(5,1.205456);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(6,0.9954356);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(7,0.5367821);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(8,0.4167669);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(9,0.1179106);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(10,0.08262463);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(11,0.1103859);
   VbbHcc_algo_Sphericity_all_stack_6->SetEntries(653);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Sphericity_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_6,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_7 = new TH1D("VbbHcc_algo_Sphericity_all_stack_7","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(1,52.9539);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(2,49.40291);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(3,27.04541);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(4,16.08967);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(5,8.279546);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(6,3.338038);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(7,2.016693);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(8,0.6870187);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(9,0.07967665);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(13,0.03647169);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(1,4.338419);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(2,3.499127);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(3,2.671575);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(4,2.54275);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(5,1.211852);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(6,0.9687983);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(7,0.5745557);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(8,0.4258121);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(9,0.07967665);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(13,0.03647169);
   VbbHcc_algo_Sphericity_all_stack_7->SetEntries(1264);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Sphericity_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_7,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_8 = new TH1D("VbbHcc_algo_Sphericity_all_stack_8","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(1,129.8195);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(2,109.836);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(3,62.52205);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(4,37.81689);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(5,26.7475);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(6,12.63393);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(7,1.715981);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(8,1.21944);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(9,0.2236683);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(10,0.37157);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(11,0.4760704);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(1,5.860443);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(2,5.245633);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(3,3.954857);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(4,3.173083);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(5,2.609567);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(6,1.821234);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(7,0.6630416);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(8,0.5476963);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(9,0.2236683);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(10,0.2634844);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(11,0.3407348);
   VbbHcc_algo_Sphericity_all_stack_8->SetEntries(1595);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Sphericity_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_8,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_9 = new TH1D("VbbHcc_algo_Sphericity_all_stack_9","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(1,79.717);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(2,75.98962);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(3,42.00172);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(4,28.52071);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(5,18.58347);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(6,9.056941);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(7,2.446971);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(8,0.5370341);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(9,0.1995382);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(10,0.08585707);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(11,0.03866199);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(12,0.02481362);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(13,0.008903316);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(14,0.009495089);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(15,0.007926032);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(16,0.003771732);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(17,0.000878137);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(19,0.001143042);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(1,0.4381889);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(2,0.4159785);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(3,0.3122716);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(4,0.2580998);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(5,0.2044214);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(6,0.1851469);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(7,0.07940075);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(8,0.03244484);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(9,0.0201231);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(10,0.01304817);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(11,0.008210175);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(12,0.006693796);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(13,0.003265064);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(14,0.004567143);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(15,0.003836481);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(16,0.003771732);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(17,0.000878137);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(19,0.001143042);
   VbbHcc_algo_Sphericity_all_stack_9->SetEntries(160336);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Sphericity_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_9,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_10 = new TH1D("VbbHcc_algo_Sphericity_all_stack_10","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(1,35.74921);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(2,35.73942);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(3,20.1354);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(4,12.36049);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(5,7.053987);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(6,3.35141);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(7,1.10523);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(8,0.3857792);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(9,0.135889);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(10,0.09966606);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(11,0.04620517);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(12,0.02341585);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(13,0.0248185);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(14,0.009223029);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(15,0.008106746);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(16,0.005376159);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(17,0.008352138);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(18,0.001392438);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(19,0.003702148);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(1,0.1258337);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(2,0.1250738);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(3,0.09409167);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(4,0.07393254);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(5,0.0559315);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(6,0.0386849);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(7,0.02210877);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(8,0.01299111);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(9,0.007626811);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(10,0.006562983);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(11,0.004427491);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(12,0.00308126);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(13,0.003244755);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(14,0.001848631);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(15,0.001659377);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(16,0.001378241);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(17,0.001882575);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(18,0.0008236014);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(19,0.001099293);
   VbbHcc_algo_Sphericity_all_stack_10->SetEntries(282471);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Sphericity_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_10,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_11 = new TH1D("VbbHcc_algo_Sphericity_all_stack_11","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(1,0.6433985);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(2,0.6423793);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(3,0.323489);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(4,0.2499861);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(5,0.1614965);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(6,0.07235178);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(7,0.02120808);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(9,0.001114742);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(1,0.036818);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(2,0.03699671);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(3,0.02648363);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(4,0.02380112);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(5,0.01912592);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(6,0.01246138);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(7,0.00644689);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(9,0.001114742);
   VbbHcc_algo_Sphericity_all_stack_11->SetEntries(1141);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_11,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_12 = new TH1D("VbbHcc_algo_Sphericity_all_stack_12","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(1,0.3026629);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(2,0.3077769);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(3,0.1603407);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(4,0.1082087);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(5,0.06199754);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(6,0.02609774);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(7,0.01056902);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(8,0.00605138);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(9,0.0009130959);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(10,0.001006698);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(11,0.0007554135);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(12,0.0003077663);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(13,0.0006182212);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(16,6.042707e-05);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(1,0.009269175);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(2,0.009695936);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(3,0.006626156);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(4,0.005532046);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(5,0.005220918);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(6,0.002691684);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(7,0.001751547);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(8,0.001266854);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(9,0.0005430187);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(10,0.0005185182);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(11,0.0004722888);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(12,0.0003077663);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(13,0.0003860973);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(16,6.042707e-05);
   VbbHcc_algo_Sphericity_all_stack_12->SetEntries(3862);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Sphericity_all__428 = new TH1D("VbbHcc_algo_Sphericity_all__428","",25,0,1);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(1,1060201);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(2,968782);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(3,554591);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(4,308736);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(5,158375);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(6,68554);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(7,24682);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(8,9114);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(9,4004);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(10,2171);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(11,1246);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(12,815);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(13,520);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(14,369);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(15,282);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(16,206);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(17,124);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(18,82);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(19,49);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(20,24);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(21,12);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(22,1);
   VbbHcc_algo_Sphericity_all__428->SetEntries(3162964);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all__428->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all__428->SetLineWidth(2);
   VbbHcc_algo_Sphericity_all__428->SetMarkerStyle(20);
   VbbHcc_algo_Sphericity_all__428->SetMarkerSize(1.2);
   VbbHcc_algo_Sphericity_all__428->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all__428->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all__428->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all__428->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all__428->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all__428->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all__428->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all__428->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all__428->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all__428->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all__428->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all__428->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all__428->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all__428->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all__428->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Sphericity_all_fx1311[25] = {
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
   Double_t Graph_from_VbbHcc_algo_Sphericity_all_fy1311[25] = {
   2127727,
   2015331,
   1130624,
   637892.3,
   304251.1,
   136308.4,
   44052.85,
   13199.98,
   5000.259,
   3140.944,
   1618.492,
   1020.085,
   504.5632,
   390.7133,
   211.3602,
   446.396,
   783.7861,
   115.0198,
   51.77054,
   35.07023,
   2.26571,
   0.7203736,
   0.125603,
   0.04673127,
   0};
   Double_t Graph_from_VbbHcc_algo_Sphericity_all_fex1311[25] = {
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
   Double_t Graph_from_VbbHcc_algo_Sphericity_all_fey1311[25] = {
   32691.06,
   33608.55,
   29301.08,
   22565.51,
   7500.695,
   5239.17,
   3490.932,
   1341.123,
   680.9552,
   579.7908,
   334.966,
   311.1732,
   80.96971,
   63.26272,
   40.73252,
   240.5368,
   512.4119,
   27.87035,
   19.66347,
   12.08202,
   0.3502934,
   0.1977881,
   0.07869376,
   0.04673127,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_algo_Sphericity_all_fx1311,Graph_from_VbbHcc_algo_Sphericity_all_fy1311,Graph_from_VbbHcc_algo_Sphericity_all_fex1311,Graph_from_VbbHcc_algo_Sphericity_all_fey1311);
   gre->SetName("Graph_from_VbbHcc_algo_Sphericity_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Sphericity_all1311 = new TH1F("Graph_Graph_from_VbbHcc_algo_Sphericity_all1311","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->SetMaximum(2376459);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Sphericity_all1311);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Sphericity_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_algo_all->cd();
  
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
   
   TH1D *data_mc_ratio__429 = new TH1D("data_mc_ratio__429","",25,0,1);
   data_mc_ratio__429->SetBinContent(1,0.4982788);
   data_mc_ratio__429->SetBinContent(2,0.4807061);
   data_mc_ratio__429->SetBinContent(3,0.4905175);
   data_mc_ratio__429->SetBinContent(4,0.483994);
   data_mc_ratio__429->SetBinContent(5,0.5205405);
   data_mc_ratio__429->SetBinContent(6,0.5029332);
   data_mc_ratio__429->SetBinContent(7,0.5602815);
   data_mc_ratio__429->SetBinContent(8,0.6904553);
   data_mc_ratio__429->SetBinContent(9,0.8007586);
   data_mc_ratio__429->SetBinContent(10,0.6911934);
   data_mc_ratio__429->SetBinContent(11,0.7698524);
   data_mc_ratio__429->SetBinContent(12,0.7989529);
   data_mc_ratio__429->SetBinContent(13,1.030594);
   data_mc_ratio__429->SetBinContent(14,0.9444266);
   data_mc_ratio__429->SetBinContent(15,1.334215);
   data_mc_ratio__429->SetBinContent(16,0.4614737);
   data_mc_ratio__429->SetBinContent(17,0.1582064);
   data_mc_ratio__429->SetBinContent(18,0.7129206);
   data_mc_ratio__429->SetBinContent(19,0.9464842);
   data_mc_ratio__429->SetBinContent(20,0.6843411);
   data_mc_ratio__429->SetBinContent(21,5.296353);
   data_mc_ratio__429->SetBinContent(22,1.388169);
   data_mc_ratio__429->SetBinError(1,0.0004839252);
   data_mc_ratio__429->SetBinError(2,0.0004883898);
   data_mc_ratio__429->SetBinError(3,0.0006586703);
   data_mc_ratio__429->SetBinError(4,0.0008710565);
   data_mc_ratio__429->SetBinError(5,0.00130801);
   data_mc_ratio__429->SetBinError(6,0.001920852);
   data_mc_ratio__429->SetBinError(7,0.003566286);
   data_mc_ratio__429->SetBinError(8,0.007232377);
   data_mc_ratio__429->SetBinError(9,0.01265478);
   data_mc_ratio__429->SetBinError(10,0.01483439);
   data_mc_ratio__429->SetBinError(11,0.02180964);
   data_mc_ratio__429->SetBinError(12,0.0279861);
   data_mc_ratio__429->SetBinError(13,0.04519455);
   data_mc_ratio__429->SetBinError(14,0.04916488);
   data_mc_ratio__429->SetBinError(15,0.07945136);
   data_mc_ratio__429->SetBinError(16,0.0321524);
   data_mc_ratio__429->SetBinError(17,0.01420736);
   data_mc_ratio__429->SetBinError(18,0.07872891);
   data_mc_ratio__429->SetBinError(19,0.135212);
   data_mc_ratio__429->SetBinError(20,0.1396905);
   data_mc_ratio__429->SetBinError(21,1.528926);
   data_mc_ratio__429->SetBinError(22,1.388169);
   data_mc_ratio__429->SetMinimum(0.4);
   data_mc_ratio__429->SetMaximum(1.6);
   data_mc_ratio__429->SetEntries(72.3781);
   data_mc_ratio__429->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__429->SetLineColor(ci);
   data_mc_ratio__429->SetLineWidth(2);
   data_mc_ratio__429->SetMarkerStyle(20);
   data_mc_ratio__429->SetMarkerSize(1.2);
   data_mc_ratio__429->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__429->GetXaxis()->SetRange(1,25);
   data_mc_ratio__429->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__429->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__429->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__429->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__429->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__429->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__429->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__429->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__429->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__429->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__429->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__429->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__429->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__429->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__429->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__429->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__429->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1312[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1312[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1312[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1312[25] = {
   0.01536431,
   0.01667644,
   0.02591584,
   0.03537512,
   0.02465298,
   0.03843616,
   0.07924418,
   0.1016004,
   0.136184,
   0.1845913,
   0.2069618,
   0.3050463,
   0.1604749,
   0.161916,
   0.1927161,
   0.5388419,
   0.653765,
   0.2423091,
   0.3798197,
   0.3445092,
   0.1546065,
   0.2745633,
   0.6265275,
   1,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1312,Graph_from_mc_statistical_error_fy1312,Graph_from_mc_statistical_error_fex1312,Graph_from_mc_statistical_error_fey1312);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1312 = new TH1F("Graph_Graph_from_mc_statistical_error1312","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1312->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1312->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1312->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1312->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1312->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1312->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1312->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1312->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1312->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1312->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1312->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1312->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1312);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_algo_all->cd();
   Sphericity_algo_all->Modified();
   Sphericity_algo_all->cd();
   Sphericity_algo_all->SetSelected(Sphericity_algo_all);
}
