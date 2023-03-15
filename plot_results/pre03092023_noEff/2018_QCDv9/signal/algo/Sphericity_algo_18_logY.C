#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_18_logY()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2183529,-0.03349843,1.171633,0.2456552);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetFillStyle(4000);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLogy();
   Sphericity_algo_18->SetLeftMargin(0.15709);
   Sphericity_algo_18->SetRightMargin(0.1234783);
   Sphericity_algo_18->SetBottomMargin(0.12);
   Sphericity_algo_18->SetFrameFillStyle(1000);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameFillStyle(1000);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_123 = new TH1F("st_stack_123","",25,0,1);
   st_stack_123->SetMinimum(-2.303285e+09);
   st_stack_123->SetMaximum(-0.2357086);
   st_stack_123->SetDirectory(0);
   st_stack_123->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_123->SetLineColor(ci);
   st_stack_123->GetXaxis()->SetTitle("Sphericity");
   st_stack_123->GetXaxis()->SetRange(1,25);
   st_stack_123->GetXaxis()->SetLabelFont(42);
   st_stack_123->GetXaxis()->SetTitleOffset(1);
   st_stack_123->GetXaxis()->SetTitleFont(42);
   st_stack_123->GetYaxis()->SetTitle("Event/0.04");
   st_stack_123->GetYaxis()->SetLabelFont(42);
   st_stack_123->GetYaxis()->SetTitleSize(0.037);
   st_stack_123->GetYaxis()->SetTitleFont(42);
   st_stack_123->GetZaxis()->SetLabelFont(42);
   st_stack_123->GetZaxis()->SetTitleOffset(1);
   st_stack_123->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_123);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,0.009106869);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,0.05935055);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,0.09959228);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,0.160595);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,0.1313059);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,0.1159975);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,0.1123895);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,0.1245039);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,0.1623708);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,0.1036478);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,0.08891736);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,0.1068696);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,0.08348824);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,0.06040293);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,0.090892);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,0.05429173);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,0.03960777);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,0.03059845);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,0.01258678);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,0.003324611);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(21,0.004351029);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(22,0.001501344);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,0.004601339);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,0.01061729);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,0.01477545);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,0.03391232);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,0.01627115);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,0.01596604);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,0.01479699);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,0.01609747);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,0.01829947);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,0.01453156);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,0.01386542);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,0.01456325);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,0.0137008);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,0.01135723);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,0.01352775);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,0.009965098);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,0.009864401);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,0.007487311);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,0.00468883);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,0.00236185);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(21,0.003104369);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(22,0.001501344);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(907);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,0.004093418);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,0.02048126);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,0.03257248);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,0.04677626);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,0.04299587);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,0.04616831);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,0.04633434);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,0.04742298);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,0.0427579);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,0.03938522);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,0.03400897);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,0.03290444);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,0.03192091);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,0.02622722);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,0.02316269);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,0.02059867);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,0.01484705);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,0.008726415);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.005599176);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.003315671);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(21,0.0007901571);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,0.001049329);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,0.002363116);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,0.002839336);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,0.003556643);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,0.003338968);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,0.003451347);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,0.003729858);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,0.003996426);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,0.003348338);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,0.003222104);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,0.003554634);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,0.002975261);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.002933293);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.002724593);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.003120078);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.00264821);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.001977417);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.001518236);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.001214627);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.0009258288);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(21,0.0004601105);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(2258);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_1","ZHcc","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_18->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->SetSelected(Sphericity_algo_18);
}
