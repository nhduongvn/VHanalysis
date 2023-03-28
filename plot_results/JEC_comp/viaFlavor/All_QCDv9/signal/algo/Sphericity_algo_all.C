#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_all()
{
//=========Macro generated from canvas: Sphericity_algo_all/Sphericity_algo_all
//=========  (Mon Mar 27 11:09:51 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_all = new TCanvas("Sphericity_algo_all", "Sphericity_algo_all",0,0,600,600);
   Sphericity_algo_all->SetHighLightColor(2);
   Sphericity_algo_all->Range(-0.2183529,-0.103164,1.171633,0.7565358);
   Sphericity_algo_all->SetFillColor(0);
   Sphericity_algo_all->SetFillStyle(4000);
   Sphericity_algo_all->SetBorderMode(0);
   Sphericity_algo_all->SetBorderSize(2);
   Sphericity_algo_all->SetLeftMargin(0.15709);
   Sphericity_algo_all->SetRightMargin(0.1234783);
   Sphericity_algo_all->SetBottomMargin(0.12);
   Sphericity_algo_all->SetFrameFillStyle(1000);
   Sphericity_algo_all->SetFrameBorderMode(0);
   Sphericity_algo_all->SetFrameFillStyle(1000);
   Sphericity_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.6705658);
   
   TH1F *st_stack_156 = new TH1F("st_stack_156","",25,0,1);
   st_stack_156->SetMinimum(0);
   st_stack_156->SetMaximum(0.6705658);
   st_stack_156->SetDirectory(0);
   st_stack_156->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_156->SetLineColor(ci);
   st_stack_156->GetXaxis()->SetTitle("Sphericity");
   st_stack_156->GetXaxis()->SetRange(1,25);
   st_stack_156->GetXaxis()->SetLabelFont(42);
   st_stack_156->GetXaxis()->SetTitleOffset(1);
   st_stack_156->GetXaxis()->SetTitleFont(42);
   st_stack_156->GetYaxis()->SetTitle("Event/0.04");
   st_stack_156->GetYaxis()->SetLabelFont(42);
   st_stack_156->GetYaxis()->SetTitleSize(0.037);
   st_stack_156->GetYaxis()->SetTitleFont(42);
   st_stack_156->GetZaxis()->SetLabelFont(42);
   st_stack_156->GetZaxis()->SetTitleOffset(1);
   st_stack_156->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_156);
   
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_1 = new TH1D("VbbHcc_algo_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(1,0.0265948);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(2,0.2021211);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(3,0.3518779);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(4,0.4237373);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(5,0.3550847);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(6,0.1701221);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(7,0.07591129);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(8,0.02249365);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(9,0.02613301);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(10,0.02996461);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(11,0.01083135);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(12,0.01769522);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(13,0.009608277);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(14,0.01448533);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(15,0.004538192);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(16,0.00579918);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(17,0.002007777);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(18,0.002931423);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(1,0.007735118);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(2,0.02178108);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(3,0.03055245);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(4,0.03334072);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(5,0.04846635);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(6,0.02058902);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(7,0.01441617);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(8,0.007287136);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(9,0.008752953);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(10,0.008788898);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(11,0.005552507);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(12,0.006507811);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(13,0.00491428);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(14,0.006026471);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(15,0.003225429);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(16,0.003458347);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(17,0.002007777);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(18,0.002931423);
   VbbHcc_algo_Sphericity_all_stack_1->SetEntries(776);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_all_stack_1->SetFillColor(ci);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_2 = new TH1D("VbbHcc_algo_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(1,0.01632349);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(2,0.09552737);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(3,0.1270441);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(4,0.1328324);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(5,0.1018441);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(6,0.04959666);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(7,0.02512104);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(8,0.01154745);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(9,0.008592471);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(10,0.007446203);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(11,0.003885097);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(12,0.007161727);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(13,0.00226996);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(14,0.003259673);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(15,0.003209149);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(16,0.001060009);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(17,0.001436806);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(18,0.002200563);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(19,0.0006703761);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(1,0.002264653);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(2,0.005622502);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(3,0.006354174);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(4,0.006579844);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(5,0.00651137);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(6,0.00398159);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(7,0.00280297);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(8,0.001912071);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(9,0.001614776);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(10,0.001534072);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(11,0.00113518);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(12,0.001616679);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(13,0.0009961617);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(14,0.0009951364);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(15,0.0009614396);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(16,0.0005445221);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(17,0.0006456655);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(18,0.0008003337);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(19,0.0004753622);
   VbbHcc_algo_Sphericity_all_stack_2->SetEntries(2016);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_all_stack_2->SetFillColor(ci);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_all->Modified();
   Sphericity_algo_all->cd();
   Sphericity_algo_all->SetSelected(Sphericity_algo_all);
}
