#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_16_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Feb 16 10:37:19 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2183529,-0.06114602,1.171633,0.4484042);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetFillStyle(4000);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLogy();
   Aplanarity_algo_16->SetLeftMargin(0.15709);
   Aplanarity_algo_16->SetRightMargin(0.1234783);
   Aplanarity_algo_16->SetBottomMargin(0.12);
   Aplanarity_algo_16->SetFrameFillStyle(1000);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameFillStyle(1000);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   st->SetMaximum(37.8523);
   
   TH1F *st_stack_125 = new TH1F("st_stack_125","",50,0,1);
   st_stack_125->SetMinimum(-3.114339e+09);
   st_stack_125->SetMaximum(-25.90542);
   st_stack_125->SetDirectory(0);
   st_stack_125->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_125->SetLineColor(ci);
   st_stack_125->GetXaxis()->SetTitle("Aplanarity");
   st_stack_125->GetXaxis()->SetRange(1,50);
   st_stack_125->GetXaxis()->SetLabelFont(42);
   st_stack_125->GetXaxis()->SetTitleOffset(1);
   st_stack_125->GetXaxis()->SetTitleFont(42);
   st_stack_125->GetYaxis()->SetTitle("Events/0.02");
   st_stack_125->GetYaxis()->SetLabelFont(42);
   st_stack_125->GetYaxis()->SetTitleSize(0.037);
   st_stack_125->GetYaxis()->SetTitleFont(42);
   st_stack_125->GetZaxis()->SetLabelFont(42);
   st_stack_125->GetZaxis()->SetTitleOffset(1);
   st_stack_125->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_125);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,0.2939919);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,0.1910116);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,0.1314232);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,0.08083693);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,0.06648484);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,0.04238353);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,0.04854244);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,0.02394029);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,0.01474521);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,0.02089933);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,0.01461324);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,0.008710217);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,0.01145913);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,0.008758501);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,0.02972502);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,0.0236534);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,0.0197722);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,0.01553114);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,0.01393779);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,0.0113393);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,0.0119178);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,0.008475367);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,0.008038571);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,0.007906933);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,0.006552554);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,0.005029055);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,0.005730527);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,0.005089733);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(339);

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
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,0.08453115);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,0.07113022);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,0.04943416);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,0.04080236);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,0.02609327);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,0.01803304);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,0.01574353);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,0.009473469);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,0.007528936);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.004314682);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.002169877);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.002345961);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.001722781);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,0.005646753);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,0.005219115);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,0.004370891);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,0.00399285);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,0.003183295);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,0.002631642);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.002493888);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.001900895);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.001692602);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.001302375);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.0008874053);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.0009596783);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.0008047972);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(884);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
