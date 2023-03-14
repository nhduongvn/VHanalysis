#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_all_bckg_18()
{
//=========Macro generated from canvas: CvL_jets_all_bckg_18/CvL_jets_all_bckg_18
//=========  (Thu Mar  9 13:30:52 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_all_bckg_18 = new TCanvas("CvL_jets_all_bckg_18", "CvL_jets_all_bckg_18",0,0,600,600);
   CvL_jets_all_bckg_18->SetHighLightColor(2);
   CvL_jets_all_bckg_18->Range(-0.2183529,-1.135907e+12,1.171633,8.329982e+12);
   CvL_jets_all_bckg_18->SetFillColor(0);
   CvL_jets_all_bckg_18->SetFillStyle(4000);
   CvL_jets_all_bckg_18->SetBorderMode(0);
   CvL_jets_all_bckg_18->SetBorderSize(2);
   CvL_jets_all_bckg_18->SetLeftMargin(0.15709);
   CvL_jets_all_bckg_18->SetRightMargin(0.1234783);
   CvL_jets_all_bckg_18->SetBottomMargin(0.12);
   CvL_jets_all_bckg_18->SetFrameFillStyle(1000);
   CvL_jets_all_bckg_18->SetFrameBorderMode(0);
   CvL_jets_all_bckg_18->SetFrameFillStyle(1000);
   CvL_jets_all_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(7.383393e+12);
   
   TH1F *st_stack_174 = new TH1F("st_stack_174","",20,0,1);
   st_stack_174->SetMinimum(0);
   st_stack_174->SetMaximum(7.383393e+12);
   st_stack_174->SetDirectory(0);
   st_stack_174->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_174->SetLineColor(ci);
   st_stack_174->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_174->GetXaxis()->SetRange(1,20);
   st_stack_174->GetXaxis()->SetLabelFont(42);
   st_stack_174->GetXaxis()->SetTitleOffset(1);
   st_stack_174->GetXaxis()->SetTitleFont(42);
   st_stack_174->GetYaxis()->SetTitle("Event/0.05");
   st_stack_174->GetYaxis()->SetLabelFont(42);
   st_stack_174->GetYaxis()->SetTitleSize(0.037);
   st_stack_174->GetYaxis()->SetTitleFont(42);
   st_stack_174->GetZaxis()->SetLabelFont(42);
   st_stack_174->GetZaxis()->SetTitleOffset(1);
   st_stack_174->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_174);
   
   
   TH1D *VbbHcc_jets_all_CvL_stack_1 = new TH1D("VbbHcc_jets_all_CvL_stack_1","",20,0,1);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(1,1.471068e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(2,6.128026e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(3,1.438446e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(4,3.638923e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(5,1.626779e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(6,9.42315e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(7,5.866168e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(8,4.032908e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(9,3.107524e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(10,2.506614e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(11,2.05744e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(12,1.720999e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(13,1.523761e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(14,1.407876e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(15,1.373122e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(16,1.406176e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(17,1.518067e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(18,1.820655e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(19,2.433293e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(20,6.321729e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(1,2.006021e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(2,3.977297e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(3,1.910992e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(4,9.716272e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(5,6.54097e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(6,4.966589e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(7,3.92197e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(8,3.254729e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(9,2.885939e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(10,2.586183e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(11,2.382117e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(12,2.13411e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(13,2.023707e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(14,1.964627e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(15,1.924829e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(16,1.967428e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(17,2.03534e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(18,2.265032e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(19,2.589e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(20,4.191268e+07);
   VbbHcc_jets_all_CvL_stack_1->SetEntries(1.875775e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CvL_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvL_stack_2 = new TH1D("VbbHcc_jets_all_CvL_stack_2","",20,0,1);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(1,6.260423e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(2,1.899757e+08);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(3,5.289218e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(4,1.766875e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(5,9824182);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(6,6807669);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(7,5165588);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(8,4254826);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(9,3842723);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(10,3660892);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(11,3597380);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(12,3621041);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(13,3852482);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(14,4217820);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(15,4816631);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(16,5746909);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(17,7053476);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(18,9343890);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(19,1.310851e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(20,2.889094e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(1,2233.846);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(2,3769.011);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(3,1988.145);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(4,1167.524);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(5,872.5039);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(6,727.5915);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(7,636.3569);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(8,577.1405);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(9,548.7253);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(10,536.2474);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(11,531.0017);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(12,532.5053);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(13,550.4946);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(14,575.635);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(15,614.7648);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(16,671.7711);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(17,744.6371);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(18,857.4651);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(19,1018.718);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(20,1525.537);
   VbbHcc_jets_all_CvL_stack_2->SetEntries(7.277891e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CvL_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_all_bckg_18->Modified();
   CvL_jets_all_bckg_18->cd();
   CvL_jets_all_bckg_18->SetSelected(CvL_jets_all_bckg_18);
}
