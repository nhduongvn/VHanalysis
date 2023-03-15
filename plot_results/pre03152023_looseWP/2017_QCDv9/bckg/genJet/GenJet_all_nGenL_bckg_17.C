#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenL_bckg_17()
{
//=========Macro generated from canvas: GenJet_all_nGenL_bckg_17/GenJet_all_nGenL_bckg_17
//=========  (Fri Mar 10 12:49:27 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenL_bckg_17 = new TCanvas("GenJet_all_nGenL_bckg_17", "GenJet_all_nGenL_bckg_17",0,0,600,600);
   GenJet_all_nGenL_bckg_17->SetHighLightColor(2);
   GenJet_all_nGenL_bckg_17->Range(-4.867058,-9.842867e+10,22.93266,7.218102e+11);
   GenJet_all_nGenL_bckg_17->SetFillColor(0);
   GenJet_all_nGenL_bckg_17->SetFillStyle(4000);
   GenJet_all_nGenL_bckg_17->SetBorderMode(0);
   GenJet_all_nGenL_bckg_17->SetBorderSize(2);
   GenJet_all_nGenL_bckg_17->SetLeftMargin(0.15709);
   GenJet_all_nGenL_bckg_17->SetRightMargin(0.1234783);
   GenJet_all_nGenL_bckg_17->SetBottomMargin(0.12);
   GenJet_all_nGenL_bckg_17->SetFrameFillStyle(1000);
   GenJet_all_nGenL_bckg_17->SetFrameBorderMode(0);
   GenJet_all_nGenL_bckg_17->SetFrameFillStyle(1000);
   GenJet_all_nGenL_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(6.397863e+11);
   
   TH1F *st_stack_10 = new TH1F("st_stack_10","",20,-0.5,19.5);
   st_stack_10->SetMinimum(0);
   st_stack_10->SetMaximum(6.397863e+11);
   st_stack_10->SetDirectory(0);
   st_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_10->SetLineColor(ci);
   st_stack_10->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_10->GetXaxis()->SetLabelFont(42);
   st_stack_10->GetXaxis()->SetTitleOffset(1);
   st_stack_10->GetXaxis()->SetTitleFont(42);
   st_stack_10->GetYaxis()->SetTitle("Event/1.0");
   st_stack_10->GetYaxis()->SetLabelFont(42);
   st_stack_10->GetYaxis()->SetTitleSize(0.037);
   st_stack_10->GetYaxis()->SetTitleFont(42);
   st_stack_10->GetZaxis()->SetLabelFont(42);
   st_stack_10->GetZaxis()->SetTitleOffset(1);
   st_stack_10->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_10);
   
   
   TH1D *GenJet_all_nGenL_stack_1 = new TH1D("GenJet_all_nGenL_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenL_stack_1->SetBinContent(1,4.905591e+11);
   GenJet_all_nGenL_stack_1->SetBinContent(2,5.3102e+11);
   GenJet_all_nGenL_stack_1->SetBinContent(3,2.61011e+11);
   GenJet_all_nGenL_stack_1->SetBinContent(4,9.173405e+10);
   GenJet_all_nGenL_stack_1->SetBinContent(5,2.65239e+10);
   GenJet_all_nGenL_stack_1->SetBinContent(6,6.963585e+09);
   GenJet_all_nGenL_stack_1->SetBinContent(7,1.758785e+09);
   GenJet_all_nGenL_stack_1->SetBinContent(8,4.342689e+08);
   GenJet_all_nGenL_stack_1->SetBinContent(9,1.053733e+08);
   GenJet_all_nGenL_stack_1->SetBinContent(10,2.598996e+07);
   GenJet_all_nGenL_stack_1->SetBinContent(11,6079925);
   GenJet_all_nGenL_stack_1->SetBinContent(12,1245587);
   GenJet_all_nGenL_stack_1->SetBinContent(13,356097.3);
   GenJet_all_nGenL_stack_1->SetBinContent(14,93267.13);
   GenJet_all_nGenL_stack_1->SetBinContent(15,25069.99);
   GenJet_all_nGenL_stack_1->SetBinContent(16,58.88362);
   GenJet_all_nGenL_stack_1->SetBinError(1,8.949244e+07);
   GenJet_all_nGenL_stack_1->SetBinError(2,9.224914e+07);
   GenJet_all_nGenL_stack_1->SetBinError(3,6.419717e+07);
   GenJet_all_nGenL_stack_1->SetBinError(4,3.779082e+07);
   GenJet_all_nGenL_stack_1->SetBinError(5,2.016506e+07);
   GenJet_all_nGenL_stack_1->SetBinError(6,1.026815e+07);
   GenJet_all_nGenL_stack_1->SetBinError(7,5137439);
   GenJet_all_nGenL_stack_1->SetBinError(8,2547829);
   GenJet_all_nGenL_stack_1->SetBinError(9,1253095);
   GenJet_all_nGenL_stack_1->SetBinError(10,619721.7);
   GenJet_all_nGenL_stack_1->SetBinError(11,302702);
   GenJet_all_nGenL_stack_1->SetBinError(12,135172);
   GenJet_all_nGenL_stack_1->SetBinError(13,72210.13);
   GenJet_all_nGenL_stack_1->SetBinError(14,36657.92);
   GenJet_all_nGenL_stack_1->SetBinError(15,21422.51);
   GenJet_all_nGenL_stack_1->SetBinError(16,36.60232);
   GenJet_all_nGenL_stack_1->SetEntries(3.028331e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_all_nGenL_stack_1->SetFillColor(ci);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenL_stack_1,"");
   
   TH1D *GenJet_all_nGenL_stack_2 = new TH1D("GenJet_all_nGenL_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenL_stack_2->SetBinContent(1,229442.7);
   GenJet_all_nGenL_stack_2->SetBinContent(2,2602040);
   GenJet_all_nGenL_stack_2->SetBinContent(3,9007431);
   GenJet_all_nGenL_stack_2->SetBinContent(4,1.120544e+07);
   GenJet_all_nGenL_stack_2->SetBinContent(5,7663689);
   GenJet_all_nGenL_stack_2->SetBinContent(6,3605858);
   GenJet_all_nGenL_stack_2->SetBinContent(7,1348012);
   GenJet_all_nGenL_stack_2->SetBinContent(8,434603.5);
   GenJet_all_nGenL_stack_2->SetBinContent(9,126977.6);
   GenJet_all_nGenL_stack_2->SetBinContent(10,34723.82);
   GenJet_all_nGenL_stack_2->SetBinContent(11,8964.242);
   GenJet_all_nGenL_stack_2->SetBinContent(12,2237.741);
   GenJet_all_nGenL_stack_2->SetBinContent(13,531.3641);
   GenJet_all_nGenL_stack_2->SetBinContent(14,132.5099);
   GenJet_all_nGenL_stack_2->SetBinContent(15,31.7973);
   GenJet_all_nGenL_stack_2->SetBinContent(16,7.353624);
   GenJet_all_nGenL_stack_2->SetBinContent(17,1.785378);
   GenJet_all_nGenL_stack_2->SetBinContent(18,0.2760809);
   GenJet_all_nGenL_stack_2->SetBinContent(19,0.09639432);
   GenJet_all_nGenL_stack_2->SetBinError(1,113.0777);
   GenJet_all_nGenL_stack_2->SetBinError(2,388.6018);
   GenJet_all_nGenL_stack_2->SetBinError(3,741.2193);
   GenJet_all_nGenL_stack_2->SetBinError(4,856.3108);
   GenJet_all_nGenL_stack_2->SetBinError(5,727.07);
   GenJet_all_nGenL_stack_2->SetBinError(6,505.7203);
   GenJet_all_nGenL_stack_2->SetBinError(7,311.6139);
   GenJet_all_nGenL_stack_2->SetBinError(8,177.781);
   GenJet_all_nGenL_stack_2->SetBinError(9,96.384);
   GenJet_all_nGenL_stack_2->SetBinError(10,50.52814);
   GenJet_all_nGenL_stack_2->SetBinError(11,25.70709);
   GenJet_all_nGenL_stack_2->SetBinError(12,12.86736);
   GenJet_all_nGenL_stack_2->SetBinError(13,6.264643);
   GenJet_all_nGenL_stack_2->SetBinError(14,3.14647);
   GenJet_all_nGenL_stack_2->SetBinError(15,1.531532);
   GenJet_all_nGenL_stack_2->SetBinError(16,0.7315041);
   GenJet_all_nGenL_stack_2->SetBinError(17,0.3680219);
   GenJet_all_nGenL_stack_2->SetBinError(18,0.1597088);
   GenJet_all_nGenL_stack_2->SetBinError(19,0.06875981);
   GenJet_all_nGenL_stack_2->SetEntries(6.292104e+08);

   ci = TColor::GetColor("#990099");
   GenJet_all_nGenL_stack_2->SetFillColor(ci);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenL_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenL_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenL_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GenJet_all_nGenL_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   GenJet_all_nGenL_bckg_17->Modified();
   GenJet_all_nGenL_bckg_17->cd();
   GenJet_all_nGenL_bckg_17->SetSelected(GenJet_all_nGenL_bckg_17);
}
