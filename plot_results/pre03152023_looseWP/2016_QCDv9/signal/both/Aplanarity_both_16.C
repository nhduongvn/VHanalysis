#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Fri Mar 10 11:26:58 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2183529,-2.898395,1.171633,21.2549);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetFillStyle(4000);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15709);
   Aplanarity_both_16->SetRightMargin(0.1234783);
   Aplanarity_both_16->SetBottomMargin(0.12);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(18.83957);
   
   TH1F *st_stack_189 = new TH1F("st_stack_189","",50,0,1);
   st_stack_189->SetMinimum(0);
   st_stack_189->SetMaximum(18.83957);
   st_stack_189->SetDirectory(0);
   st_stack_189->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_189->SetLineColor(ci);
   st_stack_189->GetXaxis()->SetTitle("Aplanarity");
   st_stack_189->GetXaxis()->SetRange(1,50);
   st_stack_189->GetXaxis()->SetLabelFont(42);
   st_stack_189->GetXaxis()->SetTitleOffset(1);
   st_stack_189->GetXaxis()->SetTitleFont(42);
   st_stack_189->GetYaxis()->SetTitle("Event/0.02");
   st_stack_189->GetYaxis()->SetLabelFont(42);
   st_stack_189->GetYaxis()->SetTitleSize(0.037);
   st_stack_189->GetYaxis()->SetTitleFont(42);
   st_stack_189->GetZaxis()->SetLabelFont(42);
   st_stack_189->GetZaxis()->SetTitleOffset(1);
   st_stack_189->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_189);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,11.26702);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,7.657117);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,4.898565);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,3.237019);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,2.224224);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,1.498581);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,1.130523);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,0.8263151);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,0.5240239);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,0.4162213);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,0.299279);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,0.1843577);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,0.1674786);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,0.1074158);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,0.07461202);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,0.04503199);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,0.02923035);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,0.008996467);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,0.01116012);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,0.182797);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,0.1512578);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,0.1213529);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,0.09810999);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,0.08182483);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,0.06703774);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,0.0591393);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,0.04993882);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,0.04087412);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,0.03572584);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,0.02976746);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,0.02420866);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,0.02222081);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,0.01764793);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,0.01483269);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,0.01164345);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,0.009283122);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,0.005201123);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,0.0055973);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(12314);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);
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
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,4.369819);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,3.10694);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,2.035999);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,1.324372);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,0.8991608);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,0.6055482);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,0.4431472);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,0.2777128);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,0.2079986);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,0.1393393);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,0.09266);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,0.06573413);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.0409339);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.02141321);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.01692464);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.01058988);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.005765131);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.002801956);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,0.002311251);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,0.0008110842);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,0.04060107);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,0.03442424);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,0.02791071);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,0.02256377);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,0.01860403);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,0.01526023);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,0.01305836);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.01034924);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.008958693);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.00731647);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.005975386);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.005024129);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.003936196);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.002869346);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.002558559);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.002018406);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.001492893);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.001060768);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.000950074);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,0.0005745076);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(36571);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);
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
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
