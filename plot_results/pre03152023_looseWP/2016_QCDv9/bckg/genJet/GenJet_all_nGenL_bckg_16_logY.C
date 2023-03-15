#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenL_bckg_16_logY()
{
//=========Macro generated from canvas: GenJet_all_nGenL_bckg_16/GenJet_all_nGenL_bckg_16
//=========  (Fri Mar 10 12:49:21 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenL_bckg_16 = new TCanvas("GenJet_all_nGenL_bckg_16", "GenJet_all_nGenL_bckg_16",0,0,600,600);
   GenJet_all_nGenL_bckg_16->SetHighLightColor(2);
   GenJet_all_nGenL_bckg_16->Range(-4.867058,-2.848423,22.93266,13.91948);
   GenJet_all_nGenL_bckg_16->SetFillColor(0);
   GenJet_all_nGenL_bckg_16->SetFillStyle(4000);
   GenJet_all_nGenL_bckg_16->SetBorderMode(0);
   GenJet_all_nGenL_bckg_16->SetBorderSize(2);
   GenJet_all_nGenL_bckg_16->SetLogy();
   GenJet_all_nGenL_bckg_16->SetLeftMargin(0.15709);
   GenJet_all_nGenL_bckg_16->SetRightMargin(0.1234783);
   GenJet_all_nGenL_bckg_16->SetBottomMargin(0.12);
   GenJet_all_nGenL_bckg_16->SetFrameFillStyle(1000);
   GenJet_all_nGenL_bckg_16->SetFrameBorderMode(0);
   GenJet_all_nGenL_bckg_16->SetFrameFillStyle(1000);
   GenJet_all_nGenL_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(5.229493e+11);
   
   TH1F *st_stack_8 = new TH1F("st_stack_8","",20,-0.5,19.5);
   st_stack_8->SetMinimum(0.145789);
   st_stack_8->SetMaximum(1.748581e+12);
   st_stack_8->SetDirectory(0);
   st_stack_8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_8->SetLineColor(ci);
   st_stack_8->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_8->GetXaxis()->SetLabelFont(42);
   st_stack_8->GetXaxis()->SetTitleOffset(1);
   st_stack_8->GetXaxis()->SetTitleFont(42);
   st_stack_8->GetYaxis()->SetTitle("Event/1.0");
   st_stack_8->GetYaxis()->SetLabelFont(42);
   st_stack_8->GetYaxis()->SetTitleSize(0.037);
   st_stack_8->GetYaxis()->SetTitleFont(42);
   st_stack_8->GetZaxis()->SetLabelFont(42);
   st_stack_8->GetZaxis()->SetTitleOffset(1);
   st_stack_8->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_8);
   
   
   TH1D *GenJet_all_nGenL_stack_1 = new TH1D("GenJet_all_nGenL_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenL_stack_1->SetBinContent(1,3.999303e+11);
   GenJet_all_nGenL_stack_1->SetBinContent(2,4.340458e+11);
   GenJet_all_nGenL_stack_1->SetBinContent(3,2.139644e+11);
   GenJet_all_nGenL_stack_1->SetBinContent(4,7.52396e+10);
   GenJet_all_nGenL_stack_1->SetBinContent(5,2.177193e+10);
   GenJet_all_nGenL_stack_1->SetBinContent(6,5.723907e+09);
   GenJet_all_nGenL_stack_1->SetBinContent(7,1.43349e+09);
   GenJet_all_nGenL_stack_1->SetBinContent(8,3.563991e+08);
   GenJet_all_nGenL_stack_1->SetBinContent(9,8.653171e+07);
   GenJet_all_nGenL_stack_1->SetBinContent(10,2.120084e+07);
   GenJet_all_nGenL_stack_1->SetBinContent(11,4921551);
   GenJet_all_nGenL_stack_1->SetBinContent(12,1213686);
   GenJet_all_nGenL_stack_1->SetBinContent(13,366000);
   GenJet_all_nGenL_stack_1->SetBinContent(14,85914.44);
   GenJet_all_nGenL_stack_1->SetBinContent(15,65323.05);
   GenJet_all_nGenL_stack_1->SetBinContent(16,302.2318);
   GenJet_all_nGenL_stack_1->SetBinError(1,9.217835e+07);
   GenJet_all_nGenL_stack_1->SetBinError(2,9.513332e+07);
   GenJet_all_nGenL_stack_1->SetBinError(3,6.628977e+07);
   GenJet_all_nGenL_stack_1->SetBinError(4,3.901285e+07);
   GenJet_all_nGenL_stack_1->SetBinError(5,2.082134e+07);
   GenJet_all_nGenL_stack_1->SetBinError(6,1.060688e+07);
   GenJet_all_nGenL_stack_1->SetBinError(7,5281090);
   GenJet_all_nGenL_stack_1->SetBinError(8,2630636);
   GenJet_all_nGenL_stack_1->SetBinError(9,1293751);
   GenJet_all_nGenL_stack_1->SetBinError(10,638590.2);
   GenJet_all_nGenL_stack_1->SetBinError(11,307401.8);
   GenJet_all_nGenL_stack_1->SetBinError(12,149778.6);
   GenJet_all_nGenL_stack_1->SetBinError(13,85282.79);
   GenJet_all_nGenL_stack_1->SetBinError(14,38585.07);
   GenJet_all_nGenL_stack_1->SetBinError(15,35995.23);
   GenJet_all_nGenL_stack_1->SetBinError(16,275.0834);
   GenJet_all_nGenL_stack_1->SetEntries(2.416594e+08);

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
   GenJet_all_nGenL_stack_2->SetBinContent(1,188680.3);
   GenJet_all_nGenL_stack_2->SetBinContent(2,2140150);
   GenJet_all_nGenL_stack_2->SetBinContent(3,7407493);
   GenJet_all_nGenL_stack_2->SetBinContent(4,9223525);
   GenJet_all_nGenL_stack_2->SetBinContent(5,6315629);
   GenJet_all_nGenL_stack_2->SetBinContent(6,2974497);
   GenJet_all_nGenL_stack_2->SetBinContent(7,1113570);
   GenJet_all_nGenL_stack_2->SetBinContent(8,359758.2);
   GenJet_all_nGenL_stack_2->SetBinContent(9,105167.2);
   GenJet_all_nGenL_stack_2->SetBinContent(10,28700.74);
   GenJet_all_nGenL_stack_2->SetBinContent(11,7453.887);
   GenJet_all_nGenL_stack_2->SetBinContent(12,1868.515);
   GenJet_all_nGenL_stack_2->SetBinContent(13,449.7967);
   GenJet_all_nGenL_stack_2->SetBinContent(14,108.4527);
   GenJet_all_nGenL_stack_2->SetBinContent(15,26.57838);
   GenJet_all_nGenL_stack_2->SetBinContent(16,4.662289);
   GenJet_all_nGenL_stack_2->SetBinContent(17,1.492522);
   GenJet_all_nGenL_stack_2->SetBinContent(18,0.1508867);
   GenJet_all_nGenL_stack_2->SetBinContent(19,0.1045795);
   GenJet_all_nGenL_stack_2->SetBinError(1,101.4654);
   GenJet_all_nGenL_stack_2->SetBinError(2,347.1808);
   GenJet_all_nGenL_stack_2->SetBinError(3,658.6588);
   GenJet_all_nGenL_stack_2->SetBinError(4,756.0227);
   GenJet_all_nGenL_stack_2->SetBinError(5,639.0075);
   GenJet_all_nGenL_stack_2->SetBinError(6,443.5378);
   GenJet_all_nGenL_stack_2->SetBinError(7,273.1313);
   GenJet_all_nGenL_stack_2->SetBinError(8,155.8447);
   GenJet_all_nGenL_stack_2->SetBinError(9,84.4739);
   GenJet_all_nGenL_stack_2->SetBinError(10,44.21216);
   GenJet_all_nGenL_stack_2->SetBinError(11,22.55669);
   GenJet_all_nGenL_stack_2->SetBinError(12,11.31511);
   GenJet_all_nGenL_stack_2->SetBinError(13,5.572527);
   GenJet_all_nGenL_stack_2->SetBinError(14,2.727296);
   GenJet_all_nGenL_stack_2->SetBinError(15,1.359349);
   GenJet_all_nGenL_stack_2->SetBinError(16,0.5597281);
   GenJet_all_nGenL_stack_2->SetBinError(17,0.3221271);
   GenJet_all_nGenL_stack_2->SetBinError(18,0.1013865);
   GenJet_all_nGenL_stack_2->SetBinError(19,0.07422126);
   GenJet_all_nGenL_stack_2->SetEntries(5.194289e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_all_nGenL_bckg_16->Modified();
   GenJet_all_nGenL_bckg_16->cd();
   GenJet_all_nGenL_bckg_16->SetSelected(GenJet_all_nGenL_bckg_16);
}
