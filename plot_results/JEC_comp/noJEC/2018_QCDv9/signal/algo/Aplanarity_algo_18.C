#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_18()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Mon Mar 20 11:48:32 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2183529,-0.1660193,1.171633,1.217475);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetFillStyle(4000);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLeftMargin(0.15709);
   Aplanarity_algo_18->SetRightMargin(0.1234783);
   Aplanarity_algo_18->SetBottomMargin(0.12);
   Aplanarity_algo_18->SetFrameFillStyle(1000);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameFillStyle(1000);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.079125);
   
   TH1F *st_stack_159 = new TH1F("st_stack_159","",50,0,1);
   st_stack_159->SetMinimum(0);
   st_stack_159->SetMaximum(1.079125);
   st_stack_159->SetDirectory(0);
   st_stack_159->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_159->SetLineColor(ci);
   st_stack_159->GetXaxis()->SetTitle("Aplanarity");
   st_stack_159->GetXaxis()->SetRange(1,50);
   st_stack_159->GetXaxis()->SetLabelFont(42);
   st_stack_159->GetXaxis()->SetTitleOffset(1);
   st_stack_159->GetXaxis()->SetTitleFont(42);
   st_stack_159->GetYaxis()->SetTitle("Event/0.02");
   st_stack_159->GetYaxis()->SetLabelFont(42);
   st_stack_159->GetYaxis()->SetTitleSize(0.037);
   st_stack_159->GetYaxis()->SetTitleFont(42);
   st_stack_159->GetZaxis()->SetLabelFont(42);
   st_stack_159->GetZaxis()->SetTitleOffset(1);
   st_stack_159->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_159);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,0.6973949);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,0.4422624);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,0.3350903);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,0.1911097);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,0.1631174);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,0.1120247);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,0.1022358);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,0.07024584);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,0.02234595);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,0.02040497);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,0.0170115);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,0.02305663);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,0.01868833);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,0.004159591);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,0.006056375);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,0.001576883);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,0.0588631);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,0.03501903);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,0.0302982);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,0.02302298);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,0.02057741);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,0.0173258);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,0.01758111);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,0.01420616);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,0.0075817);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,0.006872812);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,0.007003375);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,0.008066848);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,0.007116068);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,0.003026044);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,0.004302288);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,0.001576883);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(907);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);
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
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,0.1982789);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,0.1599077);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,0.129565);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,0.08386268);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,0.05473794);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,0.04395566);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,0.03116228);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,0.02075813);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,0.01485408);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.01211316);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.004849232);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.006609341);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.003867354);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.001371316);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.0003156401);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,0.0003240891);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(17,0.001199761);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,0.0003400733);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,0.008780252);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,0.007488678);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,0.007451349);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,0.00546568);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,0.004457095);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,0.003901374);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.003363206);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.002808315);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.002248463);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.0027286);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.001287999);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.002970247);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.001123081);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.0006862333);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.0003156401);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,0.0003240891);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(17,0.0006992376);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,0.0003400733);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(2258);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);
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
   entry->SetLineColor(1);
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
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_18->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->SetSelected(Aplanarity_algo_18);
}
