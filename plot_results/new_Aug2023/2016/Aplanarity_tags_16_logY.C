void Aplanarity_tags_16_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Tue Aug 22 09:16:29 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(0,0,1,1);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetFillStyle(4000);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.899637,1.052419,13.48734);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(1.929773e+11);
   
   TH1F *st_stack_61 = new TH1F("st_stack_61","",50,0,1);
   st_stack_61->SetMinimum(0.001308429);
   st_stack_61->SetMaximum(7.057374e+11);
   st_stack_61->SetDirectory(0);
   st_stack_61->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_61->SetLineColor(ci);
   st_stack_61->GetXaxis()->SetRange(1,50);
   st_stack_61->GetXaxis()->SetLabelFont(42);
   st_stack_61->GetXaxis()->SetLabelSize(0.035);
   st_stack_61->GetXaxis()->SetTitleSize(0.035);
   st_stack_61->GetXaxis()->SetTitleFont(42);
   st_stack_61->GetYaxis()->SetTitle("Events/0.02");
   st_stack_61->GetYaxis()->SetLabelFont(42);
   st_stack_61->GetYaxis()->SetLabelSize(0.05);
   st_stack_61->GetYaxis()->SetTitleSize(0.057);
   st_stack_61->GetYaxis()->SetTitleOffset(1.2);
   st_stack_61->GetYaxis()->SetTitleFont(42);
   st_stack_61->GetZaxis()->SetLabelFont(42);
   st_stack_61->GetZaxis()->SetLabelSize(0.035);
   st_stack_61->GetZaxis()->SetTitleSize(0.035);
   st_stack_61->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_61);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,109008.9);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,18367.17);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,2722.399);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,724.4029);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,109.3248);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,97.8912);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,95.62087);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,42.6508);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,51.06544);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,3.56109);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,4.850397);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,22.73851);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,4859.021);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,2778.016);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,622.0418);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,249.2517);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,28.79644);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,33.44965);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,39.48819);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,21.8223);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,32.42769);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,2.543199);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,4.850397);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,22.73851);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(8758);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,447.415);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,55.96865);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,16.42803);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,7.270094);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,2.551802);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,1.185472);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,1.65757);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.3828596);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.3537723);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.03911861);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.08571263);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.03836532);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,8.015285);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,2.727961);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,1.449545);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,1.038394);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.5855154);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.3085666);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.5452091);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.1294515);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.2042357);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.03911861);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.06182412);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.03836532);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(8949);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,8826.446);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,1303.819);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,353.1874);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,129.9216);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,60.32294);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,29.78546);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,18.02527);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,8.550242);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,5.295434);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,2.992889);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,2.555462);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,1.199416);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,0.9749012);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,0.7132196);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,0.5465472);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,0.1109132);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,0.1019668);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,0.1049672);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(19,0.06607834);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,21.7279);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,8.269097);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,4.295218);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,2.609224);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,1.76794);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,1.246966);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,0.9731493);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,0.668537);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,0.5232681);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,0.4090263);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,0.3709382);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,0.2558854);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,0.2229689);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,0.1920473);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.1682247);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.07887059);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.07233432);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.07629337);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(19,0.06607834);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(216002);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,1315.203);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,161.3446);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,42.71144);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,11.33079);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,5.551834);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,2.138231);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,2.121372);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,1.142995);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,0.4407267);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,0.2986792);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,0.05130792);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.1193733);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.06809492);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(14,0.05725555);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,21.57221);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,9.572854);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,5.043373);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,1.263861);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,0.9611692);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,0.4576027);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,0.6015781);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,0.4369525);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,0.1672498);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,0.1338231);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.05130792);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.08484983);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.06809492);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(14,0.05725555);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(14509);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_5 = new TH1D("VbbHcc_tags_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(1,137.4381);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(2,12.98712);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(3,2.443653);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(4,0.8297449);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(5,0.6436405);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(6,1.006676);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(7,0.2059008);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(11,0.006447807);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(1,9.546742);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(2,1.927234);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(3,0.9250693);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(4,0.2187703);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(5,0.2500782);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(6,0.7018682);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(7,0.1517921);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(11,0.006447807);
   VbbHcc_tags_Aplanarity_stack_5->SetEntries(3148);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_6 = new TH1D("VbbHcc_tags_Aplanarity_stack_6","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(1,1.06156);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(2,0.1234178);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(1,0.3569112);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(2,0.1234178);
   VbbHcc_tags_Aplanarity_stack_6->SetEntries(10);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_7 = new TH1D("VbbHcc_tags_Aplanarity_stack_7","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(1,3.620142);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(2,0.2782289);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(3,0.09132081);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(8,0.07873842);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(1,0.5751067);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(2,0.1609335);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(3,0.09132081);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(8,0.07873842);
   VbbHcc_tags_Aplanarity_stack_7->SetEntries(45);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_8 = new TH1D("VbbHcc_tags_Aplanarity_stack_8","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(1,27.81961);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(2,2.495288);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(3,0.572131);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(4,0.9440074);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(1,2.407518);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(2,0.7233097);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(3,0.3315922);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(4,0.4750953);
   VbbHcc_tags_Aplanarity_stack_8->SetEntries(156);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,26.07453);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,2.118147);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,0.3806609);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.1225691);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.04795816);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.03575084);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.01754954);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.01440649);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.008865873);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.002209421);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.003321317);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(17,0.002217832);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.1697937);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.04747577);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.02007741);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.01150684);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.007236353);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.006292188);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.004461637);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.004006739);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.00314298);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.001562547);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.001930852);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(17,0.001568797);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(28512);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,11.7439);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,1.223868);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,0.2856806);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.1132779);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.04187615);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.02089468);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.01488862);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.007866487);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.006425514);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.004480155);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.001406901);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.00139781);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.00168743);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.000739761);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(15,0.0003368255);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0003546072);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.000351307);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(18,0.0007859768);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.06281771);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.02005578);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.009794188);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.006175264);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.003781726);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.00267374);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.002260282);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.001647267);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.001482361);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.001248845);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.0007119502);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.0006999055);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.0007548977);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.0005233131);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(15,0.0003368255);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0003546072);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.000351307);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(18,0.0005562562);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_11 = new TH1D("VbbHcc_tags_Aplanarity_stack_11","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(1,0.07126526);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(2,0.004145534);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(3,0.002186347);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(1,0.01250127);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(2,0.002931788);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(3,0.002186347);
   VbbHcc_tags_Aplanarity_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_12 = new TH1D("VbbHcc_tags_Aplanarity_stack_12","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(1,0.03117825);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(2,0.002741011);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(3,0.0007705776);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(4,0.0006031889);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(5,0.0002291868);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(8,0.0001064865);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(1,0.002984297);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(2,0.0008765669);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(3,0.0004466633);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(4,0.0004265991);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(5,0.0002291868);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(8,0.0001064865);
   VbbHcc_tags_Aplanarity_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Aplanarity__166 = new TH1D("VbbHcc_tags_Aplanarity__166","",50,0,1);
   VbbHcc_tags_Aplanarity__166->SetBinContent(1,79242);
   VbbHcc_tags_Aplanarity__166->SetBinContent(2,9878);
   VbbHcc_tags_Aplanarity__166->SetBinContent(3,2843);
   VbbHcc_tags_Aplanarity__166->SetBinContent(4,1062);
   VbbHcc_tags_Aplanarity__166->SetBinContent(5,516);
   VbbHcc_tags_Aplanarity__166->SetBinContent(6,246);
   VbbHcc_tags_Aplanarity__166->SetBinContent(7,150);
   VbbHcc_tags_Aplanarity__166->SetBinContent(8,78);
   VbbHcc_tags_Aplanarity__166->SetBinContent(9,69);
   VbbHcc_tags_Aplanarity__166->SetBinContent(10,32);
   VbbHcc_tags_Aplanarity__166->SetBinContent(11,19);
   VbbHcc_tags_Aplanarity__166->SetBinContent(12,19);
   VbbHcc_tags_Aplanarity__166->SetBinContent(13,9);
   VbbHcc_tags_Aplanarity__166->SetBinContent(14,4);
   VbbHcc_tags_Aplanarity__166->SetBinContent(15,4);
   VbbHcc_tags_Aplanarity__166->SetBinContent(16,1);
   VbbHcc_tags_Aplanarity__166->SetBinContent(17,2);
   VbbHcc_tags_Aplanarity__166->SetEntries(94223);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity__166->SetLineColor(ci);
   VbbHcc_tags_Aplanarity__166->SetLineWidth(2);
   VbbHcc_tags_Aplanarity__166->SetMarkerStyle(20);
   VbbHcc_tags_Aplanarity__166->SetMarkerSize(1.2);
   VbbHcc_tags_Aplanarity__166->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity__166->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__166->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__166->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__166->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__166->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__166->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__166->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__166->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity__166->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__166->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__166->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__166->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__166->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__166->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fx1121[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fy1121[50] = {
   119805.8,
   19907.54,
   3138.502,
   874.9356,
   178.4851,
   132.0637,
   117.6634,
   52.82802,
   57.17067,
   6.898466,
   7.554056,
   1.320187,
   1.083049,
   0.7712149,
   23.2854,
   0.1112678,
   0.1045359,
   0.1057531,
   0.06607834,
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fex1121[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fey1121[50] = {
   4859.134,
   2778.047,
   622.0795,
   249.2713,
   28.87368,
   33.48479,
   39.50881,
   21.83744,
   32.43299,
   2.579652,
   4.865229,
   0.2695873,
   0.2362721,
   0.2004012,
   22.73914,
   0.07887138,
   0.07235218,
   0.0762954,
   0.06607834,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_Aplanarity_fx1121,Graph_from_VbbHcc_tags_Aplanarity_fy1121,Graph_from_VbbHcc_tags_Aplanarity_fex1121,Graph_from_VbbHcc_tags_Aplanarity_fey1121);
   gre->SetName("Graph_from_VbbHcc_tags_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Aplanarity1121 = new TH1F("Graph_Graph_from_VbbHcc_tags_Aplanarity1121","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->SetMinimum(137.1314);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->SetMaximum(137131.4);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Aplanarity1121);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__167 = new TH1D("data_mc_ratio__167","",50,0,1);
   data_mc_ratio__167->SetBinContent(1,0.6614205);
   data_mc_ratio__167->SetBinContent(2,0.496194);
   data_mc_ratio__167->SetBinContent(3,0.905846);
   data_mc_ratio__167->SetBinContent(4,1.213804);
   data_mc_ratio__167->SetBinContent(5,2.890998);
   data_mc_ratio__167->SetBinContent(6,1.862738);
   data_mc_ratio__167->SetBinContent(7,1.274823);
   data_mc_ratio__167->SetBinContent(8,1.476489);
   data_mc_ratio__167->SetBinContent(9,1.206913);
   data_mc_ratio__167->SetBinContent(10,4.638712);
   data_mc_ratio__167->SetBinContent(11,2.515205);
   data_mc_ratio__167->SetBinContent(12,14.3919);
   data_mc_ratio__167->SetBinContent(13,8.309875);
   data_mc_ratio__167->SetBinContent(14,5.186622);
   data_mc_ratio__167->SetBinContent(15,0.1717815);
   data_mc_ratio__167->SetBinContent(16,8.987327);
   data_mc_ratio__167->SetBinContent(17,19.13218);
   data_mc_ratio__167->SetBinError(1,0.002349633);
   data_mc_ratio__167->SetBinError(2,0.004992488);
   data_mc_ratio__167->SetBinError(3,0.01698893);
   data_mc_ratio__167->SetBinError(4,0.03724656);
   data_mc_ratio__167->SetBinError(5,0.1272691);
   data_mc_ratio__167->SetBinError(6,0.1187638);
   data_mc_ratio__167->SetBinError(7,0.1040888);
   data_mc_ratio__167->SetBinError(8,0.1671795);
   data_mc_ratio__167->SetBinError(9,0.1452952);
   data_mc_ratio__167->SetBinError(10,0.8200163);
   data_mc_ratio__167->SetBinError(11,0.5770276);
   data_mc_ratio__167->SetBinError(12,3.301728);
   data_mc_ratio__167->SetBinError(13,2.769958);
   data_mc_ratio__167->SetBinError(14,2.593311);
   data_mc_ratio__167->SetBinError(15,0.08589074);
   data_mc_ratio__167->SetBinError(16,8.987327);
   data_mc_ratio__167->SetBinError(17,13.52849);
   data_mc_ratio__167->SetMinimum(0.4);
   data_mc_ratio__167->SetMaximum(1.6);
   data_mc_ratio__167->SetEntries(10.76257);
   data_mc_ratio__167->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__167->SetLineColor(ci);
   data_mc_ratio__167->SetLineWidth(2);
   data_mc_ratio__167->SetMarkerStyle(20);
   data_mc_ratio__167->SetMarkerSize(1.2);
   data_mc_ratio__167->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__167->GetXaxis()->SetRange(1,50);
   data_mc_ratio__167->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__167->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__167->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__167->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__167->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__167->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__167->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__167->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__167->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__167->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__167->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__167->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__167->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__167->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__167->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__167->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__167->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1122[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_mc_statistical_error_fy1122[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1122[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_mc_statistical_error_fey1122[50] = {
   0.04055843,
   0.1395475,
   0.198209,
   0.2849025,
   0.1617708,
   0.2535503,
   0.3357782,
   0.4133685,
   0.5673012,
   0.3739458,
   0.6440552,
   0.2042039,
   0.2181546,
   0.2598513,
   0.9765406,
   0.708843,
   0.6921275,
   0.7214482,
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
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1122,Graph_from_mc_statistical_error_fy1122,Graph_from_mc_statistical_error_fex1122,Graph_from_mc_statistical_error_fey1122);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1122 = new TH1F("Graph_Graph_from_mc_statistical_error1122","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1122->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1122->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1122->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1122->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1122->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1122->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1122->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1122->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1122->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1122->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1122->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1122->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1122);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
