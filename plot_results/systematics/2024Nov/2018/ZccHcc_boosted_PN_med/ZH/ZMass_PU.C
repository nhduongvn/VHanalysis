#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZMass_PU()
{
//=========Macro generated from canvas: c1_n23/
//=========  (Mon Nov  4 10:38:00 2024) by ROOT version 6.30/03
   TCanvas *c1_n23 = new TCanvas("c1_n23", "",0,0,600,600);
   gStyle->SetOptStat(0);
   c1_n23->SetHighLightColor(2);
   c1_n23->Range(0,0,1,1);
   c1_n23->SetFillColor(0);
   c1_n23->SetBorderMode(0);
   c1_n23->SetBorderSize(2);
   c1_n23->SetLeftMargin(0.15);
   c1_n23->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_v1
   TPad *pad1_v1__46 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__46->Draw();
   pad1_v1__46->cd();
   pad1_v1__46->Range(-37.5,-4.669678,337.5,42.0271);
   pad1_v1__46->SetFillColor(0);
   pad1_v1__46->SetBorderMode(0);
   pad1_v1__46->SetBorderSize(2);
   pad1_v1__46->SetFrameBorderMode(0);
   pad1_v1__46->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__116 = new TH1D("ZccHcc_boosted_PN_med_ZMass__116","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__116->SetBinContent(5,0.9436521);
   ZccHcc_boosted_PN_med_ZMass__116->SetBinContent(8,6.738756);
   ZccHcc_boosted_PN_med_ZMass__116->SetBinContent(9,26.78804);
   ZccHcc_boosted_PN_med_ZMass__116->SetBinContent(10,33.10754);
   ZccHcc_boosted_PN_med_ZMass__116->SetBinContent(11,19.9232);
   ZccHcc_boosted_PN_med_ZMass__116->SetBinContent(12,2.127059);
   ZccHcc_boosted_PN_med_ZMass__116->SetBinContent(13,1.165541);
   ZccHcc_boosted_PN_med_ZMass__116->SetBinError(5,0.9436521);
   ZccHcc_boosted_PN_med_ZMass__116->SetBinError(8,2.592089);
   ZccHcc_boosted_PN_med_ZMass__116->SetBinError(9,5.353004);
   ZccHcc_boosted_PN_med_ZMass__116->SetBinError(10,6.57414);
   ZccHcc_boosted_PN_med_ZMass__116->SetBinError(11,4.893043);
   ZccHcc_boosted_PN_med_ZMass__116->SetBinError(12,1.506193);
   ZccHcc_boosted_PN_med_ZMass__116->SetBinError(13,1.165541);
   ZccHcc_boosted_PN_med_ZMass__116->SetMaximum(37.35742);
   ZccHcc_boosted_PN_med_ZMass__116->SetEntries(96);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_ZMass__116->SetFillColor(ci);
   ZccHcc_boosted_PN_med_ZMass__116->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__116->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__116->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_ZMass__116->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__116->GetXaxis()->SetTitleOffset(1.15);
   ZccHcc_boosted_PN_med_ZMass__116->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__116->GetYaxis()->SetTitle("Events/10.0 GeV");
   ZccHcc_boosted_PN_med_ZMass__116->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__116->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__116->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__116->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__116->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__116->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__117 = new TH1D("ZccHcc_boosted_PN_med_ZMass__117","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__117->SetBinContent(5,0.9844263);
   ZccHcc_boosted_PN_med_ZMass__117->SetBinContent(8,6.446087);
   ZccHcc_boosted_PN_med_ZMass__117->SetBinContent(9,25.25424);
   ZccHcc_boosted_PN_med_ZMass__117->SetBinContent(10,31.21789);
   ZccHcc_boosted_PN_med_ZMass__117->SetBinContent(11,17.90707);
   ZccHcc_boosted_PN_med_ZMass__117->SetBinContent(12,1.967846);
   ZccHcc_boosted_PN_med_ZMass__117->SetBinContent(13,1.020858);
   ZccHcc_boosted_PN_med_ZMass__117->SetBinError(5,0.9844263);
   ZccHcc_boosted_PN_med_ZMass__117->SetBinError(8,2.447199);
   ZccHcc_boosted_PN_med_ZMass__117->SetBinError(9,4.975313);
   ZccHcc_boosted_PN_med_ZMass__117->SetBinError(10,6.039908);
   ZccHcc_boosted_PN_med_ZMass__117->SetBinError(11,4.416881);
   ZccHcc_boosted_PN_med_ZMass__117->SetBinError(12,1.393223);
   ZccHcc_boosted_PN_med_ZMass__117->SetBinError(13,1.020858);
   ZccHcc_boosted_PN_med_ZMass__117->SetEntries(96);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__117->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__117->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__117->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__117->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__117->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__117->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__117->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__117->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__117->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__117->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__117->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__117->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__118 = new TH1D("ZccHcc_boosted_PN_med_ZMass__118","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__118->SetBinContent(5,0.8433014);
   ZccHcc_boosted_PN_med_ZMass__118->SetBinContent(8,6.981958);
   ZccHcc_boosted_PN_med_ZMass__118->SetBinContent(9,28.21806);
   ZccHcc_boosted_PN_med_ZMass__118->SetBinContent(10,35.35742);
   ZccHcc_boosted_PN_med_ZMass__118->SetBinContent(11,22.10254);
   ZccHcc_boosted_PN_med_ZMass__118->SetBinContent(12,2.295738);
   ZccHcc_boosted_PN_med_ZMass__118->SetBinContent(13,1.309238);
   ZccHcc_boosted_PN_med_ZMass__118->SetBinError(5,0.8433014);
   ZccHcc_boosted_PN_med_ZMass__118->SetBinError(8,2.765156);
   ZccHcc_boosted_PN_med_ZMass__118->SetBinError(9,5.806009);
   ZccHcc_boosted_PN_med_ZMass__118->SetBinError(10,7.290907);
   ZccHcc_boosted_PN_med_ZMass__118->SetBinError(11,5.469906);
   ZccHcc_boosted_PN_med_ZMass__118->SetBinError(12,1.626171);
   ZccHcc_boosted_PN_med_ZMass__118->SetBinError(13,1.309238);
   ZccHcc_boosted_PN_med_ZMass__118->SetEntries(96);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__118->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__118->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__118->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__118->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__118->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__118->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__118->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__118->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__118->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__118->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__118->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__118->Draw("same hist");
   
   TLegend *leg = new TLegend(0.53,0.7,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ZccHcc_boosted_PN_med_ZMass","Nominal","F");

   ci = TColor::GetColor("#cccccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_ZMass","PU Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_ZMass","PU Down","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   pad1_v1__46->Modified();
   c1_n23->cd();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__47 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__47->Draw();
   pad1_v2__47->cd();
   pad1_v2__47->Range(-37.5,0.75,337.5,1.25);
   pad1_v2__47->SetFillColor(0);
   pad1_v2__47->SetBorderMode(0);
   pad1_v2__47->SetBorderSize(2);
   pad1_v2__47->SetFrameBorderMode(0);
   pad1_v2__47->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__119 = new TH1D("ZccHcc_boosted_PN_med_ZMass__119","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__119->SetBinContent(5,1.043209);
   ZccHcc_boosted_PN_med_ZMass__119->SetBinContent(8,0.9565694);
   ZccHcc_boosted_PN_med_ZMass__119->SetBinContent(9,0.9427431);
   ZccHcc_boosted_PN_med_ZMass__119->SetBinContent(10,0.9429239);
   ZccHcc_boosted_PN_med_ZMass__119->SetBinContent(11,0.8988053);
   ZccHcc_boosted_PN_med_ZMass__119->SetBinContent(12,0.9251485);
   ZccHcc_boosted_PN_med_ZMass__119->SetBinContent(13,0.8758663);
   ZccHcc_boosted_PN_med_ZMass__119->SetBinError(5,1.47532);
   ZccHcc_boosted_PN_med_ZMass__119->SetBinError(8,0.5169777);
   ZccHcc_boosted_PN_med_ZMass__119->SetBinError(9,0.2645463);
   ZccHcc_boosted_PN_med_ZMass__119->SetBinError(10,0.2614173);
   ZccHcc_boosted_PN_med_ZMass__119->SetBinError(11,0.3128514);
   ZccHcc_boosted_PN_med_ZMass__119->SetBinError(12,0.9263853);
   ZccHcc_boosted_PN_med_ZMass__119->SetBinError(13,1.238662);
   ZccHcc_boosted_PN_med_ZMass__119->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_ZMass__119->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_ZMass__119->SetEntries(8.549166);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__119->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__119->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__119->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__119->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_ZMass__119->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__119->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_ZMass__119->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_ZMass__119->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__119->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__119->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_ZMass__119->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_ZMass__119->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__119->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_ZMass__119->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_ZMass__119->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_ZMass__119->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__119->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__119->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__119->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__119->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__120 = new TH1D("ZccHcc_boosted_PN_med_ZMass__120","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__120->SetBinContent(5,0.8936571);
   ZccHcc_boosted_PN_med_ZMass__120->SetBinContent(8,1.03609);
   ZccHcc_boosted_PN_med_ZMass__120->SetBinContent(9,1.053383);
   ZccHcc_boosted_PN_med_ZMass__120->SetBinContent(10,1.067957);
   ZccHcc_boosted_PN_med_ZMass__120->SetBinContent(11,1.109387);
   ZccHcc_boosted_PN_med_ZMass__120->SetBinContent(12,1.079301);
   ZccHcc_boosted_PN_med_ZMass__120->SetBinContent(13,1.123288);
   ZccHcc_boosted_PN_med_ZMass__120->SetBinError(5,1.263822);
   ZccHcc_boosted_PN_med_ZMass__120->SetBinError(8,0.57202);
   ZccHcc_boosted_PN_med_ZMass__120->SetBinError(9,0.3021326);
   ZccHcc_boosted_PN_med_ZMass__120->SetBinError(10,0.3057241);
   ZccHcc_boosted_PN_med_ZMass__120->SetBinError(11,0.3867973);
   ZccHcc_boosted_PN_med_ZMass__120->SetBinError(12,1.081011);
   ZccHcc_boosted_PN_med_ZMass__120->SetBinError(13,1.58857);
   ZccHcc_boosted_PN_med_ZMass__120->SetEntries(9.110255);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__120->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__120->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__120->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__120->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__120->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__120->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_ZMass__120->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__120->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__120->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__120->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__120->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__120->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__120->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__120->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__47->Modified();
   c1_n23->cd();
   c1_n23->Modified();
   c1_n23->SetSelected(c1_n23);
}
