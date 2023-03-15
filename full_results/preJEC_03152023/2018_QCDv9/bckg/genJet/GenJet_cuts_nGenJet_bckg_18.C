#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenJet_bckg_18()
{
//=========Macro generated from canvas: GenJet_cuts_nGenJet_bckg_18/GenJet_cuts_nGenJet_bckg_18
//=========  (Thu Mar  9 15:52:37 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenJet_bckg_18 = new TCanvas("GenJet_cuts_nGenJet_bckg_18", "GenJet_cuts_nGenJet_bckg_18",0,0,600,600);
   GenJet_cuts_nGenJet_bckg_18->SetHighLightColor(2);
   GenJet_cuts_nGenJet_bckg_18->Range(-4.867058,-1.703635e+11,22.93266,1.249333e+12);
   GenJet_cuts_nGenJet_bckg_18->SetFillColor(0);
   GenJet_cuts_nGenJet_bckg_18->SetFillStyle(4000);
   GenJet_cuts_nGenJet_bckg_18->SetBorderMode(0);
   GenJet_cuts_nGenJet_bckg_18->SetBorderSize(2);
   GenJet_cuts_nGenJet_bckg_18->SetLeftMargin(0.15709);
   GenJet_cuts_nGenJet_bckg_18->SetRightMargin(0.1234783);
   GenJet_cuts_nGenJet_bckg_18->SetBottomMargin(0.12);
   GenJet_cuts_nGenJet_bckg_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenJet_bckg_18->SetFrameBorderMode(0);
   GenJet_cuts_nGenJet_bckg_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenJet_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.107363e+12);
   
   TH1F *st_stack_78 = new TH1F("st_stack_78","",20,-0.5,19.5);
   st_stack_78->SetMinimum(0);
   st_stack_78->SetMaximum(1.107363e+12);
   st_stack_78->SetDirectory(0);
   st_stack_78->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_78->SetLineColor(ci);
   st_stack_78->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_78->GetXaxis()->SetLabelFont(42);
   st_stack_78->GetXaxis()->SetTitleOffset(1);
   st_stack_78->GetXaxis()->SetTitleFont(42);
   st_stack_78->GetYaxis()->SetTitle("Event/1.0");
   st_stack_78->GetYaxis()->SetLabelFont(42);
   st_stack_78->GetYaxis()->SetTitleSize(0.037);
   st_stack_78->GetYaxis()->SetTitleFont(42);
   st_stack_78->GetZaxis()->SetLabelFont(42);
   st_stack_78->GetZaxis()->SetTitleOffset(1);
   st_stack_78->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_78);
   
   
   TH1D *GenJet_cuts_nGenJet_stack_1 = new TH1D("GenJet_cuts_nGenJet_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(1,9.191103e+11);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(2,7.354528e+11);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(3,3.619065e+11);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(4,2.47413e+10);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(5,3.453688e+09);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(6,4.162065e+08);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(7,5.777455e+07);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(8,8283463);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(9,1218399);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(10,177790.3);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(11,27330.7);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(12,3863.088);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(13,514.7793);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(14,72.17392);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(15,13.99041);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(16,0.5988845);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(17,0.6545781);
   GenJet_cuts_nGenJet_stack_1->SetBinError(1,1.658203e+08);
   GenJet_cuts_nGenJet_stack_1->SetBinError(2,1.45542e+08);
   GenJet_cuts_nGenJet_stack_1->SetBinError(3,9.389121e+07);
   GenJet_cuts_nGenJet_stack_1->SetBinError(4,1.191581e+07);
   GenJet_cuts_nGenJet_stack_1->SetBinError(5,2444546);
   GenJet_cuts_nGenJet_stack_1->SetBinError(6,509511.6);
   GenJet_cuts_nGenJet_stack_1->SetBinError(7,130226.7);
   GenJet_cuts_nGenJet_stack_1->SetBinError(8,32483.69);
   GenJet_cuts_nGenJet_stack_1->SetBinError(9,8569.406);
   GenJet_cuts_nGenJet_stack_1->SetBinError(10,2339.081);
   GenJet_cuts_nGenJet_stack_1->SetBinError(11,885.6032);
   GenJet_cuts_nGenJet_stack_1->SetBinError(12,506.5566);
   GenJet_cuts_nGenJet_stack_1->SetBinError(13,53.76127);
   GenJet_cuts_nGenJet_stack_1->SetBinError(14,15.04314);
   GenJet_cuts_nGenJet_stack_1->SetBinError(15,8.288253);
   GenJet_cuts_nGenJet_stack_1->SetBinError(16,0.4237868);
   GenJet_cuts_nGenJet_stack_1->SetBinError(17,0.6545781);
   GenJet_cuts_nGenJet_stack_1->SetEntries(3.050092e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_cuts_nGenJet_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenJet_stack_1,"");
   
   TH1D *GenJet_cuts_nGenJet_stack_2 = new TH1D("GenJet_cuts_nGenJet_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(1,953277.5);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(2,4932230);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(3,1.239868e+07);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(4,1.583838e+07);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(5,1.16053e+07);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(6,5391048);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(7,1884632);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(8,540504.5);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(9,135688.3);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(10,30793.46);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(11,6474.362);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(12,1273.345);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(13,233.3449);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(14,44.77881);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(15,7.871043);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(16,1.400237);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(17,0.1498078);
   GenJet_cuts_nGenJet_stack_2->SetBinError(1,256.3743);
   GenJet_cuts_nGenJet_stack_2->SetBinError(2,589.9806);
   GenJet_cuts_nGenJet_stack_2->SetBinError(3,958.2498);
   GenJet_cuts_nGenJet_stack_2->SetBinError(4,1110.149);
   GenJet_cuts_nGenJet_stack_2->SetBinError(5,973.6018);
   GenJet_cuts_nGenJet_stack_2->SetBinError(6,673.4814);
   GenJet_cuts_nGenJet_stack_2->SetBinError(7,403.4595);
   GenJet_cuts_nGenJet_stack_2->SetBinError(8,216.9866);
   GenJet_cuts_nGenJet_stack_2->SetBinError(9,109.4693);
   GenJet_cuts_nGenJet_stack_2->SetBinError(10,52.24548);
   GenJet_cuts_nGenJet_stack_2->SetBinError(11,23.84295);
   GenJet_cuts_nGenJet_stack_2->SetBinError(12,10.79085);
   GenJet_cuts_nGenJet_stack_2->SetBinError(13,4.461339);
   GenJet_cuts_nGenJet_stack_2->SetBinError(14,1.879101);
   GenJet_cuts_nGenJet_stack_2->SetBinError(15,0.865371);
   GenJet_cuts_nGenJet_stack_2->SetBinError(16,0.3523057);
   GenJet_cuts_nGenJet_stack_2->SetBinError(17,0.1059325);
   GenJet_cuts_nGenJet_stack_2->SetEntries(8.848938e+08);

   ci = TColor::GetColor("#990099");
   GenJet_cuts_nGenJet_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenJet_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_cuts_nGenJet_stack_1","QCD","F");

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
   GenJet_cuts_nGenJet_bckg_18->Modified();
   GenJet_cuts_nGenJet_bckg_18->cd();
   GenJet_cuts_nGenJet_bckg_18->SetSelected(GenJet_cuts_nGenJet_bckg_18);
}
