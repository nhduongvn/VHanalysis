#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_algo_16()
{
//=========Macro generated from canvas: Z_jetmass_JEC_algo_16/Z_jetmass_JEC_algo_16
//=========  (Mon Mar 27 11:09:52 2023) by ROOT version 6.26/06
   TCanvas *Z_jetmass_JEC_algo_16 = new TCanvas("Z_jetmass_JEC_algo_16", "Z_jetmass_JEC_algo_16",0,0,600,600);
   Z_jetmass_JEC_algo_16->SetHighLightColor(2);
   Z_jetmass_JEC_algo_16->Range(-65.50587,-0.015854,351.4899,0.1162626);
   Z_jetmass_JEC_algo_16->SetFillColor(0);
   Z_jetmass_JEC_algo_16->SetFillStyle(4000);
   Z_jetmass_JEC_algo_16->SetBorderMode(0);
   Z_jetmass_JEC_algo_16->SetBorderSize(2);
   Z_jetmass_JEC_algo_16->SetLeftMargin(0.15709);
   Z_jetmass_JEC_algo_16->SetRightMargin(0.1234783);
   Z_jetmass_JEC_algo_16->SetBottomMargin(0.12);
   Z_jetmass_JEC_algo_16->SetFrameFillStyle(1000);
   Z_jetmass_JEC_algo_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_algo_16->SetFrameFillStyle(1000);
   Z_jetmass_JEC_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.103051);
   
   TH1F *st_stack_189 = new TH1F("st_stack_189","",150,0,300);
   st_stack_189->SetMinimum(0);
   st_stack_189->SetMaximum(0.103051);
   st_stack_189->SetDirectory(0);
   st_stack_189->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_189->SetLineColor(ci);
   st_stack_189->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   st_stack_189->GetXaxis()->SetRange(1,150);
   st_stack_189->GetXaxis()->SetLabelFont(42);
   st_stack_189->GetXaxis()->SetTitleOffset(1);
   st_stack_189->GetXaxis()->SetTitleFont(42);
   st_stack_189->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_189->GetYaxis()->SetLabelFont(42);
   st_stack_189->GetYaxis()->SetTitleSize(0.037);
   st_stack_189->GetYaxis()->SetTitleFont(42);
   st_stack_189->GetZaxis()->SetLabelFont(42);
   st_stack_189->GetZaxis()->SetTitleOffset(1);
   st_stack_189->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_189);
   
   
   TH1D *VbbHcc_algo_Z_jetmass_JEC_stack_1 = new TH1D("VbbHcc_algo_Z_jetmass_JEC_stack_1","",150,0,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(3,0.00294004);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(4,0.01926047);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(5,0.03565604);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(6,0.06544586);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(7,0.05612003);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(8,0.05662504);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(9,0.03162535);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(10,0.02735744);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(11,0.0117084);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(12,0.01483245);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(13,0.01303455);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(14,0.002606483);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(15,0.006127944);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(16,0.002477238);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(17,0.006194249);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(19,0.003052688);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(20,0.002851593);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(22,0.002897276);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(23,0.002892367);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(3,0.00294004);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(4,0.007354283);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(5,0.01031145);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(6,0.0139746);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(7,0.01292234);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(8,0.01303275);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(9,0.009545906);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(10,0.009139517);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(11,0.005855681);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(12,0.006649444);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(13,0.0059272);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(14,0.002606483);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(15,0.004340639);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(16,0.002477238);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(17,0.004388494);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(19,0.003052688);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(20,0.002851593);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(22,0.002897276);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(23,0.002892367);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetEntries(124);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_JEC_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_jetmass_JEC_stack_2 = new TH1D("VbbHcc_algo_Z_jetmass_JEC_stack_2","",150,0,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(2,0.0007407078);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(4,0.003580079);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(5,0.01542548);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(6,0.02008646);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(7,0.02383106);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(8,0.01389523);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(9,0.01116085);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(10,0.009631801);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(11,0.00519276);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(12,0.003057607);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(13,0.003947712);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(14,0.002354925);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(15,0.001044756);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(16,0.0004284568);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(17,0.0006935178);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(18,0.0003747978);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(19,0.001120061);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(20,0.0007777398);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(21,0.0003751166);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(23,0.0003911379);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(40,0.0003829271);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(2,0.0005243312);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(4,0.00119548);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(5,0.002419201);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(6,0.00278552);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(7,0.003016831);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(8,0.002293823);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(9,0.00207859);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(10,0.001895968);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(11,0.001408912);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(12,0.001092907);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(13,0.001251379);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(14,0.0009102617);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(15,0.0006069712);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(16,0.0004284568);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(17,0.000494764);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(18,0.0003747978);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(19,0.0006467136);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(20,0.0005499544);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(21,0.0003751166);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(23,0.0003911379);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(40,0.0003829271);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetEntries(317);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_JEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_JEC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_JEC_stack_1","ZHcc","F");

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
   Z_jetmass_JEC_algo_16->Modified();
   Z_jetmass_JEC_algo_16->cd();
   Z_jetmass_JEC_algo_16->SetSelected(Z_jetmass_JEC_algo_16);
}
