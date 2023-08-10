void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu Aug 10 12:27:52 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(0,0,1,1);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetFillStyle(4000);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetFrameFillStyle(1000);
   Sphericity_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-180.0001,1.052419,179830.1);
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
   st->SetMaximum(154122.9);
   
   TH1F *st_stack_57 = new TH1F("st_stack_57","",25,0,1);
   st_stack_57->SetMinimum(0.01);
   st_stack_57->SetMaximum(161829.1);
   st_stack_57->SetDirectory(0);
   st_stack_57->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_57->SetLineColor(ci);
   st_stack_57->GetXaxis()->SetRange(1,25);
   st_stack_57->GetXaxis()->SetLabelFont(42);
   st_stack_57->GetXaxis()->SetLabelSize(0.035);
   st_stack_57->GetXaxis()->SetTitleSize(0.035);
   st_stack_57->GetXaxis()->SetTitleFont(42);
   st_stack_57->GetYaxis()->SetTitle("Events/0.04");
   st_stack_57->GetYaxis()->SetLabelFont(42);
   st_stack_57->GetYaxis()->SetLabelSize(0.05);
   st_stack_57->GetYaxis()->SetTitleSize(0.057);
   st_stack_57->GetYaxis()->SetTitleOffset(1.2);
   st_stack_57->GetYaxis()->SetTitleFont(42);
   st_stack_57->GetZaxis()->SetLabelFont(42);
   st_stack_57->GetZaxis()->SetLabelSize(0.035);
   st_stack_57->GetZaxis()->SetTitleSize(0.035);
   st_stack_57->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_57);
   
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,63773.95);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,49597.51);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,25697.06);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,17967.34);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,6137.757);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,5308.496);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,1278.491);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,1319.933);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,631.3878);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,220.1743);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,223.176);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,194.4227);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,138.8705);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,98.6687);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,79.55365);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,84.65874);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,62.54926);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,44.93635);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,16.93504);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,4777.263);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,3960.582);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,3061.577);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,2204.375);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,880.7675);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,1617.705);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,294.0865);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,395.0742);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,276.3312);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,51.36701);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,58.25568);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,49.68893);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,38.28686);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,40.53088);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,20.9888);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,28.63488);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,32.69202);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,24.69515);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,8.49773);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(9717);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,253.104);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,194.6144);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,118.3434);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,71.55787);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,37.81137);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,22.55558);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,14.2701);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,7.630054);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,6.68378);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,3.182839);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,2.069571);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,1.406138);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,1.456863);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,1.157717);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,1.303652);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,0.4432982);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,0.494024);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.1451856);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.1312021);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,6.247675);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,5.451646);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,4.234591);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,3.389801);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,2.480071);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,1.935843);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,1.518708);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,1.086326);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,1.062207);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,0.7070786);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.6222745);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.4271791);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.4301803);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.4151227);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.4870498);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.2822567);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.2867786);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.08401713);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.07574959);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(9491);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_3 = new TH1D("VbbHcc_tags_Sphericity_stack_3","",25,0,1);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(1,4529.961);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(2,3836.17);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(3,2192.737);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(4,1259.53);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(5,739.8592);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(6,429.0144);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(7,255.0486);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(8,158.5587);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(9,103.9425);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(10,73.27533);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(11,51.55581);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(12,35.03547);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(13,25.75892);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(14,19.58744);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(15,14.40097);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(16,12.12151);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(17,8.301374);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(18,5.291689);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(19,2.735153);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(20,1.459324);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(21,0.5571593);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(22,0.06964491);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(1,16.8705);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(2,15.54485);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(3,11.75089);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(4,8.904286);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(5,6.830191);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(6,5.19597);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(7,3.998501);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(8,3.153987);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(9,2.550231);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(10,2.145494);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(11,1.805484);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(12,1.488597);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(13,1.274636);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(14,1.109906);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(15,0.9481104);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(16,0.8734456);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(17,0.7207292);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(18,0.5795202);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(19,0.4142668);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(20,0.3032688);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(21,0.1969856);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(22,0.06964491);
   VbbHcc_tags_Sphericity_stack_3->SetEntries(225965);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_4 = new TH1D("VbbHcc_tags_Sphericity_stack_4","",25,0,1);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(1,684.1088);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(2,550.731);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(3,338.1958);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(4,209.2546);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(5,92.78925);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(6,56.29505);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(7,24.26228);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(8,15.18613);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(9,11.58696);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(10,8.677193);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(11,4.979063);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(12,3.991354);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(13,2.126254);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(14,2.238928);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(15,2.438653);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(16,1.971138);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(17,1.916291);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(18,0.6343579);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(19,0.332875);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(20,0.066575);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(21,0.066575);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(1,19.89556);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(2,19.22574);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(3,16.78688);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(4,13.29348);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(5,4.656742);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(6,5.373266);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(7,1.850161);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(8,1.31251);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(9,1.136507);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(10,1.173137);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(11,0.764968);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(12,0.795005);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(13,0.3894313);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(14,0.5239528);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(15,0.5364916);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(16,0.4450796);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(17,0.4419986);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(18,0.2121021);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(19,0.1488662);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(20,0.066575);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(21,0.066575);
   VbbHcc_tags_Sphericity_stack_4->SetEntries(14953);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_5 = new TH1D("VbbHcc_tags_Sphericity_stack_5","",25,0,1);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(1,77.7091);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(2,37.97597);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(3,30.88768);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(4,15.42126);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(5,11.71306);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(6,4.289327);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(7,3.75234);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(8,0.9756776);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(9,1.561642);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(10,1.50082);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(11,0.6906038);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(12,0.5891395);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(13,1.948528);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(14,0.08695243);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(15,0.0875934);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(16,0.2290331);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(17,0.008204514);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(18,0.06354638);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(19,0.07874792);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(20,0.146767);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(1,7.99002);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(2,3.573757);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(3,6.612982);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(4,2.164437);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(5,2.038436);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(6,0.5759692);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(7,1.173332);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(8,0.2711008);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(9,0.5188715);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(10,1.057443);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(11,0.21107);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(12,0.2256489);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(13,1.112003);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(14,0.07181854);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(15,0.0718195);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(16,0.1194415);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(17,0.007783074);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(18,0.06333308);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(19,0.07139557);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(20,0.146767);
   VbbHcc_tags_Sphericity_stack_5->SetEntries(3420);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_6 = new TH1D("VbbHcc_tags_Sphericity_stack_6","",25,0,1);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(1,0.2687386);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(2,0.1343693);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(3,0.5374772);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(4,0.2687386);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(5,0.1343693);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(7,0.1343693);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(1,0.1900269);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(2,0.1343693);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(3,0.2687386);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(4,0.1900269);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(5,0.1343693);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(7,0.1343693);
   VbbHcc_tags_Sphericity_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_7 = new TH1D("VbbHcc_tags_Sphericity_stack_7","",25,0,1);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(1,1.526821);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(2,1.417762);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(3,0.4362346);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(4,0.8724691);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(5,0.2181173);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(6,0.1090586);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(7,0.3271759);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(9,0.1090586);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(12,0.1090586);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(14,0.1090586);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(1,0.4080601);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(2,0.3932165);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(3,0.2181173);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(4,0.3084644);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(5,0.1542322);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(6,0.1090586);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(7,0.1888951);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(9,0.1090586);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(12,0.1090586);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(14,0.1090586);
   VbbHcc_tags_Sphericity_stack_7->SetEntries(48);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_8 = new TH1D("VbbHcc_tags_Sphericity_stack_8","",25,0,1);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(1,16.53809);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(2,11.18753);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(3,5.350557);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(4,4.134522);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(5,1.945657);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(6,2.188864);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(8,0.2432072);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(12,0.2432072);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(16,0.2432072);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(1,2.005538);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(2,1.649511);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(3,1.140743);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(4,1.002769);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(5,0.6878937);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(6,0.7296215);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(8,0.2432072);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(12,0.2432072);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(16,0.2432072);
   VbbHcc_tags_Sphericity_stack_8->SetEntries(173);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_9 = new TH1D("VbbHcc_tags_Sphericity_stack_9","",25,0,1);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(1,12.36693);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(2,11.11801);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(3,6.199266);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(4,4.13834);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(5,2.750649);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(6,1.378073);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(7,0.4987441);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(8,0.2170842);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(9,0.1538825);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(10,0.1167858);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(11,0.06182779);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(12,0.04396642);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(13,0.03847062);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(14,0.02610506);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(15,0.02610506);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(16,0.01511346);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(17,0.01099161);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(18,0.01099161);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(19,0.002747902);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(1,0.1303517);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(2,0.1235945);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(3,0.09229023);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(4,0.07540474);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(5,0.06147566);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(6,0.04351326);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(7,0.02617728);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(8,0.01727029);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(9,0.01454053);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(10,0.0126672);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(11,0.009216742);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(12,0.007772239);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(13,0.007270264);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(14,0.005988913);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(15,0.005988913);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(16,0.004556879);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(17,0.00388612);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(18,0.00388612);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(19,0.00194306);
   VbbHcc_tags_Sphericity_stack_9->SetEntries(28512);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_10 = new TH1D("VbbHcc_tags_Sphericity_stack_10","",25,0,1);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(1,5.734468);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(2,4.799251);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(3,2.65348);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(4,1.741895);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(5,1.040124);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(6,0.5929245);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(7,0.3107841);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(8,0.1772329);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(9,0.1335512);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(10,0.09846271);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(11,0.06623855);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(12,0.05513912);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(13,0.04403968);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(14,0.03473048);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(15,0.03401439);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(16,0.02112473);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(17,0.01539599);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(18,0.0139638);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(19,0.006086786);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(20,0.001432185);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(21,0.001074139);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(22,0.0007160924);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(23,0.0003580462);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(1,0.0453123);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(2,0.04145303);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(3,0.03082318);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(4,0.02497356);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(5,0.01929799);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(6,0.01457033);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(7,0.0105487);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(8,0.007966025);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(9,0.006915021);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(10,0.005937525);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(11,0.004869955);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(12,0.004443237);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(13,0.003970925);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(14,0.003526346);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(15,0.003489803);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(16,0.002750205);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(17,0.002347866);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(18,0.002235998);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(19,0.001476262);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(20,0.0007160924);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(21,0.0006201542);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(22,0.0005063538);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(23,0.0003580462);
   VbbHcc_tags_Sphericity_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_11 = new TH1D("VbbHcc_tags_Sphericity_stack_11","",25,0,1);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(1,0.0382901);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(2,0.04376012);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(3,0.008205022);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(4,0.005470015);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(6,0.002735007);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(1,0.01023346);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(2,0.01094003);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(3,0.004737172);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(4,0.003867885);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(6,0.002735007);
   VbbHcc_tags_Sphericity_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_12 = new TH1D("VbbHcc_tags_Sphericity_stack_12","",25,0,1);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(1,0.01643423);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(2,0.01286157);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(3,0.004644456);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(4,0.005001722);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(5,0.002858127);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(6,0.001071798);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(7,0.0007145317);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(8,0.0003572658);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(9,0.0007145317);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(12,0.0007145317);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(1,0.002423095);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(2,0.002143595);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(3,0.00128814);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(4,0.001336766);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(5,0.0010105);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(6,0.0006188026);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(7,0.0005052502);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(8,0.0003572658);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(9,0.0005052502);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(12,0.0005052502);
   VbbHcc_tags_Sphericity_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Sphericity__155 = new TH1D("VbbHcc_tags_Sphericity__155","",25,0,1);
   VbbHcc_tags_Sphericity__155->SetBinContent(1,34366);
   VbbHcc_tags_Sphericity__155->SetBinContent(2,24832);
   VbbHcc_tags_Sphericity__155->SetBinContent(3,14397);
   VbbHcc_tags_Sphericity__155->SetBinContent(4,8611);
   VbbHcc_tags_Sphericity__155->SetBinContent(5,5205);
   VbbHcc_tags_Sphericity__155->SetBinContent(6,3149);
   VbbHcc_tags_Sphericity__155->SetBinContent(7,1831);
   VbbHcc_tags_Sphericity__155->SetBinContent(8,1162);
   VbbHcc_tags_Sphericity__155->SetBinContent(9,807);
   VbbHcc_tags_Sphericity__155->SetBinContent(10,574);
   VbbHcc_tags_Sphericity__155->SetBinContent(11,439);
   VbbHcc_tags_Sphericity__155->SetBinContent(12,297);
   VbbHcc_tags_Sphericity__155->SetBinContent(13,247);
   VbbHcc_tags_Sphericity__155->SetBinContent(14,176);
   VbbHcc_tags_Sphericity__155->SetBinContent(15,153);
   VbbHcc_tags_Sphericity__155->SetBinContent(16,111);
   VbbHcc_tags_Sphericity__155->SetBinContent(17,89);
   VbbHcc_tags_Sphericity__155->SetBinContent(18,63);
   VbbHcc_tags_Sphericity__155->SetBinContent(19,25);
   VbbHcc_tags_Sphericity__155->SetBinContent(20,8);
   VbbHcc_tags_Sphericity__155->SetBinContent(21,2);
   VbbHcc_tags_Sphericity__155->SetBinContent(22,1);
   VbbHcc_tags_Sphericity__155->SetEntries(96569);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity__155->SetLineColor(ci);
   VbbHcc_tags_Sphericity__155->SetLineWidth(2);
   VbbHcc_tags_Sphericity__155->SetMarkerStyle(20);
   VbbHcc_tags_Sphericity__155->SetMarkerSize(1.2);
   VbbHcc_tags_Sphericity__155->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity__155->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__155->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__155->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__155->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__155->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__155->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__155->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__155->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity__155->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__155->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__155->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__155->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__155->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__155->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Sphericity_fx1113[25] = {
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
   Double_t Graph_from_VbbHcc_tags_Sphericity_fy1113[25] = {
   69355.32,
   54245.71,
   28392.42,
   19534.27,
   7026.022,
   5824.923,
   1577.096,
   1502.922,
   755.5599,
   307.0258,
   282.5991,
   235.8969,
   170.2436,
   121.9096,
   97.84464,
   99.70317,
   73.29554,
   51.09608,
   20.22185,
   1.674099,
   0.6248084,
   0.070361,
   0.0003580462,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_Sphericity_fex1113[25] = {
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
   Double_t Graph_from_VbbHcc_tags_Sphericity_fey1113[25] = {
   4777.345,
   3960.665,
   3061.656,
   2204.437,
   880.8124,
   1617.723,
   294.1259,
   395.0907,
   276.3478,
   51.44091,
   58.29237,
   49.72064,
   38.3286,
   40.5518,
   21.02282,
   28.65433,
   32.70421,
   24.70309,
   8.509762,
   0.3434316,
   0.2079325,
   0.06964675,
   0.0003580462,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_tags_Sphericity_fx1113,Graph_from_VbbHcc_tags_Sphericity_fy1113,Graph_from_VbbHcc_tags_Sphericity_fex1113,Graph_from_VbbHcc_tags_Sphericity_fey1113);
   gre->SetName("Graph_from_VbbHcc_tags_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Sphericity1113 = new TH1F("Graph_Graph_from_VbbHcc_tags_Sphericity1113","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->SetMaximum(81545.93);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Sphericity1113);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Sphericity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__156 = new TH1D("data_mc_ratio__156","",25,0,1);
   data_mc_ratio__156->SetBinContent(1,0.4955063);
   data_mc_ratio__156->SetBinContent(2,0.4577689);
   data_mc_ratio__156->SetBinContent(3,0.507072);
   data_mc_ratio__156->SetBinContent(4,0.440815);
   data_mc_ratio__156->SetBinContent(5,0.7408175);
   data_mc_ratio__156->SetBinContent(6,0.540608);
   data_mc_ratio__156->SetBinContent(7,1.160995);
   data_mc_ratio__156->SetBinContent(8,0.7731606);
   data_mc_ratio__156->SetBinContent(9,1.068082);
   data_mc_ratio__156->SetBinContent(10,1.86955);
   data_mc_ratio__156->SetBinContent(11,1.553437);
   data_mc_ratio__156->SetBinContent(12,1.259024);
   data_mc_ratio__156->SetBinContent(13,1.450862);
   data_mc_ratio__156->SetBinContent(14,1.443692);
   data_mc_ratio__156->SetBinContent(15,1.563703);
   data_mc_ratio__156->SetBinContent(16,1.113305);
   data_mc_ratio__156->SetBinContent(17,1.214262);
   data_mc_ratio__156->SetBinContent(18,1.232971);
   data_mc_ratio__156->SetBinContent(19,1.236287);
   data_mc_ratio__156->SetBinContent(20,4.778691);
   data_mc_ratio__156->SetBinContent(21,3.200981);
   data_mc_ratio__156->SetBinContent(22,14.21242);
   data_mc_ratio__156->SetBinError(1,0.002672912);
   data_mc_ratio__156->SetBinError(2,0.002904962);
   data_mc_ratio__156->SetBinError(3,0.00422604);
   data_mc_ratio__156->SetBinError(4,0.004750393);
   data_mc_ratio__156->SetBinError(5,0.01026835);
   data_mc_ratio__156->SetBinError(6,0.009633767);
   data_mc_ratio__156->SetBinError(7,0.02713226);
   data_mc_ratio__156->SetBinError(8,0.02268123);
   data_mc_ratio__156->SetBinError(9,0.03759827);
   data_mc_ratio__156->SetBinError(10,0.0780335);
   data_mc_ratio__156->SetBinError(11,0.07414151);
   data_mc_ratio__156->SetBinError(12,0.073056);
   data_mc_ratio__156->SetBinError(13,0.09231614);
   data_mc_ratio__156->SetBinError(14,0.1088224);
   data_mc_ratio__156->SetBinError(15,0.1264179);
   data_mc_ratio__156->SetBinError(16,0.1056702);
   data_mc_ratio__156->SetBinError(17,0.1287115);
   data_mc_ratio__156->SetBinError(18,0.1553398);
   data_mc_ratio__156->SetBinError(19,0.2472573);
   data_mc_ratio__156->SetBinError(20,1.689522);
   data_mc_ratio__156->SetBinError(21,2.263435);
   data_mc_ratio__156->SetBinError(22,14.21242);
   data_mc_ratio__156->SetMinimum(0.4);
   data_mc_ratio__156->SetMaximum(1.6);
   data_mc_ratio__156->SetEntries(4.344009);
   data_mc_ratio__156->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__156->SetLineColor(ci);
   data_mc_ratio__156->SetLineWidth(2);
   data_mc_ratio__156->SetMarkerStyle(20);
   data_mc_ratio__156->SetMarkerSize(1.2);
   data_mc_ratio__156->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__156->GetXaxis()->SetRange(1,25);
   data_mc_ratio__156->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__156->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__156->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__156->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__156->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__156->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__156->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__156->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__156->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__156->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__156->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__156->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__156->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__156->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__156->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__156->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__156->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1114[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1114[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1114[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1114[25] = {
   0.06888217,
   0.07301342,
   0.1078336,
   0.1128497,
   0.1253643,
   0.2777244,
   0.1864984,
   0.2628817,
   0.3657524,
   0.1675459,
   0.2062723,
   0.2107727,
   0.2251397,
   0.3326382,
   0.2148591,
   0.2873964,
   0.4461965,
   0.4834635,
   0.4208201,
   0.2051442,
   0.332794,
   0.9898488,
   1,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1114,Graph_from_mc_statistical_error_fy1114,Graph_from_mc_statistical_error_fex1114,Graph_from_mc_statistical_error_fey1114);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1114 = new TH1F("Graph_Graph_from_mc_statistical_error1114","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1114->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1114->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1114->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1114->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1114->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1114->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1114->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1114->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1114->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1114->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1114->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1114->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1114->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1114->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1114->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1114->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1114->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1114->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1114);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
