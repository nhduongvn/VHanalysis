#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_17_logY()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Mon Mar 20 11:49:49 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2183529,-0.2018212,1.171633,0.6459695);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetFillStyle(4000);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLogy();
   Sphericity_both_17->SetLeftMargin(0.15709);
   Sphericity_both_17->SetRightMargin(0.1234783);
   Sphericity_both_17->SetBottomMargin(0.12);
   Sphericity_both_17->SetFrameFillStyle(1000);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameFillStyle(1000);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(3.298763);
   
   TH1F *st_stack_250 = new TH1F("st_stack_250","",25,0,1);
   st_stack_250->SetMinimum(0.7941704);
   st_stack_250->SetMaximum(3.640747);
   st_stack_250->SetDirectory(0);
   st_stack_250->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_250->SetLineColor(ci);
   st_stack_250->GetXaxis()->SetTitle("Sphericity");
   st_stack_250->GetXaxis()->SetRange(1,25);
   st_stack_250->GetXaxis()->SetLabelFont(42);
   st_stack_250->GetXaxis()->SetTitleOffset(1);
   st_stack_250->GetXaxis()->SetTitleFont(42);
   st_stack_250->GetYaxis()->SetTitle("Event/0.04");
   st_stack_250->GetYaxis()->SetLabelFont(42);
   st_stack_250->GetYaxis()->SetTitleSize(0.037);
   st_stack_250->GetYaxis()->SetTitleFont(42);
   st_stack_250->GetZaxis()->SetLabelFont(42);
   st_stack_250->GetZaxis()->SetTitleOffset(1);
   st_stack_250->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_250);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,1.90375);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,1.726491);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,1.010102);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,0.6330983);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,0.429794);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,0.2021073);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,0.07716666);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,0.02831516);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,0.02680583);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,0.02241267);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,0.0173158);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,0.01129595);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,0.005328844);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,0.008486189);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,0.007788883);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,0.003904458);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,0.001907029);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,0.05983907);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,0.05677845);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,0.04421001);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,0.03490672);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,0.02900833);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,0.01917682);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,0.01182721);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,0.007050166);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,0.006867456);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,0.006568477);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,0.005545455);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,0.004650417);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,0.003127211);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,0.003802473);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,0.003579058);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,0.002760869);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,0.001907029);
   VbbHcc_both_Sphericity_stack_1->SetEntries(3542);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,0.834223);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,0.7604955);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,0.4068461);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,0.2620363);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,0.144645);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,0.07375645);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,0.04049036);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,0.02515012);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,0.01396163);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,0.0115151);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,0.00667029);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,0.004620594);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,0.004503797);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,0.003565264);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,0.002843169);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,0.001882078);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,0.001247255);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,0.0004164727);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,0.0004366594);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,0.0003035396);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,0.014181);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,0.01351929);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,0.009915372);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,0.00796177);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,0.005887586);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,0.004196167);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,0.003134212);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,0.002429517);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,0.001856347);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,0.001668475);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,0.001237282);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,0.001050549);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,0.001030121);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,0.0008809383);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,0.0008113366);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,0.0006677984);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,0.0005604569);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,0.0003043619);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.0003121578);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.0003035396);
   VbbHcc_both_Sphericity_stack_2->SetEntries(11286);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_17->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->SetSelected(Sphericity_both_17);
}
