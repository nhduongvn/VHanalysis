#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenB_bckg_16_logY()
{
//=========Macro generated from canvas: GenJet_all_nGenB_bckg_16/GenJet_all_nGenB_bckg_16
//=========  (Fri Mar 10 12:49:21 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenB_bckg_16 = new TCanvas("GenJet_all_nGenB_bckg_16", "GenJet_all_nGenB_bckg_16",0,0,600,600);
   GenJet_all_nGenB_bckg_16->SetHighLightColor(2);
   GenJet_all_nGenB_bckg_16->Range(-4.867058,-2.923753,22.93266,14.37079);
   GenJet_all_nGenB_bckg_16->SetFillColor(0);
   GenJet_all_nGenB_bckg_16->SetFillStyle(4000);
   GenJet_all_nGenB_bckg_16->SetBorderMode(0);
   GenJet_all_nGenB_bckg_16->SetBorderSize(2);
   GenJet_all_nGenB_bckg_16->SetLogy();
   GenJet_all_nGenB_bckg_16->SetLeftMargin(0.15709);
   GenJet_all_nGenB_bckg_16->SetRightMargin(0.1234783);
   GenJet_all_nGenB_bckg_16->SetBottomMargin(0.12);
   GenJet_all_nGenB_bckg_16->SetFrameFillStyle(1000);
   GenJet_all_nGenB_bckg_16->SetFrameBorderMode(0);
   GenJet_all_nGenB_bckg_16->SetFrameFillStyle(1000);
   GenJet_all_nGenB_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(1.279748e+12);
   
   TH1F *st_stack_14 = new TH1F("st_stack_14","",20,-0.5,19.5);
   st_stack_14->SetMinimum(0.1417723);
   st_stack_14->SetMaximum(4.37856e+12);
   st_stack_14->SetDirectory(0);
   st_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_14->SetLineColor(ci);
   st_stack_14->GetXaxis()->SetTitle("Gen b-jet multiplicity");
   st_stack_14->GetXaxis()->SetLabelFont(42);
   st_stack_14->GetXaxis()->SetTitleOffset(1);
   st_stack_14->GetXaxis()->SetTitleFont(42);
   st_stack_14->GetYaxis()->SetTitle("Event/1.0");
   st_stack_14->GetYaxis()->SetLabelFont(42);
   st_stack_14->GetYaxis()->SetTitleSize(0.037);
   st_stack_14->GetYaxis()->SetTitleFont(42);
   st_stack_14->GetZaxis()->SetLabelFont(42);
   st_stack_14->GetZaxis()->SetTitleOffset(1);
   st_stack_14->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_14);
   
   
   TH1D *GenJet_all_nGenB_stack_1 = new TH1D("GenJet_all_nGenB_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenB_stack_1->SetBinContent(1,1.06219e+12);
   GenJet_all_nGenB_stack_1->SetBinContent(2,5.550358e+10);
   GenJet_all_nGenB_stack_1->SetBinContent(3,3.279523e+10);
   GenJet_all_nGenB_stack_1->SetBinContent(4,1.808126e+09);
   GenJet_all_nGenB_stack_1->SetBinContent(5,2.650002e+08);
   GenJet_all_nGenB_stack_1->SetBinContent(6,1.661223e+07);
   GenJet_all_nGenB_stack_1->SetBinContent(7,1014707);
   GenJet_all_nGenB_stack_1->SetBinContent(8,115280.5);
   GenJet_all_nGenB_stack_1->SetBinContent(9,2229.519);
   GenJet_all_nGenB_stack_1->SetBinContent(10,12.30751);
   GenJet_all_nGenB_stack_1->SetBinError(1,1.489934e+08);
   GenJet_all_nGenB_stack_1->SetBinError(2,3.384235e+07);
   GenJet_all_nGenB_stack_1->SetBinError(3,2.572594e+07);
   GenJet_all_nGenB_stack_1->SetBinError(4,5936263);
   GenJet_all_nGenB_stack_1->SetBinError(5,2208645);
   GenJet_all_nGenB_stack_1->SetBinError(6,532125.6);
   GenJet_all_nGenB_stack_1->SetBinError(7,120947.7);
   GenJet_all_nGenB_stack_1->SetBinError(8,43732.58);
   GenJet_all_nGenB_stack_1->SetBinError(9,1549.798);
   GenJet_all_nGenB_stack_1->SetBinError(10,9.266169);
   GenJet_all_nGenB_stack_1->SetEntries(2.416594e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_all_nGenB_stack_1->SetFillColor(ci);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenB_stack_1,"");
   
   TH1D *GenJet_all_nGenB_stack_2 = new TH1D("GenJet_all_nGenB_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenB_stack_2->SetBinContent(1,35754.88);
   GenJet_all_nGenB_stack_2->SetBinContent(2,2319129);
   GenJet_all_nGenB_stack_2->SetBinContent(3,2.496742e+07);
   GenJet_all_nGenB_stack_2->SetBinContent(4,2136765);
   GenJet_all_nGenB_stack_2->SetBinContent(5,367493.3);
   GenJet_all_nGenB_stack_2->SetBinContent(6,36182.92);
   GenJet_all_nGenB_stack_2->SetBinContent(7,3943.327);
   GenJet_all_nGenB_stack_2->SetBinContent(8,356.4401);
   GenJet_all_nGenB_stack_2->SetBinContent(9,31.40182);
   GenJet_all_nGenB_stack_2->SetBinContent(10,2.652351);
   GenJet_all_nGenB_stack_2->SetBinContent(11,0.3816438);
   GenJet_all_nGenB_stack_2->SetBinError(1,47.1624);
   GenJet_all_nGenB_stack_2->SetBinError(2,379.2959);
   GenJet_all_nGenB_stack_2->SetBinError(3,1243.102);
   GenJet_all_nGenB_stack_2->SetBinError(4,364.7591);
   GenJet_all_nGenB_stack_2->SetBinError(5,151.5127);
   GenJet_all_nGenB_stack_2->SetBinError(6,47.6761);
   GenJet_all_nGenB_stack_2->SetBinError(7,15.76008);
   GenJet_all_nGenB_stack_2->SetBinError(8,4.756679);
   GenJet_all_nGenB_stack_2->SetBinError(9,1.414114);
   GenJet_all_nGenB_stack_2->SetBinError(10,0.4057467);
   GenJet_all_nGenB_stack_2->SetBinError(11,0.157131);
   GenJet_all_nGenB_stack_2->SetEntries(5.194289e+08);

   ci = TColor::GetColor("#990099");
   GenJet_all_nGenB_stack_2->SetFillColor(ci);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenB_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_all_nGenB_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_all_nGenB_bckg_16->Modified();
   GenJet_all_nGenB_bckg_16->cd();
   GenJet_all_nGenB_bckg_16->SetSelected(GenJet_all_nGenB_bckg_16);
}
