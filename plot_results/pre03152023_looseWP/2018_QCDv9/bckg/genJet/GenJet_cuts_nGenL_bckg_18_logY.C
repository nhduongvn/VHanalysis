#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenL_bckg_18_logY()
{
//=========Macro generated from canvas: GenJet_cuts_nGenL_bckg_18/GenJet_cuts_nGenL_bckg_18
//=========  (Fri Mar 10 12:49:23 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenL_bckg_18 = new TCanvas("GenJet_cuts_nGenL_bckg_18", "GenJet_cuts_nGenL_bckg_18",0,0,600,600);
   GenJet_cuts_nGenL_bckg_18->SetHighLightColor(2);
   GenJet_cuts_nGenL_bckg_18->Range(-4.867058,-2.963828,22.93266,14.61178);
   GenJet_cuts_nGenL_bckg_18->SetFillColor(0);
   GenJet_cuts_nGenL_bckg_18->SetFillStyle(4000);
   GenJet_cuts_nGenL_bckg_18->SetBorderMode(0);
   GenJet_cuts_nGenL_bckg_18->SetBorderSize(2);
   GenJet_cuts_nGenL_bckg_18->SetLogy();
   GenJet_cuts_nGenL_bckg_18->SetLeftMargin(0.15709);
   GenJet_cuts_nGenL_bckg_18->SetRightMargin(0.1234783);
   GenJet_cuts_nGenL_bckg_18->SetBottomMargin(0.12);
   GenJet_cuts_nGenL_bckg_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenL_bckg_18->SetFrameBorderMode(0);
   GenJet_cuts_nGenL_bckg_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenL_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(2.064307e+12);
   
   TH1F *st_stack_84 = new TH1F("st_stack_84","",20,-0.5,19.5);
   st_stack_84->SetMinimum(0.1397158);
   st_stack_84->SetMaximum(7.148601e+12);
   st_stack_84->SetDirectory(0);
   st_stack_84->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_84->SetLineColor(ci);
   st_stack_84->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_84->GetXaxis()->SetLabelFont(42);
   st_stack_84->GetXaxis()->SetTitleOffset(1);
   st_stack_84->GetXaxis()->SetTitleFont(42);
   st_stack_84->GetYaxis()->SetTitle("Event/1.0");
   st_stack_84->GetYaxis()->SetLabelFont(42);
   st_stack_84->GetYaxis()->SetTitleSize(0.037);
   st_stack_84->GetYaxis()->SetTitleFont(42);
   st_stack_84->GetZaxis()->SetLabelFont(42);
   st_stack_84->GetZaxis()->SetTitleOffset(1);
   st_stack_84->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_84);
   
   
   TH1D *GenJet_cuts_nGenL_stack_1 = new TH1D("GenJet_cuts_nGenL_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenL_stack_1->SetBinContent(1,1.713361e+12);
   GenJet_cuts_nGenL_stack_1->SetBinContent(2,3.036152e+11);
   GenJet_cuts_nGenL_stack_1->SetBinContent(3,2.75708e+10);
   GenJet_cuts_nGenL_stack_1->SetBinContent(4,6.021579e+08);
   GenJet_cuts_nGenL_stack_1->SetBinContent(5,2.140468e+07);
   GenJet_cuts_nGenL_stack_1->SetBinContent(6,731603.2);
   GenJet_cuts_nGenL_stack_1->SetBinContent(7,27661.8);
   GenJet_cuts_nGenL_stack_1->SetBinContent(8,1082.821);
   GenJet_cuts_nGenL_stack_1->SetBinContent(9,122.3538);
   GenJet_cuts_nGenL_stack_1->SetBinContent(11,0.2845264);
   GenJet_cuts_nGenL_stack_1->SetBinError(1,2.233417e+08);
   GenJet_cuts_nGenL_stack_1->SetBinError(2,9.042814e+07);
   GenJet_cuts_nGenL_stack_1->SetBinError(3,2.541041e+07);
   GenJet_cuts_nGenL_stack_1->SetBinError(4,2104202);
   GenJet_cuts_nGenL_stack_1->SetBinError(5,199031.5);
   GenJet_cuts_nGenL_stack_1->SetBinError(6,16683.05);
   GenJet_cuts_nGenL_stack_1->SetBinError(7,2451.01);
   GenJet_cuts_nGenL_stack_1->SetBinError(8,150.3935);
   GenJet_cuts_nGenL_stack_1->SetBinError(9,57.23932);
   GenJet_cuts_nGenL_stack_1->SetBinError(11,0.2845264);
   GenJet_cuts_nGenL_stack_1->SetEntries(3.062923e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_cuts_nGenL_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenL_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenL_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenL_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenL_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenL_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenL_stack_1,"");
   
   TH1D *GenJet_cuts_nGenL_stack_2 = new TH1D("GenJet_cuts_nGenL_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenL_stack_2->SetBinContent(1,1.373234e+07);
   GenJet_cuts_nGenL_stack_2->SetBinContent(2,2.262991e+07);
   GenJet_cuts_nGenL_stack_2->SetBinContent(3,1.320905e+07);
   GenJet_cuts_nGenL_stack_2->SetBinContent(4,3534314);
   GenJet_cuts_nGenL_stack_2->SetBinContent(5,550939.5);
   GenJet_cuts_nGenL_stack_2->SetBinContent(6,56746.39);
   GenJet_cuts_nGenL_stack_2->SetBinContent(7,5062.26);
   GenJet_cuts_nGenL_stack_2->SetBinContent(8,388.8945);
   GenJet_cuts_nGenL_stack_2->SetBinContent(9,26.94292);
   GenJet_cuts_nGenL_stack_2->SetBinContent(10,1.934286);
   GenJet_cuts_nGenL_stack_2->SetBinContent(11,0.1460255);
   GenJet_cuts_nGenL_stack_2->SetBinError(1,999.9773);
   GenJet_cuts_nGenL_stack_2->SetBinError(2,1313.564);
   GenJet_cuts_nGenL_stack_2->SetBinError(3,1030.384);
   GenJet_cuts_nGenL_stack_2->SetBinError(4,546.7975);
   GenJet_cuts_nGenL_stack_2->SetBinError(5,219.8193);
   GenJet_cuts_nGenL_stack_2->SetBinError(6,70.69342);
   GenJet_cuts_nGenL_stack_2->SetBinError(7,20.92172);
   GenJet_cuts_nGenL_stack_2->SetBinError(8,5.751684);
   GenJet_cuts_nGenL_stack_2->SetBinError(9,1.4571);
   GenJet_cuts_nGenL_stack_2->SetBinError(10,0.3773064);
   GenJet_cuts_nGenL_stack_2->SetBinError(11,0.103635);
   GenJet_cuts_nGenL_stack_2->SetEntries(8.938066e+08);

   ci = TColor::GetColor("#990099");
   GenJet_cuts_nGenL_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenL_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenL_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenL_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenL_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenL_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenL_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_cuts_nGenL_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_cuts_nGenL_bckg_18->Modified();
   GenJet_cuts_nGenL_bckg_18->cd();
   GenJet_cuts_nGenL_bckg_18->SetSelected(GenJet_cuts_nGenL_bckg_18);
}
