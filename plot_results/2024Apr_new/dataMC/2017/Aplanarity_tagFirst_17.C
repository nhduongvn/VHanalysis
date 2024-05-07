#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_17()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_17/Aplanarity_tagFirst_17
//=========  (Wed Apr 24 14:26:52 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagFirst_17 = new TCanvas("Aplanarity_tagFirst_17", "Aplanarity_tagFirst_17",0,0,600,600);
   Aplanarity_tagFirst_17->SetHighLightColor(2);
   Aplanarity_tagFirst_17->Range(0,0,1,1);
   Aplanarity_tagFirst_17->SetFillColor(0);
   Aplanarity_tagFirst_17->SetFillStyle(4000);
   Aplanarity_tagFirst_17->SetBorderMode(0);
   Aplanarity_tagFirst_17->SetBorderSize(2);
   Aplanarity_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-3559.205,1.052419,3555656);
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
   st->SetMaximum(3199735);
   
   TH1F *st_stack_47 = new TH1F("st_stack_47","",50,0,1);
   st_stack_47->SetMinimum(0.01);
   st_stack_47->SetMaximum(3199735);
   st_stack_47->SetDirectory(nullptr);
   st_stack_47->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_47->SetLineColor(ci);
   st_stack_47->SetLineWidth(0);
   st_stack_47->GetXaxis()->SetRange(1,50);
   st_stack_47->GetXaxis()->SetLabelFont(42);
   st_stack_47->GetXaxis()->SetTitleOffset(1);
   st_stack_47->GetXaxis()->SetTitleFont(42);
   st_stack_47->GetYaxis()->SetTitle("Events/0.02");
   st_stack_47->GetYaxis()->SetLabelFont(42);
   st_stack_47->GetYaxis()->SetLabelSize(0.05);
   st_stack_47->GetYaxis()->SetTitleSize(0.057);
   st_stack_47->GetYaxis()->SetTitleOffset(1.2);
   st_stack_47->GetYaxis()->SetTitleFont(42);
   st_stack_47->GetZaxis()->SetLabelFont(42);
   st_stack_47->GetZaxis()->SetTitleOffset(1);
   st_stack_47->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_47);
   
   
   TH1D *VH_tagFirst_Aplanarity_stack_1 = new TH1D("VH_tagFirst_Aplanarity_stack_1","",50,0,1);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(1,1162948);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(2,138169);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(3,35401.8);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(4,13094.89);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(5,7288.662);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(6,1929.784);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(7,1016.281);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(8,793.9345);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(9,513.6877);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(10,332.849);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(11,191.9807);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(12,37.5872);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(13,46.39949);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(14,39.69338);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(15,1.243503);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(16,22.3195);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(17,6.497166);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(18,42.61565);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(1,48223.37);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(2,5206.015);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(3,2878.941);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(4,1641.769);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(5,3048.509);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(6,395.3557);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(7,277.427);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(8,264.1429);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(9,190.8608);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(10,204.6385);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(11,60.71607);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(12,23.242);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(13,18.63161);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(14,23.30753);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(15,1.243503);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(16,15.77427);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(17,5.998925);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(18,30.21284);
   VH_tagFirst_Aplanarity_stack_1->SetEntries(100545);

   ci = TColor::GetColor("#ff6600");
   VH_tagFirst_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_1->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_1,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_2 = new TH1D("VH_tagFirst_Aplanarity_stack_2","",50,0,1);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(1,14222.7);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(2,1989.535);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(3,529.0892);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(4,170.1303);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(5,75.99433);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(6,36.68274);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(7,24.4374);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(8,11.1248);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(9,5.692391);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(10,4.183269);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(11,3.776016);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(12,2.829207);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(13,1.520672);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(14,1.189785);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(15,0.3350108);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(16,0.1563311);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(17,0.1972789);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(18,0.5725584);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(19,0.174864);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(1,55.03753);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(2,20.55328);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(3,10.86691);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(4,5.937676);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(5,3.907669);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(6,2.752136);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(7,2.94734);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(8,1.239501);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(9,0.9674291);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(10,0.9018327);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(11,1.069592);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(12,0.8774675);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(13,0.8806469);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(14,0.4961702);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(15,0.2296436);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(16,0.0808158);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(17,0.1863264);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(18,0.4127804);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(19,0.174864);
   VH_tagFirst_Aplanarity_stack_2->SetEntries(217109);

   ci = TColor::GetColor("#660066");
   VH_tagFirst_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_2->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_2,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_3 = new TH1D("VH_tagFirst_Aplanarity_stack_3","",50,0,1);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(0,0.06037143);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(1,246185.4);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(2,33684.98);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(3,8848.518);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(4,3248.643);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(5,1452.129);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(6,753.4023);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(7,420.4521);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(8,250.6498);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(9,157.1858);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(10,99.29254);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(11,64.45364);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(12,41.02817);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(13,28.27082);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(14,16.91558);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(15,11.36347);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(16,5.701526);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(17,3.987558);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(18,1.708084);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(19,0.6487655);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(20,0.7707047);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(21,0.342553);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(22,0.2625189);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(0,0.06037143);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(1,145.8421);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(2,53.37438);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(3,27.52827);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(4,16.79717);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(5,11.21834);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(6,8.126389);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(7,6.024896);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(8,4.871048);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(9,3.820218);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(10,3.010269);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(11,2.321045);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(12,1.891846);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(13,1.659012);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(14,1.181628);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(15,1.006711);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(16,0.6406368);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(17,0.6764422);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(18,0.3354595);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(19,0.1969572);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(20,0.2049936);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(21,0.1815611);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(22,0.1867929);
   VH_tagFirst_Aplanarity_stack_3->SetEntries(4779765);

   ci = TColor::GetColor("#cc00cc");
   VH_tagFirst_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_3->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_3,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_4 = new TH1D("VH_tagFirst_Aplanarity_stack_4","",50,0,1);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(1,10498.02);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(2,1162.777);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(3,310.3444);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(4,110.9534);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(5,43.52438);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(6,18.10214);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(7,10.58891);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(8,6.028076);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(9,4.003559);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(10,2.918233);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(11,2.608695);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(12,0.532465);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(13,0.2994622);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(14,0.4719848);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(15,0.1256136);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(16,0.1196562);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(17,0.1095954);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(1,66.67045);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(2,24.85885);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(3,15.77235);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(4,7.846444);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(5,3.518739);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(6,1.80025);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(7,1.773086);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(8,2.193356);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(9,0.8917546);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(10,0.6663225);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(11,0.9078586);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(12,0.2374795);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(13,0.1454672);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(14,0.2100241);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(15,0.08952342);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(16,0.1196562);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(17,0.07779615);
   VH_tagFirst_Aplanarity_stack_4->SetEntries(95666);

   ci = TColor::GetColor("#00cccc");
   VH_tagFirst_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_4->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_4,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_5 = new TH1D("VH_tagFirst_Aplanarity_stack_5","",50,0,1);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(1,5636.324);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(2,597.7744);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(3,144.5034);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(4,58.5119);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(5,21.87997);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(6,14.89991);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(7,5.833749);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(8,3.097739);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(9,4.204594);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(10,0.5917508);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(11,0.9089676);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(12,0.5641948);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(13,0.09794738);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(14,0.07729362);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(16,0.03250475);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(1,78.734);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(2,27.98134);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(3,14.07254);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(4,7.709975);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(5,3.739166);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(6,5.076073);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(7,1.690973);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(8,0.9112939);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(9,2.580872);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(10,0.3002626);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(11,0.2695729);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(12,0.3367743);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(13,0.08399441);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(14,0.07290546);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(16,0.03250475);
   VH_tagFirst_Aplanarity_stack_5->SetEntries(45005);

   ci = TColor::GetColor("#ff99cc");
   VH_tagFirst_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_5->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_5,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_6 = new TH1D("VH_tagFirst_Aplanarity_stack_6","",50,0,1);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(1,52.30731);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(2,7.971285);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(3,1.550963);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(4,0.7578314);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(6,0.2859277);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(8,0.1846067);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(1,4.641267);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(2,1.849717);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(3,0.8332663);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(4,0.3967743);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(6,0.2859277);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(8,0.1846067);
   VH_tagFirst_Aplanarity_stack_6->SetEntries(193);

   ci = TColor::GetColor("#9933ff");
   VH_tagFirst_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_6->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_6,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_7 = new TH1D("VH_tagFirst_Aplanarity_stack_7","",50,0,1);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(1,131.6403);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(2,15.4772);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(3,2.753447);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(4,1.357695);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(5,0.2061255);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(6,0.8384539);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(8,0.1216993);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(11,0.5424682);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(1,6.587636);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(2,2.349223);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(3,1.04625);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(4,0.5565141);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(5,0.2061255);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(6,0.6151703);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(8,0.1216993);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(11,0.5424682);
   VH_tagFirst_Aplanarity_stack_7->SetEntries(620);

   ci = TColor::GetColor("#3399ff");
   VH_tagFirst_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_7->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_7,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_8 = new TH1D("VH_tagFirst_Aplanarity_stack_8","",50,0,1);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(1,110.8746);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(2,11.61009);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(3,4.354695);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(4,0.7375593);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(6,0.7626167);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(1,6.443799);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(2,1.88746);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(3,1.368426);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(4,0.4480842);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(6,0.7626167);
   VH_tagFirst_Aplanarity_stack_8->SetEntries(481);

   ci = TColor::GetColor("#33ff99");
   VH_tagFirst_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_8->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_8,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_9 = new TH1D("VH_tagFirst_Aplanarity_stack_9","",50,0,1);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(1,55.01505);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(2,5.370064);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(3,1.271904);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(4,0.4110257);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(5,0.206049);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(6,0.06894345);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(7,0.05521976);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(8,0.01337757);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(9,0.01468712);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(10,0.01783036);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(11,0.004666374);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(12,0.01129395);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(13,0.003274319);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(19,0.005490325);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(1,0.3477173);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(2,0.1100381);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(3,0.05370479);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(4,0.03089157);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(5,0.02189902);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(6,0.01191952);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(7,0.01171939);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(8,0.004385031);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(9,0.005100606);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(10,0.009567786);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(11,0.002735942);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(12,0.007022197);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(13,0.002473239);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(19,0.003540414);
   VH_tagFirst_Aplanarity_stack_9->SetEntries(39482);

   ci = TColor::GetColor("#cccc00");
   VH_tagFirst_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_9->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_9,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_10 = new TH1D("VH_tagFirst_Aplanarity_stack_10","",50,0,1);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(1,37.96204);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(2,4.256748);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(3,1.029375);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(4,0.3562219);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(5,0.1728054);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(6,0.07233187);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(7,0.05204137);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(8,0.02483336);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(9,0.01377716);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(10,0.008728683);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(11,0.005687442);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(12,0.003340645);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(13,0.002118087);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(14,0.002092572);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(15,0.0004278628);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(16,0.0005089974);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(17,0.0003482848);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(19,0.0008130978);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(20,0.0004072878);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(21,0.0003700873);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(1,0.1146038);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(2,0.03786954);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(3,0.01865709);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(4,0.01115302);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(5,0.00782307);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(6,0.004968453);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(7,0.004300942);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(8,0.002963182);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(9,0.00220812);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(10,0.001669198);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(11,0.001542265);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(12,0.001052825);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(13,0.0008733103);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(14,0.0008583249);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(15,0.0004278628);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(16,0.0003700688);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(17,0.0003482848);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(19,0.0005780722);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(20,0.0004072878);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(21,0.0003700873);
   VH_tagFirst_Aplanarity_stack_10->SetEntries(134198);

   ci = TColor::GetColor("#0000cc");
   VH_tagFirst_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_10->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_10,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_11 = new TH1D("VH_tagFirst_Aplanarity_stack_11","",50,0,1);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(1,1.310505);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(2,0.1171994);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(3,0.02448301);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(4,0.01407391);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(5,0.003769742);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(6,0.001290917);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(7,0.0001481517);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(9,0.001064883);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(11,0.0009156332);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(1,0.04545116);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(2,0.01369033);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(3,0.006655205);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(4,0.004561593);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(5,0.002177518);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(6,0.001290917);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(7,0.0001481517);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(9,0.001064883);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(11,0.0009156332);
   VH_tagFirst_Aplanarity_stack_11->SetEntries(1123);

   ci = TColor::GetColor("#cc0000");
   VH_tagFirst_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_11->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_11,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_12 = new TH1D("VH_tagFirst_Aplanarity_stack_12","",50,0,1);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(1,0.6510664);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(2,0.07794274);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(3,0.01720281);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(4,0.005566444);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(5,0.00250862);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(6,0.0002958805);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(7,0.0007757456);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(8,0.001198057);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(10,0.0001482523);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(11,0.0008430725);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(1,0.01166563);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(2,0.004217915);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(3,0.001941965);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(4,0.001157414);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(5,0.000690103);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(6,0.0002215981);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(7,0.000353572);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(8,0.0006203505);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(10,0.0001482523);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(11,0.0004308263);
   VH_tagFirst_Aplanarity_stack_12->SetEntries(4223);

   ci = TColor::GetColor("#00cc00");
   VH_tagFirst_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_12->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_tagFirst_Aplanarity__93 = new TH1D("VH_tagFirst_Aplanarity__93","",50,0,1);
   VH_tagFirst_Aplanarity__93->SetBinContent(1,859050);
   VH_tagFirst_Aplanarity__93->SetBinContent(2,113341);
   VH_tagFirst_Aplanarity__93->SetBinContent(3,29193);
   VH_tagFirst_Aplanarity__93->SetBinContent(4,10083);
   VH_tagFirst_Aplanarity__93->SetBinContent(5,4156);
   VH_tagFirst_Aplanarity__93->SetBinContent(6,2006);
   VH_tagFirst_Aplanarity__93->SetBinContent(7,1114);
   VH_tagFirst_Aplanarity__93->SetBinContent(8,606);
   VH_tagFirst_Aplanarity__93->SetBinContent(9,366);
   VH_tagFirst_Aplanarity__93->SetBinContent(10,242);
   VH_tagFirst_Aplanarity__93->SetBinContent(11,156);
   VH_tagFirst_Aplanarity__93->SetBinContent(12,87);
   VH_tagFirst_Aplanarity__93->SetBinContent(13,62);
   VH_tagFirst_Aplanarity__93->SetBinContent(14,37);
   VH_tagFirst_Aplanarity__93->SetBinContent(15,26);
   VH_tagFirst_Aplanarity__93->SetBinContent(16,13);
   VH_tagFirst_Aplanarity__93->SetBinContent(17,7);
   VH_tagFirst_Aplanarity__93->SetBinContent(18,9);
   VH_tagFirst_Aplanarity__93->SetBinContent(19,1);
   VH_tagFirst_Aplanarity__93->SetBinContent(21,1);
   VH_tagFirst_Aplanarity__93->SetEntries(1020605);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__93->SetLineColor(ci);
   VH_tagFirst_Aplanarity__93->SetLineWidth(2);
   VH_tagFirst_Aplanarity__93->SetMarkerStyle(20);
   VH_tagFirst_Aplanarity__93->SetMarkerSize(1.2);
   VH_tagFirst_Aplanarity__93->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity__93->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__93->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__93->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__93->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__93->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__93->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__93->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__93->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__93->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_Aplanarity_fx1093[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fy1093[50] = { 1439881, 175648.9, 45245.26, 16686.77, 8882.781, 2754.901, 1477.701, 1065.181, 684.8036, 439.8615, 264.2826, 82.55587, 76.59379, 58.35012, 13.06802, 28.33003, 10.79195,
   44.8963, 0.829933, 0.771112, 0.3429231, 0.2625189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fex1093[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fey1093[50] = { 48223.73, 5206.465, 2879.171, 1641.902, 3048.536, 395.4868, 277.5189, 264.2015, 190.921, 204.6639, 60.77963, 23.33902, 18.7268, 23.3438, 1.618801, 15.78797, 6.040318,
   30.21752, 0.2634055, 0.204994, 0.1815615, 0.1867929, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_tagFirst_Aplanarity_fx1093,Graph_from_VH_tagFirst_Aplanarity_fy1093,Graph_from_VH_tagFirst_Aplanarity_fex1093,Graph_from_VH_tagFirst_Aplanarity_fey1093);
   gre->SetName("Graph_from_VH_tagFirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_Aplanarity1093 = new TH1F("Graph_Graph_from_VH_tagFirst_Aplanarity1093","",100,0,1.1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1093->SetMinimum(0);
   Graph_Graph_from_VH_tagFirst_Aplanarity1093->SetMaximum(1636915);
   Graph_Graph_from_VH_tagFirst_Aplanarity1093->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_Aplanarity1093->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_Aplanarity1093->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_Aplanarity1093->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1093->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1093->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1093->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1093->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1093->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_Aplanarity1093);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_Aplanarity","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagFirst_Aplanarity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_tagFirst_17->cd();
  
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
   
   TH1D *data_mc_ratio__94 = new TH1D("data_mc_ratio__94","",50,0,1);
   data_mc_ratio__94->SetBinContent(1,0.596612);
   data_mc_ratio__94->SetBinContent(2,0.6452701);
   data_mc_ratio__94->SetBinContent(3,0.6452168);
   data_mc_ratio__94->SetBinContent(4,0.6042513);
   data_mc_ratio__94->SetBinContent(5,0.4678715);
   data_mc_ratio__94->SetBinContent(6,0.7281568);
   data_mc_ratio__94->SetBinContent(7,0.7538737);
   data_mc_ratio__94->SetBinContent(8,0.5689176);
   data_mc_ratio__94->SetBinContent(9,0.5344598);
   data_mc_ratio__94->SetBinContent(10,0.5501732);
   data_mc_ratio__94->SetBinContent(11,0.5902771);
   data_mc_ratio__94->SetBinContent(12,1.053832);
   data_mc_ratio__94->SetBinContent(13,0.8094651);
   data_mc_ratio__94->SetBinContent(14,0.6341032);
   data_mc_ratio__94->SetBinContent(15,1.989589);
   data_mc_ratio__94->SetBinContent(16,0.4588771);
   data_mc_ratio__94->SetBinContent(17,0.6486318);
   data_mc_ratio__94->SetBinContent(18,0.200462);
   data_mc_ratio__94->SetBinContent(19,1.204917);
   data_mc_ratio__94->SetBinContent(21,2.916106);
   data_mc_ratio__94->SetBinError(1,0.0006436989);
   data_mc_ratio__94->SetBinError(2,0.001916673);
   data_mc_ratio__94->SetBinError(3,0.003776298);
   data_mc_ratio__94->SetBinError(4,0.006017591);
   data_mc_ratio__94->SetBinError(5,0.00725753);
   data_mc_ratio__94->SetBinError(6,0.01625771);
   data_mc_ratio__94->SetBinError(7,0.02258687);
   data_mc_ratio__94->SetBinError(8,0.0231107);
   data_mc_ratio__94->SetBinError(9,0.02793666);
   data_mc_ratio__94->SetBinError(10,0.03536647);
   data_mc_ratio__94->SetBinError(11,0.04725999);
   data_mc_ratio__94->SetBinError(12,0.1129826);
   data_mc_ratio__94->SetBinError(13,0.1028022);
   data_mc_ratio__94->SetBinError(14,0.1042459);
   data_mc_ratio__94->SetBinError(15,0.3901906);
   data_mc_ratio__94->SetBinError(16,0.1272696);
   data_mc_ratio__94->SetBinError(17,0.2451598);
   data_mc_ratio__94->SetBinError(18,0.06682066);
   data_mc_ratio__94->SetBinError(19,1.204917);
   data_mc_ratio__94->SetBinError(21,2.916106);
   data_mc_ratio__94->SetMinimum(0.4);
   data_mc_ratio__94->SetMaximum(1.6);
   data_mc_ratio__94->SetEntries(20.54285);
   data_mc_ratio__94->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__94->SetLineColor(ci);
   data_mc_ratio__94->SetLineWidth(2);
   data_mc_ratio__94->SetMarkerStyle(20);
   data_mc_ratio__94->SetMarkerSize(1.2);
   data_mc_ratio__94->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__94->GetXaxis()->SetRange(1,50);
   data_mc_ratio__94->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__94->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__94->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__94->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__94->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__94->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__94->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__94->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__94->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__94->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__94->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__94->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__94->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__94->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__94->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__94->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1094[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1094[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1094[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1094[50] = { 0.03349148, 0.02964131, 0.06363476, 0.09839547, 0.3431961, 0.1435575, 0.1878045, 0.2480344, 0.2787968, 0.4652917, 0.2299797, 0.2827057, 0.244495, 0.4000643, 0.123875, 0.5572876, 0.559706,
   0.6730516, 0.3173816, 0.265842, 0.5294526, 0.7115409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1094,Graph_from_mc_statistical_error_fy1094,Graph_from_mc_statistical_error_fex1094,Graph_from_mc_statistical_error_fey1094);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1094 = new TH1F("Graph_Graph_from_mc_statistical_error1094","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1094->SetMinimum(0.1461509);
   Graph_Graph_from_mc_statistical_error1094->SetMaximum(1.853849);
   Graph_Graph_from_mc_statistical_error1094->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1094->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1094->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1094);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagFirst_17->cd();
   Aplanarity_tagFirst_17->Modified();
   Aplanarity_tagFirst_17->cd();
   Aplanarity_tagFirst_17->SetSelected(Aplanarity_tagFirst_17);
}
