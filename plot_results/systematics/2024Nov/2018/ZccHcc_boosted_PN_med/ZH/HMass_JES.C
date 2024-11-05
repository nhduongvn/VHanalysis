#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HMass_JES()
{
//=========Macro generated from canvas: c1_n14/
//=========  (Mon Nov  4 10:38:00 2024) by ROOT version 6.30/03
   TCanvas *c1_n14 = new TCanvas("c1_n14", "",0,0,600,600);
   gStyle->SetOptStat(0);
   c1_n14->SetHighLightColor(2);
   c1_n14->Range(0,0,1,1);
   c1_n14->SetFillColor(0);
   c1_n14->SetBorderMode(0);
   c1_n14->SetBorderSize(2);
   c1_n14->SetLeftMargin(0.15);
   c1_n14->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_v1
   TPad *pad1_v1__28 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__28->Draw();
   pad1_v1__28->cd();
   pad1_v1__28->Range(-37.5,-4.493846,337.5,40.44461);
   pad1_v1__28->SetFillColor(0);
   pad1_v1__28->SetBorderMode(0);
   pad1_v1__28->SetBorderSize(2);
   pad1_v1__28->SetFrameBorderMode(0);
   pad1_v1__28->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_HMass__71 = new TH1D("ZccHcc_boosted_PN_med_HMass__71","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__71->SetBinContent(10,0.9864676);
   ZccHcc_boosted_PN_med_HMass__71->SetBinContent(11,4.758973);
   ZccHcc_boosted_PN_med_HMass__71->SetBinContent(12,17.35637);
   ZccHcc_boosted_PN_med_HMass__71->SetBinContent(13,21.72478);
   ZccHcc_boosted_PN_med_HMass__71->SetBinContent(14,33.19232);
   ZccHcc_boosted_PN_med_HMass__71->SetBinContent(15,9.582921);
   ZccHcc_boosted_PN_med_HMass__71->SetBinContent(16,2.325127);
   ZccHcc_boosted_PN_med_HMass__71->SetBinContent(17,0.8668301);
   ZccHcc_boosted_PN_med_HMass__71->SetBinError(10,0.9864676);
   ZccHcc_boosted_PN_med_HMass__71->SetBinError(11,2.180875);
   ZccHcc_boosted_PN_med_HMass__71->SetBinError(12,4.386821);
   ZccHcc_boosted_PN_med_HMass__71->SetBinError(13,5.387079);
   ZccHcc_boosted_PN_med_HMass__71->SetBinError(14,6.045841);
   ZccHcc_boosted_PN_med_HMass__71->SetBinError(15,3.272466);
   ZccHcc_boosted_PN_med_HMass__71->SetBinError(16,2.246237);
   ZccHcc_boosted_PN_med_HMass__71->SetBinError(17,0.8668301);
   ZccHcc_boosted_PN_med_HMass__71->SetMaximum(35.95077);
   ZccHcc_boosted_PN_med_HMass__71->SetEntries(96);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_HMass__71->SetFillColor(ci);
   ZccHcc_boosted_PN_med_HMass__71->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__71->GetXaxis()->SetTitle("M_{H} [GeV]");
   ZccHcc_boosted_PN_med_HMass__71->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_HMass__71->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__71->GetXaxis()->SetTitleOffset(1.15);
   ZccHcc_boosted_PN_med_HMass__71->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__71->GetYaxis()->SetTitle("Events/10.0 GeV");
   ZccHcc_boosted_PN_med_HMass__71->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__71->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__71->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__71->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__71->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__71->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__72 = new TH1D("ZccHcc_boosted_PN_med_HMass__72","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__72->SetBinContent(10,0.9811953);
   ZccHcc_boosted_PN_med_HMass__72->SetBinContent(11,4.708301);
   ZccHcc_boosted_PN_med_HMass__72->SetBinContent(12,16.38594);
   ZccHcc_boosted_PN_med_HMass__72->SetBinContent(13,24.07225);
   ZccHcc_boosted_PN_med_HMass__72->SetBinContent(14,33.95077);
   ZccHcc_boosted_PN_med_HMass__72->SetBinContent(15,9.576457);
   ZccHcc_boosted_PN_med_HMass__72->SetBinContent(16,2.325127);
   ZccHcc_boosted_PN_med_HMass__72->SetBinContent(17,0.8668301);
   ZccHcc_boosted_PN_med_HMass__72->SetBinError(10,0.9811953);
   ZccHcc_boosted_PN_med_HMass__72->SetBinError(11,2.158192);
   ZccHcc_boosted_PN_med_HMass__72->SetBinError(12,4.492875);
   ZccHcc_boosted_PN_med_HMass__72->SetBinError(13,5.624169);
   ZccHcc_boosted_PN_med_HMass__72->SetBinError(14,6.091591);
   ZccHcc_boosted_PN_med_HMass__72->SetBinError(15,3.270703);
   ZccHcc_boosted_PN_med_HMass__72->SetBinError(16,2.246237);
   ZccHcc_boosted_PN_med_HMass__72->SetBinError(17,0.8668301);
   ZccHcc_boosted_PN_med_HMass__72->SetEntries(100);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_HMass__72->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__72->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__72->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__72->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__72->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__72->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__72->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__72->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__72->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__72->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__72->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__72->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__73 = new TH1D("ZccHcc_boosted_PN_med_HMass__73","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__73->SetBinContent(10,0.9864676);
   ZccHcc_boosted_PN_med_HMass__73->SetBinContent(11,4.758973);
   ZccHcc_boosted_PN_med_HMass__73->SetBinContent(12,16.58088);
   ZccHcc_boosted_PN_med_HMass__73->SetBinContent(13,20.45193);
   ZccHcc_boosted_PN_med_HMass__73->SetBinContent(14,32.28578);
   ZccHcc_boosted_PN_med_HMass__73->SetBinContent(15,8.008134);
   ZccHcc_boosted_PN_med_HMass__73->SetBinContent(16,2.325127);
   ZccHcc_boosted_PN_med_HMass__73->SetBinContent(17,0.8668301);
   ZccHcc_boosted_PN_med_HMass__73->SetBinError(10,0.9864676);
   ZccHcc_boosted_PN_med_HMass__73->SetBinError(11,2.180875);
   ZccHcc_boosted_PN_med_HMass__73->SetBinError(12,4.317731);
   ZccHcc_boosted_PN_med_HMass__73->SetBinError(13,5.227387);
   ZccHcc_boosted_PN_med_HMass__73->SetBinError(14,5.979347);
   ZccHcc_boosted_PN_med_HMass__73->SetBinError(15,2.867684);
   ZccHcc_boosted_PN_med_HMass__73->SetBinError(16,2.246237);
   ZccHcc_boosted_PN_med_HMass__73->SetBinError(17,0.8668301);
   ZccHcc_boosted_PN_med_HMass__73->SetEntries(92);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_HMass__73->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__73->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__73->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__73->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__73->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__73->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__73->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__73->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__73->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__73->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__73->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__73->Draw("same hist");
   
   TLegend *leg = new TLegend(0.53,0.7,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","Nominal","F");

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
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","JES Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","JES Down","F");
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
   pad1_v1__28->Modified();
   c1_n14->cd();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__29 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__29->Draw();
   pad1_v2__29->cd();
   pad1_v2__29->Range(-37.5,0.75,337.5,1.25);
   pad1_v2__29->SetFillColor(0);
   pad1_v2__29->SetBorderMode(0);
   pad1_v2__29->SetBorderSize(2);
   pad1_v2__29->SetFrameBorderMode(0);
   pad1_v2__29->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_HMass__74 = new TH1D("ZccHcc_boosted_PN_med_HMass__74","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__74->SetBinContent(10,0.9946553);
   ZccHcc_boosted_PN_med_HMass__74->SetBinContent(11,0.9893524);
   ZccHcc_boosted_PN_med_HMass__74->SetBinContent(12,0.944088);
   ZccHcc_boosted_PN_med_HMass__74->SetBinContent(13,1.108055);
   ZccHcc_boosted_PN_med_HMass__74->SetBinContent(14,1.02285);
   ZccHcc_boosted_PN_med_HMass__74->SetBinContent(15,0.9993255);
   ZccHcc_boosted_PN_med_HMass__74->SetBinContent(16,1);
   ZccHcc_boosted_PN_med_HMass__74->SetBinContent(17,1);
   ZccHcc_boosted_PN_med_HMass__74->SetBinError(10,1.406655);
   ZccHcc_boosted_PN_med_HMass__74->SetBinError(11,0.6412652);
   ZccHcc_boosted_PN_med_HMass__74->SetBinError(12,0.3520615);
   ZccHcc_boosted_PN_med_HMass__74->SetBinError(13,0.377512);
   ZccHcc_boosted_PN_med_HMass__74->SetBinError(14,0.2615181);
   ZccHcc_boosted_PN_med_HMass__74->SetBinError(15,0.482646);
   ZccHcc_boosted_PN_med_HMass__74->SetBinError(16,1.36623);
   ZccHcc_boosted_PN_med_HMass__74->SetBinError(17,1.414214);
   ZccHcc_boosted_PN_med_HMass__74->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_HMass__74->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_HMass__74->SetEntries(9.515519);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_HMass__74->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__74->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__74->GetXaxis()->SetTitle("M_{H} [GeV]");
   ZccHcc_boosted_PN_med_HMass__74->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_HMass__74->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__74->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_HMass__74->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_HMass__74->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__74->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__74->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_HMass__74->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_HMass__74->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__74->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_HMass__74->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_HMass__74->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_HMass__74->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__74->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__74->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__74->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__74->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__75 = new TH1D("ZccHcc_boosted_PN_med_HMass__75","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__75->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_HMass__75->SetBinContent(11,1);
   ZccHcc_boosted_PN_med_HMass__75->SetBinContent(12,0.9553194);
   ZccHcc_boosted_PN_med_HMass__75->SetBinContent(13,0.9414102);
   ZccHcc_boosted_PN_med_HMass__75->SetBinContent(14,0.9726883);
   ZccHcc_boosted_PN_med_HMass__75->SetBinContent(15,0.8356674);
   ZccHcc_boosted_PN_med_HMass__75->SetBinContent(16,1);
   ZccHcc_boosted_PN_med_HMass__75->SetBinContent(17,1);
   ZccHcc_boosted_PN_med_HMass__75->SetBinError(10,1.414214);
   ZccHcc_boosted_PN_med_HMass__75->SetBinError(11,0.6480857);
   ZccHcc_boosted_PN_med_HMass__75->SetBinError(12,0.3466808);
   ZccHcc_boosted_PN_med_HMass__75->SetBinError(13,0.3352492);
   ZccHcc_boosted_PN_med_HMass__75->SetBinError(14,0.2526676);
   ZccHcc_boosted_PN_med_HMass__75->SetBinError(15,0.413506);
   ZccHcc_boosted_PN_med_HMass__75->SetBinError(16,1.36623);
   ZccHcc_boosted_PN_med_HMass__75->SetBinError(17,1.414214);
   ZccHcc_boosted_PN_med_HMass__75->SetEntries(8.79009);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_HMass__75->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__75->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__75->GetXaxis()->SetTitle("M_{H} [GeV]");
   ZccHcc_boosted_PN_med_HMass__75->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__75->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__75->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_HMass__75->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__75->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__75->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__75->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__75->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__75->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__75->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__75->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__29->Modified();
   c1_n14->cd();
   c1_n14->Modified();
   c1_n14->SetSelected(c1_n14);
}
