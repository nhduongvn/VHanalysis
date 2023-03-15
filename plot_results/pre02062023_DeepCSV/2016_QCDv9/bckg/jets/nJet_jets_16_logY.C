#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_16_logY()
{
//=========Macro generated from canvas: nJet_jets_16/nJet_jets_16
//=========  (Mon Dec 19 11:02:03 2022) by ROOT version 6.26/06
   TCanvas *nJet_jets_16 = new TCanvas("nJet_jets_16", "nJet_jets_16",0,0,600,600);
   nJet_jets_16->SetHighLightColor(2);
   nJet_jets_16->Range(-3.556941,-2.044627,15.90286,16.00292);
   nJet_jets_16->SetFillColor(0);
   nJet_jets_16->SetFillStyle(4000);
   nJet_jets_16->SetBorderMode(0);
   nJet_jets_16->SetBorderSize(2);
   nJet_jets_16->SetLogy();
   nJet_jets_16->SetLeftMargin(0.15709);
   nJet_jets_16->SetRightMargin(0.1234783);
   nJet_jets_16->SetBottomMargin(0.12);
   nJet_jets_16->SetFrameFillStyle(1000);
   nJet_jets_16->SetFrameBorderMode(0);
   nJet_jets_16->SetFrameFillStyle(1000);
   nJet_jets_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(9.689329);
   st->SetMaximum(4.467339e+13);
   
   TH1F *st_stack_1 = new TH1F("st_stack_1","",14,-0.5,13.5);
   st_stack_1->SetMinimum(1.321535);
   st_stack_1->SetMaximum(1.5782e+14);
   st_stack_1->SetDirectory(0);
   st_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_1->SetLineColor(ci);
   st_stack_1->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_1->GetXaxis()->SetRange(1,14);
   st_stack_1->GetXaxis()->SetLabelFont(42);
   st_stack_1->GetXaxis()->SetTitleOffset(1);
   st_stack_1->GetXaxis()->SetTitleFont(42);
   st_stack_1->GetYaxis()->SetTitle("Events/1.0");
   st_stack_1->GetYaxis()->SetLabelFont(42);
   st_stack_1->GetYaxis()->SetTitleSize(0.037);
   st_stack_1->GetYaxis()->SetTitleFont(42);
   st_stack_1->GetZaxis()->SetLabelFont(42);
   st_stack_1->GetZaxis()->SetTitleOffset(1);
   st_stack_1->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_1);
   
   
   TH1D *VbbHcc_jets_nJet_stack_1 = new TH1D("VbbHcc_jets_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,1.807956e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,4.467328e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,4.253318e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,8.228156e+10);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,1.384843e+10);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,2.125852e+09);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,3.446663e+08);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,5.784389e+07);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,9827423);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,1680360);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,285703.7);
   VbbHcc_jets_nJet_stack_1->SetBinContent(12,51750.84);
   VbbHcc_jets_nJet_stack_1->SetBinContent(13,7946.563);
   VbbHcc_jets_nJet_stack_1->SetBinContent(14,1388.416);
   VbbHcc_jets_nJet_stack_1->SetBinContent(15,353.5295);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,5.825049e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,9.082373e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,8.648203e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,3.355496e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,1.063253e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,3076908);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,934312);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,294145);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,94675.11);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,35543.92);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,5112.932);
   VbbHcc_jets_nJet_stack_1->SetBinError(12,1987.401);
   VbbHcc_jets_nJet_stack_1->SetBinError(13,273.0957);
   VbbHcc_jets_nJet_stack_1->SetBinError(14,105.2564);
   VbbHcc_jets_nJet_stack_1->SetBinError(15,51.51354);
   VbbHcc_jets_nJet_stack_1->SetEntries(2.445319e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_nJet_stack_2 = new TH1D("VbbHcc_jets_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,171910);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,1165928);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,3615546);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,6490993);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,7534855);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,5862721);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,3167710);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,1265602);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,417574.1);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,120391);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,31396.43);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,7671.913);
   VbbHcc_jets_nJet_stack_2->SetBinContent(13,1742.766);
   VbbHcc_jets_nJet_stack_2->SetBinContent(14,381.1157);
   VbbHcc_jets_nJet_stack_2->SetBinContent(15,96.31142);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,94.91639);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,250.4002);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,458.2674);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,649.1406);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,741.538);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,683.8492);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,514.3051);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,328.2707);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,189.4945);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,102.0048);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,52.15086);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,25.79937);
   VbbHcc_jets_nJet_stack_2->SetBinError(13,12.28571);
   VbbHcc_jets_nJet_stack_2->SetBinError(14,5.754915);
   VbbHcc_jets_nJet_stack_2->SetBinError(15,2.880905);
   VbbHcc_jets_nJet_stack_2->SetEntries(4.67375e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nJet_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_jets_16->Modified();
   nJet_jets_16->cd();
   nJet_jets_16->SetSelected(nJet_jets_16);
}
