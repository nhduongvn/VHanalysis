#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_all_signal_17_logY()
{
//=========Macro generated from canvas: CvB_jets_all_signal_17/CvB_jets_all_signal_17
//=========  (Fri Mar 10 14:09:17 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_all_signal_17 = new TCanvas("CvB_jets_all_signal_17", "CvB_jets_all_signal_17",0,0,600,600);
   CvB_jets_all_signal_17->SetHighLightColor(2);
   CvB_jets_all_signal_17->Range(-0.2183529,0.3204894,1.171633,3.468245);
   CvB_jets_all_signal_17->SetFillColor(0);
   CvB_jets_all_signal_17->SetFillStyle(4000);
   CvB_jets_all_signal_17->SetBorderMode(0);
   CvB_jets_all_signal_17->SetBorderSize(2);
   CvB_jets_all_signal_17->SetLogy();
   CvB_jets_all_signal_17->SetLeftMargin(0.15709);
   CvB_jets_all_signal_17->SetRightMargin(0.1234783);
   CvB_jets_all_signal_17->SetBottomMargin(0.12);
   CvB_jets_all_signal_17->SetFrameFillStyle(1000);
   CvB_jets_all_signal_17->SetFrameBorderMode(0);
   CvB_jets_all_signal_17->SetFrameFillStyle(1000);
   CvB_jets_all_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1016.044);
   
   TH1F *st_stack_177 = new TH1F("st_stack_177","",20,0,1);
   st_stack_177->SetMinimum(4.991374);
   st_stack_177->SetMaximum(1423.867);
   st_stack_177->SetDirectory(0);
   st_stack_177->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_177->SetLineColor(ci);
   st_stack_177->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_177->GetXaxis()->SetRange(1,20);
   st_stack_177->GetXaxis()->SetLabelFont(42);
   st_stack_177->GetXaxis()->SetTitleOffset(1);
   st_stack_177->GetXaxis()->SetTitleFont(42);
   st_stack_177->GetYaxis()->SetTitle("Event/0.05");
   st_stack_177->GetYaxis()->SetLabelFont(42);
   st_stack_177->GetYaxis()->SetTitleSize(0.037);
   st_stack_177->GetYaxis()->SetTitleFont(42);
   st_stack_177->GetZaxis()->SetLabelFont(42);
   st_stack_177->GetZaxis()->SetTitleOffset(1);
   st_stack_177->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_177);
   
   
   TH1D *VbbHcc_jets_all_CvB_stack_1 = new TH1D("VbbHcc_jets_all_CvB_stack_1","",20,0,1);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(1,120.857);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(2,31.32797);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(3,27.44077);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(4,30.04692);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(5,36.64131);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(6,44.54455);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(7,56.40068);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(8,71.24712);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(9,96.52793);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(10,148.5563);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(11,257.764);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(12,692.0409);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(13,740.3699);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(14,513.7404);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(15,469.8724);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(16,501.2297);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(17,571.5209);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(18,629.9968);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(19,514.4354);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(20,90.5257);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(1,0.4831609);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(2,0.2458);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(3,0.2306847);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(4,0.2412168);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(5,0.2659529);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(6,0.2922809);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(7,0.3300925);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(8,0.3708121);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(9,0.4318188);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(10,0.5351082);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(11,0.7054633);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(12,1.15735);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(13,1.196158);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(14,0.997815);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(15,0.9534652);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(16,0.9801899);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(17,1.045356);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(18,1.096835);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(19,0.9933875);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(20,0.417332);
   VbbHcc_jets_all_CvB_stack_1->SetEntries(3443220);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CvB_stack_1->SetFillColor(ci);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvB_stack_2 = new TH1D("VbbHcc_jets_all_CvB_stack_2","",20,0,1);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(1,22.40583);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(2,5.002718);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(3,4.19019);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(4,4.62006);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(5,5.383879);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(6,6.50751);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(7,7.969695);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(8,10.15382);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(9,13.86898);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(10,21.13323);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(11,36.22198);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(12,96.80147);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(13,102.947);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(14,71.00015);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(15,66.40273);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(16,76.67328);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(17,93.77262);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(18,115.4678);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(19,97.61633);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(20,20.46405);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(1,0.07343175);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(2,0.03467454);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(3,0.03172221);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(4,0.03333131);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(5,0.03595567);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(6,0.0394978);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(7,0.04371229);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(8,0.04934313);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(9,0.0576502);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(10,0.07108668);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(11,0.09310799);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(12,0.1521162);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(13,0.1567896);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(14,0.1302427);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(15,0.1259903);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(16,0.1354337);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(17,0.1498802);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(18,0.1664759);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(19,0.1533285);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(20,0.07025535);
   VbbHcc_jets_all_CvB_stack_2->SetEntries(3859299);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CvB_stack_2->SetFillColor(ci);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   CvB_jets_all_signal_17->Modified();
   CvB_jets_all_signal_17->cd();
   CvB_jets_all_signal_17->SetSelected(CvB_jets_all_signal_17);
}
