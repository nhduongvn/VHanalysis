#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_17_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2183529,-0.0659101,1.171633,0.4833407);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetFillStyle(4000);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLogy();
   Aplanarity_algo_17->SetLeftMargin(0.15709);
   Aplanarity_algo_17->SetRightMargin(0.1234783);
   Aplanarity_algo_17->SetBottomMargin(0.12);
   Aplanarity_algo_17->SetFrameFillStyle(1000);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameFillStyle(1000);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_126 = new TH1F("st_stack_126","",50,0,1);
   st_stack_126->SetMinimum(-2.383982e+09);
   st_stack_126->SetMaximum(-0.4397849);
   st_stack_126->SetDirectory(0);
   st_stack_126->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_126->SetLineColor(ci);
   st_stack_126->GetXaxis()->SetTitle("Aplanarity");
   st_stack_126->GetXaxis()->SetRange(1,50);
   st_stack_126->GetXaxis()->SetLabelFont(42);
   st_stack_126->GetXaxis()->SetTitleOffset(1);
   st_stack_126->GetXaxis()->SetTitleFont(42);
   st_stack_126->GetYaxis()->SetTitle("Event/0.02");
   st_stack_126->GetYaxis()->SetLabelFont(42);
   st_stack_126->GetYaxis()->SetTitleSize(0.037);
   st_stack_126->GetYaxis()->SetTitleFont(42);
   st_stack_126->GetZaxis()->SetLabelFont(42);
   st_stack_126->GetZaxis()->SetTitleOffset(1);
   st_stack_126->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_126);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,0.3118234);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,0.2631237);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,0.1435399);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,0.1208133);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,0.07774596);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,0.05262995);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,0.04014152);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,0.03142896);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,0.03199029);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,0.02531181);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,0.01297915);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,0.002014718);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,0.007260274);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,0.008310085);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,0.001795854);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(17,0.002812815);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(19,0.001471575);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,0.02094702);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,0.01900543);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,0.0143203);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,0.0131142);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,0.01029625);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,0.008768673);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,0.007638153);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,0.006525375);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,0.006750003);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,0.006034975);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,0.004149894);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,0.001424621);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,0.003272503);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,0.003407308);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,0.0012701);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(17,0.001990341);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(19,0.001471575);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(919);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,0.09619147);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,0.09046062);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,0.06132346);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,0.04606592);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,0.03692878);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,0.02597908);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,0.01875485);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,0.009912803);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,0.006650387);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.005332226);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.005092354);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.002106785);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.002397484);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.001077884);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.0007641367);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,0.0003491612);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(19,0.0002343885);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,0.004102698);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,0.004001289);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,0.003299799);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,0.002850582);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,0.002590754);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,0.002155059);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.001815562);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.001339074);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.001092908);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.000984783);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.0009555609);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.0006140292);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.0006746973);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.0004426779);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.0003820861);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,0.0002472862);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(19,0.0001657943);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(2405);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}
