#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Sep  7 11:48:00 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(0,0,1,1);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetFillStyle(4000);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-241.698,1.052419,241466.3);
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
   st->SetMaximum(217295.5);
   
   TH1F *st_stack_190 = new TH1F("st_stack_190","",50,0,1);
   st_stack_190->SetMinimum(0.01);
   st_stack_190->SetMaximum(217295.5);
   st_stack_190->SetDirectory(nullptr);
   st_stack_190->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_190->SetLineColor(ci);
   st_stack_190->SetLineWidth(0);
   st_stack_190->GetXaxis()->SetRange(1,50);
   st_stack_190->GetXaxis()->SetLabelFont(42);
   st_stack_190->GetXaxis()->SetTitleOffset(1);
   st_stack_190->GetXaxis()->SetTitleFont(42);
   st_stack_190->GetYaxis()->SetTitle("Events/0.02");
   st_stack_190->GetYaxis()->SetLabelFont(42);
   st_stack_190->GetYaxis()->SetLabelSize(0.05);
   st_stack_190->GetYaxis()->SetTitleSize(0.057);
   st_stack_190->GetYaxis()->SetTitleOffset(1.2);
   st_stack_190->GetYaxis()->SetTitleFont(42);
   st_stack_190->GetZaxis()->SetLabelFont(42);
   st_stack_190->GetZaxis()->SetTitleOffset(1);
   st_stack_190->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_190);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,89097.11);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,25242.8);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,13651.94);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,5293.213);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,5123.613);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,3215.689);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,2624.339);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,909.8632);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,623.3849);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,329.8295);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,459.57);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,36.05504);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,82.79448);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,85.14756);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,21.57159);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,0.1947294);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,6.305982);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,3.453126);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,4670.35);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,2513.916);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,2069.986);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,784.7766);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,1450.285);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,706.8809);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,1349.669);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,324.2415);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,265.2417);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,170.6375);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,254.9118);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,24.71035);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,37.86851);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,33.28209);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,18.28588);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,0.1947294);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,6.305982);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,3.453126);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(10042);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,366.4866);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,110.1728);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,57.28122);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,32.03261);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,18.91238);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,14.29104);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,9.184154);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,3.702063);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,3.182159);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,1.908011);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,1.983162);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,1.004763);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.7101061);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.3315945);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.7146934);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.4475416);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.3109315);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.346967);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(22,0.04320898);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,7.552365);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,4.100776);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,3.045956);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,2.229575);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,1.663951);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,1.640279);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,1.317756);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.6841118);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.6830686);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.4971705);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.6352964);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.422907);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.2594461);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.1413785);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.3054963);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.2980181);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.2307113);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.346967);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(22,0.04320898);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(10004);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_3 = new TH1D("VbbHcc_both_Aplanarity_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,7086.428);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,2340.535);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,1147.782);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,660.9651);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,417.5572);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,269.8824);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,186.4194);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,124.6689);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,86.54358);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,58.18979);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,41.63898);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,27.63157);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,19.34773);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,13.57604);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,7.546567);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,5.366236);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,3.353464);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,2.138513);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,1.525005);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,0.6801695);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,0.1784366);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(22,0.05973602);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(24,0.06263217);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,20.03192);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,11.41899);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,7.980131);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,6.052178);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,4.804252);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,3.862735);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,3.207314);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,2.619603);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,2.182976);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,1.79806);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,1.511704);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,1.225408);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,1.024017);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,0.8623194);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,0.6230478);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,0.544787);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,0.4273897);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,0.3384859);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,0.2853273);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.1863954);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.09098587);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(22,0.05973602);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(24,0.06263217);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(244052);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_4 = new TH1D("VbbHcc_both_Aplanarity_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,1062.82);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,324.0881);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,159.3558);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,76.9992);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,43.97409);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,32.71442);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,23.05983);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,16.60533);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,8.570096);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,8.371279);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,6.82523);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,2.575875);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,1.690287);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,1.352182);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,3.711161);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,0.6156688);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,0.3724628);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(18,0.2418218);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(20,0.06262639);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,20.81796);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,13.43744);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,10.5879);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,5.552067);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,4.159128);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,4.21792);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,4.109202);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,3.249417);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,1.143959);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,2.494609);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,2.259566);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,0.6847668);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,0.5522124);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,0.4528428);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,2.516783);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,0.3541654);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,0.2313082);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(18,0.2418218);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(20,0.06262639);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(15448);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_5 = new TH1D("VbbHcc_both_Aplanarity_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,115.3808);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,29.50627);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,16.67486);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,7.881425);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,3.545858);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,2.726077);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,1.266605);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,0.6214467);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,0.672284);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,0.1328722);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,0.7071798);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,0.2990458);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,0.0002291616);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,0.0002245513);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(17,3.67813e-05);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,5.355869);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,4.846268);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,4.902842);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,1.744363);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,0.9138077);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,0.879595);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,0.3931741);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,0.2275444);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,0.3944692);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,0.1107141);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,0.3867535);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,0.1879559);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,0.0002291616);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.0002245513);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(17,3.67813e-05);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(3785);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_6 = new TH1D("VbbHcc_both_Aplanarity_stack_6","",50,0,1);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(1,0.8436868);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(2,0.4125105);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(1,0.3210208);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(2,0.2067086);
   VbbHcc_both_Aplanarity_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_7 = new TH1D("VbbHcc_both_Aplanarity_stack_7","",50,0,1);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(1,3.086142);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(2,0.7086981);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(3,0.5346428);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(4,0.2547367);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(5,0.2287803);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(10,0.07675085);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(1,0.5594552);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(2,0.2552747);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(3,0.2184857);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(4,0.1543793);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(5,0.1618284);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(10,0.07675085);
   VbbHcc_both_Aplanarity_stack_7->SetEntries(52);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_8 = new TH1D("VbbHcc_both_Aplanarity_stack_8","",50,0,1);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(1,22.78298);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(2,6.620045);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(3,4.326361);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(4,1.810989);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(5,0.267219);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(6,0.6727639);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(7,0.1856276);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(8,0.3545376);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(9,0.1627956);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(1,2.24246);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(2,1.217508);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(3,0.9896773);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(4,0.6121138);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(5,0.267219);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(6,0.3938145);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(7,0.1856276);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(8,0.3545376);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(9,0.1627956);
   VbbHcc_both_Aplanarity_stack_8->SetEntries(175);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_9 = new TH1D("VbbHcc_both_Aplanarity_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,19.198);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,5.903801);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,2.946659);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,1.703296);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,1.07502);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,0.691786);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,0.4532648);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.3075965);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.1942749);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.1255707);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.07552468);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.06341658);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.035941);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.02361651);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.01339936);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.008947576);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.007990439);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.004009667);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.002438738);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(20,0.0009166708);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(22,0.001254204);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.1563763);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.08670254);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.06096853);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.04620814);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.03647917);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.02968231);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.02341974);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.01965318);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.01538631);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.01243924);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.009679579);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.009036123);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.006501274);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.005263801);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.003931538);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.00342514);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.00304781);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.002322627);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.001776436);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(20,0.0009166708);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(22,0.001254204);
   VbbHcc_both_Aplanarity_stack_9->SetEntries(28807);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_10 = new TH1D("VbbHcc_both_Aplanarity_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,8.759712);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,2.899109);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,1.49698);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,0.8748198);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,0.547606);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.3522123);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.236956);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.1696071);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.1054648);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.07059525);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.04391822);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.03429716);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.02366937);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.01677415);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.005581702);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.004910683);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.005046888);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.001569484);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.001231823);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(21,0.0005982577);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.05369621);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.0306696);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.02201735);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.0167455);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.01330775);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.01063805);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.008696178);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.007385269);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.005818361);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.00473587);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.003710116);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.003328971);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.00277373);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.002342631);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.00132864);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.001280605);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.001271809);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.0007289945);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.0006345481);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(21,0.0004249079);
   VbbHcc_both_Aplanarity_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_11 = new TH1D("VbbHcc_both_Aplanarity_stack_11","",50,0,1);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(1,0.0519161);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(2,0.0143678);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(3,0.004403632);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(4,0.001929603);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(6,0.002178175);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(9,0.001901718);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(10,0.002664007);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(1,0.01077564);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(2,0.006003286);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(3,0.003157219);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(4,0.001929603);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(6,0.002178175);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(9,0.001901718);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(10,0.002664007);
   VbbHcc_both_Aplanarity_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_12 = new TH1D("VbbHcc_both_Aplanarity_stack_12","",50,0,1);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(1,0.01919428);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(2,0.01000602);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(3,0.003727531);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(4,0.002033624);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(5,0.001451714);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(6,0.0008664275);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(7,0.0008253931);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(8,0.0006281448);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(10,0.0003315104);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(1,0.002366901);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(2,0.001734175);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(3,0.001040551);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(4,0.0007327147);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(5,0.000656747);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(6,0.0005002898);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(7,0.0004779302);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(8,0.0004455989);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(10,0.0003315104);
   VbbHcc_both_Aplanarity_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Aplanarity__379 = new TH1D("VbbHcc_both_Aplanarity__379","",50,0,1);
   VbbHcc_both_Aplanarity__379->SetBinContent(1,61826);
   VbbHcc_both_Aplanarity__379->SetBinContent(2,17558);
   VbbHcc_both_Aplanarity__379->SetBinContent(3,8343);
   VbbHcc_both_Aplanarity__379->SetBinContent(4,4546);
   VbbHcc_both_Aplanarity__379->SetBinContent(5,2821);
   VbbHcc_both_Aplanarity__379->SetBinContent(6,1798);
   VbbHcc_both_Aplanarity__379->SetBinContent(7,1160);
   VbbHcc_both_Aplanarity__379->SetBinContent(8,800);
   VbbHcc_both_Aplanarity__379->SetBinContent(9,547);
   VbbHcc_both_Aplanarity__379->SetBinContent(10,382);
   VbbHcc_both_Aplanarity__379->SetBinContent(11,267);
   VbbHcc_both_Aplanarity__379->SetBinContent(12,165);
   VbbHcc_both_Aplanarity__379->SetBinContent(13,98);
   VbbHcc_both_Aplanarity__379->SetBinContent(14,72);
   VbbHcc_both_Aplanarity__379->SetBinContent(15,44);
   VbbHcc_both_Aplanarity__379->SetBinContent(16,32);
   VbbHcc_both_Aplanarity__379->SetBinContent(17,19);
   VbbHcc_both_Aplanarity__379->SetBinContent(18,13);
   VbbHcc_both_Aplanarity__379->SetBinContent(19,8);
   VbbHcc_both_Aplanarity__379->SetBinContent(20,1);
   VbbHcc_both_Aplanarity__379->SetEntries(100549);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity__379->SetLineColor(ci);
   VbbHcc_both_Aplanarity__379->SetLineWidth(2);
   VbbHcc_both_Aplanarity__379->SetMarkerStyle(20);
   VbbHcc_both_Aplanarity__379->SetMarkerSize(1.2);
   VbbHcc_both_Aplanarity__379->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity__379->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__379->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__379->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__379->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__379->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__379->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__379->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__379->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__379->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Aplanarity_fx1379[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VbbHcc_both_Aplanarity_fy1379[50] = { 97782.96, 28063.67, 15042.35, 6075.739, 5609.723, 3537.023, 2845.146, 1056.293, 722.8174, 398.7073, 510.844, 67.66401, 104.6022, 100.448, 33.56322, 6.638034, 10.35591,
   6.186007, 1.528676, 0.7437125, 0.1790349, 0.1041992, 0, 0.06263217, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VbbHcc_both_Aplanarity_fex1379[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VbbHcc_both_Aplanarity_fey1379[50] = { 4670.449, 2513.986, 2070.037, 784.8249, 1450.3, 706.9066, 1349.68, 324.2693, 265.2544, 170.666, 254.9273, 24.75452, 37.88726, 33.29663, 18.47131, 0.7409275, 6.328887,
   3.495357, 0.2853335, 0.1966371, 0.09098686, 0.07373589, 0, 0.06263217, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_both_Aplanarity_fx1379,Graph_from_VbbHcc_both_Aplanarity_fy1379,Graph_from_VbbHcc_both_Aplanarity_fex1379,Graph_from_VbbHcc_both_Aplanarity_fey1379);
   gre->SetName("Graph_from_VbbHcc_both_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Aplanarity1379 = new TH1F("Graph_Graph_from_VbbHcc_both_Aplanarity1379","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Aplanarity1379->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1379->SetMaximum(112698.8);
   Graph_Graph_from_VbbHcc_both_Aplanarity1379->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_both_Aplanarity1379->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Aplanarity1379->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Aplanarity1379->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1379->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_both_Aplanarity1379->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1379->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1379->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1379->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1379->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_both_Aplanarity1379->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Aplanarity1379);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__380 = new TH1D("data_mc_ratio__380","",50,0,1);
   data_mc_ratio__380->SetBinContent(1,0.6322778);
   data_mc_ratio__380->SetBinContent(2,0.6256489);
   data_mc_ratio__380->SetBinContent(3,0.5546342);
   data_mc_ratio__380->SetBinContent(4,0.7482217);
   data_mc_ratio__380->SetBinContent(5,0.5028769);
   data_mc_ratio__380->SetBinContent(6,0.5083371);
   data_mc_ratio__380->SetBinContent(7,0.407712);
   data_mc_ratio__380->SetBinContent(8,0.7573654);
   data_mc_ratio__380->SetBinContent(9,0.7567609);
   data_mc_ratio__380->SetBinContent(10,0.9580962);
   data_mc_ratio__380->SetBinContent(11,0.5226644);
   data_mc_ratio__380->SetBinContent(12,2.43852);
   data_mc_ratio__380->SetBinContent(13,0.9368826);
   data_mc_ratio__380->SetBinContent(14,0.7167888);
   data_mc_ratio__380->SetBinContent(15,1.310959);
   data_mc_ratio__380->SetBinContent(16,4.820704);
   data_mc_ratio__380->SetBinContent(17,1.8347);
   data_mc_ratio__380->SetBinContent(18,2.101517);
   data_mc_ratio__380->SetBinContent(19,5.233287);
   data_mc_ratio__380->SetBinContent(20,1.344606);
   data_mc_ratio__380->SetBinError(1,0.00254286);
   data_mc_ratio__380->SetBinError(2,0.004721643);
   data_mc_ratio__380->SetBinError(3,0.006072192);
   data_mc_ratio__380->SetBinError(4,0.01109726);
   data_mc_ratio__380->SetBinError(5,0.009468042);
   data_mc_ratio__380->SetBinError(6,0.01198828);
   data_mc_ratio__380->SetBinError(7,0.01197084);
   data_mc_ratio__380->SetBinError(8,0.02677691);
   data_mc_ratio__380->SetBinError(9,0.03235676);
   data_mc_ratio__380->SetBinError(10,0.04902047);
   data_mc_ratio__380->SetBinError(11,0.03198654);
   data_mc_ratio__380->SetBinError(12,0.1898385);
   data_mc_ratio__380->SetBinError(13,0.09463944);
   data_mc_ratio__380->SetBinError(14,0.08447438);
   data_mc_ratio__380->SetBinError(15,0.1976345);
   data_mc_ratio__380->SetBinError(16,0.8521882);
   data_mc_ratio__380->SetBinError(17,0.4209091);
   data_mc_ratio__380->SetBinError(18,0.582856);
   data_mc_ratio__380->SetBinError(19,1.850246);
   data_mc_ratio__380->SetBinError(20,1.344606);
   data_mc_ratio__380->SetMinimum(0.4);
   data_mc_ratio__380->SetMaximum(1.6);
   data_mc_ratio__380->SetEntries(61.20372);
   data_mc_ratio__380->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__380->SetLineColor(ci);
   data_mc_ratio__380->SetLineWidth(2);
   data_mc_ratio__380->SetMarkerStyle(20);
   data_mc_ratio__380->SetMarkerSize(1.2);
   data_mc_ratio__380->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__380->GetXaxis()->SetRange(1,50);
   data_mc_ratio__380->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__380->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__380->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__380->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__380->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__380->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__380->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__380->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__380->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__380->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__380->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__380->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__380->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__380->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__380->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__380->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1380[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1380[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1380[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1380[50] = { 0.04776343, 0.08958153, 0.1376139, 0.1291736, 0.2585332, 0.1998592, 0.4743798, 0.3069879, 0.3669729, 0.4280482, 0.4990317, 0.3658447, 0.3622033, 0.3314813, 0.5503438, 0.1116185, 0.6111375,
   0.5650426, 0.186654, 0.2643993, 0.5082075, 0.7076435, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1380,Graph_from_mc_statistical_error_fy1380,Graph_from_mc_statistical_error_fex1380,Graph_from_mc_statistical_error_fey1380);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1380 = new TH1F("Graph_Graph_from_mc_statistical_error1380","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1380->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1380->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1380->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1380->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1380->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1380->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1380->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1380->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1380->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1380->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1380->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1380->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1380->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1380);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
