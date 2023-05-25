#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu May 25 11:52:39 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2183529,-0.3203109,1.171633,2.348947);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetFillStyle(4000);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15709);
   Sphericity_tags_16->SetRightMargin(0.1234783);
   Sphericity_tags_16->SetBottomMargin(0.12);
   Sphericity_tags_16->SetFrameFillStyle(1000);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameFillStyle(1000);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.082021);
   
   TH1F *st_stack_15 = new TH1F("st_stack_15","",25,0,1);
   st_stack_15->SetMinimum(0);
   st_stack_15->SetMaximum(2.082021);
   st_stack_15->SetDirectory(0);
   st_stack_15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_15->SetLineColor(ci);
   st_stack_15->GetXaxis()->SetTitle("Sphericity");
   st_stack_15->GetXaxis()->SetRange(1,25);
   st_stack_15->GetXaxis()->SetLabelFont(42);
   st_stack_15->GetXaxis()->SetTitleOffset(1);
   st_stack_15->GetXaxis()->SetTitleFont(42);
   st_stack_15->GetYaxis()->SetTitle("Event/0.04");
   st_stack_15->GetYaxis()->SetLabelFont(42);
   st_stack_15->GetYaxis()->SetTitleSize(0.037);
   st_stack_15->GetYaxis()->SetTitleFont(42);
   st_stack_15->GetZaxis()->SetLabelFont(42);
   st_stack_15->GetZaxis()->SetTitleOffset(1);
   st_stack_15->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_15);
   
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,1.198635);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,1.110613);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,0.6477259);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,0.3625375);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,0.2433993);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,0.1333369);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,0.06159417);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,0.0325685);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,0.01172788);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,0.003079495);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,0.005435766);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,0.00978354);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,0.005632244);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,0.005871947);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,0.05948967);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,0.05759132);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,0.04380347);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,0.03294207);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,0.02709957);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,0.01967315);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,0.01409426);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,0.009613426);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,0.0058807);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,0.003079495);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,0.00385005);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,0.004960371);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,0.003983456);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,0.004153001);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(1355);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,0.5294426);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,0.4674582);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,0.2562243);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,0.1619802);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,0.08204238);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,0.05470315);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,0.01880711);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,0.01307016);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,0.008272397);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,0.005596954);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,0.004639152);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,0.004438009);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,0.003413571);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,0.002382015);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,0.002647067);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,0.001552042);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,0.001078717);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.0006122942);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.0003663933);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(20,0.0001783629);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,0.01419262);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,0.01339005);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,0.009863709);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,0.007856237);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,0.00561322);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,0.004586494);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,0.002657805);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,0.002201424);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,0.001775993);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,0.001450561);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.001293753);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.001306955);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.001138085);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.0009747284);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.001010553);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.000777696);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.0006306067);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.0004438888);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.0003663933);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(20,0.0001783629);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(4324);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
