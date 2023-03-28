#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Mon Mar 27 11:09:51 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2183529,-0.02930791,1.171633,0.2149247);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetFillStyle(4000);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLeftMargin(0.15709);
   Sphericity_algo_17->SetRightMargin(0.1234783);
   Sphericity_algo_17->SetBottomMargin(0.12);
   Sphericity_algo_17->SetFrameFillStyle(1000);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameFillStyle(1000);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.1905014);
   
   TH1F *st_stack_154 = new TH1F("st_stack_154","",25,0,1);
   st_stack_154->SetMinimum(0);
   st_stack_154->SetMaximum(0.1905014);
   st_stack_154->SetDirectory(0);
   st_stack_154->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_154->SetLineColor(ci);
   st_stack_154->GetXaxis()->SetTitle("Sphericity");
   st_stack_154->GetXaxis()->SetRange(1,25);
   st_stack_154->GetXaxis()->SetLabelFont(42);
   st_stack_154->GetXaxis()->SetTitleOffset(1);
   st_stack_154->GetXaxis()->SetTitleFont(42);
   st_stack_154->GetYaxis()->SetTitle("Event/0.04");
   st_stack_154->GetYaxis()->SetLabelFont(42);
   st_stack_154->GetYaxis()->SetTitleSize(0.037);
   st_stack_154->GetYaxis()->SetTitleFont(42);
   st_stack_154->GetZaxis()->SetLabelFont(42);
   st_stack_154->GetZaxis()->SetTitleOffset(1);
   st_stack_154->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_154);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,0.009855007);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,0.07527256);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,0.1017256);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,0.1175464);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,0.1155536);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,0.0634617);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,0.02509285);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,0.01131416);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,0.002669782);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,0.009155857);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,0.001781134);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,0.006853514);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,0.001753361);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,0.003734665);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,0.002039095);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,0.001245675);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,0.002007777);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,0.004118698);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,0.01169088);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,0.01462378);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,0.01506991);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,0.01484548);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,0.01094432);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,0.00682446);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,0.004647832);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,0.003410584);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,0.00476269);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,0.001781134);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,0.003494009);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,0.001753361);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,0.002646606);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,0.002039095);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,0.001245675);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,0.002007777);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(331);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);
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
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,0.004611998);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,0.02853602);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,0.0456511);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,0.04056974);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,0.03297366);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,0.01707605);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,0.01083204);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,0.004255922);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,0.003612098);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,0.002614508);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,0.0008598779);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,0.001545279);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,0.0004681497);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,0.001313156);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,0.001803734);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,0.0004274495);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,0.0007972339);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,0.001158687);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.0003100168);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,0.0009726345);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,0.002561788);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,0.003318404);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,0.003139862);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,0.002826038);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,0.002019087);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,0.001619315);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,0.000966326);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,0.000946568);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,0.0007959862);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,0.0004993847);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,0.0006332298);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.0003331414);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.000591317);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.0006857668);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.0003104866);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.0004606357);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.0005251282);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.0003100168);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(869);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);
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
   entry->SetLineColor(1);
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
   Sphericity_algo_17->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->SetSelected(Sphericity_algo_17);
}
