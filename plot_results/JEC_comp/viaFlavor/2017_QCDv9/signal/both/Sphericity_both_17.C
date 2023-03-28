#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_17()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Mon Mar 27 11:09:53 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2183529,-0.1406909,1.171633,1.031734);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetFillStyle(4000);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLeftMargin(0.15709);
   Sphericity_both_17->SetRightMargin(0.1234783);
   Sphericity_both_17->SetBottomMargin(0.12);
   Sphericity_both_17->SetFrameFillStyle(1000);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameFillStyle(1000);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.9144911);
   
   TH1F *st_stack_250 = new TH1F("st_stack_250","",25,0,1);
   st_stack_250->SetMinimum(0);
   st_stack_250->SetMaximum(0.9144911);
   st_stack_250->SetDirectory(0);
   st_stack_250->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_250->SetLineColor(ci);
   st_stack_250->GetXaxis()->SetTitle("Sphericity");
   st_stack_250->GetXaxis()->SetRange(1,25);
   st_stack_250->GetXaxis()->SetLabelFont(42);
   st_stack_250->GetXaxis()->SetTitleOffset(1);
   st_stack_250->GetXaxis()->SetTitleFont(42);
   st_stack_250->GetYaxis()->SetTitle("Event/0.04");
   st_stack_250->GetYaxis()->SetLabelFont(42);
   st_stack_250->GetYaxis()->SetTitleSize(0.037);
   st_stack_250->GetYaxis()->SetTitleFont(42);
   st_stack_250->GetZaxis()->SetLabelFont(42);
   st_stack_250->GetZaxis()->SetTitleOffset(1);
   st_stack_250->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_250);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,0.08938347);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,0.3644816);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,0.5068189);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,0.5465351);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,0.4938959);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,0.2776491);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,0.1759804);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,0.09639828);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,0.1012408);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,0.0654353);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,0.07815365);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,0.0308021);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,0.03709031);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,0.02469291);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,0.01842273);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,0.01784736);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,0.008813569);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,0.003977345);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,0.005767475);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,0.01277077);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,0.02591265);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,0.03133237);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,0.03232386);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,0.03058022);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,0.02284091);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,0.01790001);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,0.0133338);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,0.01393795);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,0.01132788);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,0.01212728);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,0.007464559);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,0.00818828);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,0.006687604);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,0.00587888);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,0.005756451);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,0.003958521);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,0.002848689);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,0.00333192);
   VbbHcc_both_Sphericity_stack_1->SetEntries(1719);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,0.06136763);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,0.1790115);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,0.2164135);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,0.2124925);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,0.1515583);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,0.1085135);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,0.06848092);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,0.05366563);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,0.03763147);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,0.03193976);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,0.0230354);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,0.01791287);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,0.01742731);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,0.01038684);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,0.01311713);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,0.007057336);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,0.003712662);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,0.00438525);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,0.002844582);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,0.0005543254);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,0.0003860433);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,0.003781763);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,0.006534707);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,0.007175824);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,0.007139747);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,0.00601003);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,0.00514421);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,0.004067124);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,0.00355627);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,0.003008845);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,0.002797548);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,0.002363443);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,0.002098559);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,0.002067744);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,0.001577641);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,0.001775986);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,0.001326345);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,0.0009450161);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,0.001043278);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.000834709);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.0003937382);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.000278031);
   VbbHcc_both_Sphericity_stack_2->SetEntries(5340);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_1","ZHcc","F");

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
   Sphericity_both_17->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->SetSelected(Sphericity_both_17);
}
