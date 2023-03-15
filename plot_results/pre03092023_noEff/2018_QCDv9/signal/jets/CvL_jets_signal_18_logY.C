#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_signal_18_logY()
{
//=========Macro generated from canvas: CvL_jets_signal_18/CvL_jets_signal_18
//=========  (Wed Mar  1 14:06:39 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_signal_18 = new TCanvas("CvL_jets_signal_18", "CvL_jets_signal_18",0,0,600,600);
   CvL_jets_signal_18->SetHighLightColor(2);
   CvL_jets_signal_18->Range(-0.2183529,-0.1803185,1.171633,5.741258);
   CvL_jets_signal_18->SetFillColor(0);
   CvL_jets_signal_18->SetFillStyle(4000);
   CvL_jets_signal_18->SetBorderMode(0);
   CvL_jets_signal_18->SetBorderSize(2);
   CvL_jets_signal_18->SetLogy();
   CvL_jets_signal_18->SetLeftMargin(0.15709);
   CvL_jets_signal_18->SetRightMargin(0.1234783);
   CvL_jets_signal_18->SetBottomMargin(0.12);
   CvL_jets_signal_18->SetFrameFillStyle(1000);
   CvL_jets_signal_18->SetFrameBorderMode(0);
   CvL_jets_signal_18->SetFrameFillStyle(1000);
   CvL_jets_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(79202.97);
   
   TH1F *st_stack_17 = new TH1F("st_stack_17","",20,0,1);
   st_stack_17->SetMinimum(3.390554);
   st_stack_17->SetMaximum(140961.4);
   st_stack_17->SetDirectory(0);
   st_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_17->SetLineColor(ci);
   st_stack_17->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_17->GetXaxis()->SetRange(1,20);
   st_stack_17->GetXaxis()->SetLabelFont(42);
   st_stack_17->GetXaxis()->SetTitleOffset(1);
   st_stack_17->GetXaxis()->SetTitleFont(42);
   st_stack_17->GetYaxis()->SetTitle("Events/0.05");
   st_stack_17->GetYaxis()->SetLabelFont(42);
   st_stack_17->GetYaxis()->SetTitleSize(0.037);
   st_stack_17->GetYaxis()->SetTitleFont(42);
   st_stack_17->GetZaxis()->SetLabelFont(42);
   st_stack_17->GetZaxis()->SetTitleOffset(1);
   st_stack_17->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_17);
   
   
   TH1D *VbbHcc_jets_CvL_stack_1 = new TH1D("VbbHcc_jets_CvL_stack_1","",20,0,1);
   VbbHcc_jets_CvL_stack_1->SetBinContent(1,487.6719);
   VbbHcc_jets_CvL_stack_1->SetBinContent(2,652.9569);
   VbbHcc_jets_CvL_stack_1->SetBinContent(3,257.4374);
   VbbHcc_jets_CvL_stack_1->SetBinContent(4,133.1069);
   VbbHcc_jets_CvL_stack_1->SetBinContent(5,84.22183);
   VbbHcc_jets_CvL_stack_1->SetBinContent(6,63.60269);
   VbbHcc_jets_CvL_stack_1->SetBinContent(7,50.61515);
   VbbHcc_jets_CvL_stack_1->SetBinContent(8,43.52928);
   VbbHcc_jets_CvL_stack_1->SetBinContent(9,38.95532);
   VbbHcc_jets_CvL_stack_1->SetBinContent(10,37.06314);
   VbbHcc_jets_CvL_stack_1->SetBinContent(11,36.70645);
   VbbHcc_jets_CvL_stack_1->SetBinContent(12,34.69496);
   VbbHcc_jets_CvL_stack_1->SetBinContent(13,35.15169);
   VbbHcc_jets_CvL_stack_1->SetBinContent(14,36.24614);
   VbbHcc_jets_CvL_stack_1->SetBinContent(15,39.20763);
   VbbHcc_jets_CvL_stack_1->SetBinContent(16,43.20519);
   VbbHcc_jets_CvL_stack_1->SetBinContent(17,48.66005);
   VbbHcc_jets_CvL_stack_1->SetBinContent(18,59.8325);
   VbbHcc_jets_CvL_stack_1->SetBinContent(19,77.7997);
   VbbHcc_jets_CvL_stack_1->SetBinContent(20,273.0551);
   VbbHcc_jets_CvL_stack_1->SetBinError(1,1.278563);
   VbbHcc_jets_CvL_stack_1->SetBinError(2,1.458715);
   VbbHcc_jets_CvL_stack_1->SetBinError(3,0.9084355);
   VbbHcc_jets_CvL_stack_1->SetBinError(4,0.647388);
   VbbHcc_jets_CvL_stack_1->SetBinError(5,0.5078134);
   VbbHcc_jets_CvL_stack_1->SetBinError(6,0.4363919);
   VbbHcc_jets_CvL_stack_1->SetBinError(7,0.4117557);
   VbbHcc_jets_CvL_stack_1->SetBinError(8,0.3607797);
   VbbHcc_jets_CvL_stack_1->SetBinError(9,0.3401276);
   VbbHcc_jets_CvL_stack_1->SetBinError(10,0.3324526);
   VbbHcc_jets_CvL_stack_1->SetBinError(11,0.3419049);
   VbbHcc_jets_CvL_stack_1->SetBinError(12,0.3290405);
   VbbHcc_jets_CvL_stack_1->SetBinError(13,0.3411006);
   VbbHcc_jets_CvL_stack_1->SetBinError(14,0.3421581);
   VbbHcc_jets_CvL_stack_1->SetBinError(15,0.3532427);
   VbbHcc_jets_CvL_stack_1->SetBinError(16,0.4052366);
   VbbHcc_jets_CvL_stack_1->SetBinError(17,0.400974);
   VbbHcc_jets_CvL_stack_1->SetBinError(18,0.4326502);
   VbbHcc_jets_CvL_stack_1->SetBinError(19,0.5063913);
   VbbHcc_jets_CvL_stack_1->SetBinError(20,0.9459164);
   VbbHcc_jets_CvL_stack_1->SetEntries(1022565);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_CvL_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvL_stack_1->SetLineColor(ci);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_CvL_stack_2 = new TH1D("VbbHcc_jets_CvL_stack_2","",20,0,1);
   VbbHcc_jets_CvL_stack_2->SetBinContent(1,112.2649);
   VbbHcc_jets_CvL_stack_2->SetBinContent(2,139.0728);
   VbbHcc_jets_CvL_stack_2->SetBinContent(3,52.1323);
   VbbHcc_jets_CvL_stack_2->SetBinContent(4,26.41845);
   VbbHcc_jets_CvL_stack_2->SetBinContent(5,16.54897);
   VbbHcc_jets_CvL_stack_2->SetBinContent(6,12.15689);
   VbbHcc_jets_CvL_stack_2->SetBinContent(7,9.851796);
   VbbHcc_jets_CvL_stack_2->SetBinContent(8,8.416124);
   VbbHcc_jets_CvL_stack_2->SetBinContent(9,7.545993);
   VbbHcc_jets_CvL_stack_2->SetBinContent(10,7.258554);
   VbbHcc_jets_CvL_stack_2->SetBinContent(11,7.038885);
   VbbHcc_jets_CvL_stack_2->SetBinContent(12,6.904702);
   VbbHcc_jets_CvL_stack_2->SetBinContent(13,6.979516);
   VbbHcc_jets_CvL_stack_2->SetBinContent(14,7.132605);
   VbbHcc_jets_CvL_stack_2->SetBinContent(15,7.886543);
   VbbHcc_jets_CvL_stack_2->SetBinContent(16,8.761423);
   VbbHcc_jets_CvL_stack_2->SetBinContent(17,9.950038);
   VbbHcc_jets_CvL_stack_2->SetBinContent(18,12.54231);
   VbbHcc_jets_CvL_stack_2->SetBinContent(19,16.40004);
   VbbHcc_jets_CvL_stack_2->SetBinContent(20,56.11832);
   VbbHcc_jets_CvL_stack_2->SetBinError(1,0.2128534);
   VbbHcc_jets_CvL_stack_2->SetBinError(2,0.2346345);
   VbbHcc_jets_CvL_stack_2->SetBinError(3,0.1436263);
   VbbHcc_jets_CvL_stack_2->SetBinError(4,0.1016152);
   VbbHcc_jets_CvL_stack_2->SetBinError(5,0.0800343);
   VbbHcc_jets_CvL_stack_2->SetBinError(6,0.06835716);
   VbbHcc_jets_CvL_stack_2->SetBinError(7,0.06141608);
   VbbHcc_jets_CvL_stack_2->SetBinError(8,0.05860332);
   VbbHcc_jets_CvL_stack_2->SetBinError(9,0.05563109);
   VbbHcc_jets_CvL_stack_2->SetBinError(10,0.0547376);
   VbbHcc_jets_CvL_stack_2->SetBinError(11,0.05176606);
   VbbHcc_jets_CvL_stack_2->SetBinError(12,0.05154934);
   VbbHcc_jets_CvL_stack_2->SetBinError(13,0.05373534);
   VbbHcc_jets_CvL_stack_2->SetBinError(14,0.05183791);
   VbbHcc_jets_CvL_stack_2->SetBinError(15,0.05906662);
   VbbHcc_jets_CvL_stack_2->SetBinError(16,0.05992004);
   VbbHcc_jets_CvL_stack_2->SetBinError(17,0.0629607);
   VbbHcc_jets_CvL_stack_2->SetBinError(18,0.07195899);
   VbbHcc_jets_CvL_stack_2->SetBinError(19,0.08075339);
   VbbHcc_jets_CvL_stack_2->SetBinError(20,0.1520099);
   VbbHcc_jets_CvL_stack_2->SetEntries(1558638);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_CvL_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvL_stack_2->SetLineColor(ci);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvL_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
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
   entry=leg->AddEntry("VbbHcc_jets_CvL_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_signal_18->Modified();
   CvL_jets_signal_18->cd();
   CvL_jets_signal_18->SetSelected(CvL_jets_signal_18);
}
