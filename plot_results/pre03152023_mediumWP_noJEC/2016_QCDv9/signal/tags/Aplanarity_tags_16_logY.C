#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_16_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Thu Mar  9 13:08:25 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2183529,-0.1212954,1.171633,0.3787219);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetFillStyle(4000);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLogy();
   Aplanarity_tags_16->SetLeftMargin(0.15709);
   Aplanarity_tags_16->SetRightMargin(0.1234783);
   Aplanarity_tags_16->SetBottomMargin(0.12);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(2.009813);
   
   TH1F *st_stack_61 = new TH1F("st_stack_61","",50,0,1);
   st_stack_61->SetMinimum(0.8683737);
   st_stack_61->SetMaximum(2.131671);
   st_stack_61->SetDirectory(0);
   st_stack_61->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_61->SetLineColor(ci);
   st_stack_61->GetXaxis()->SetTitle("Aplanarity");
   st_stack_61->GetXaxis()->SetRange(1,50);
   st_stack_61->GetXaxis()->SetLabelFont(42);
   st_stack_61->GetXaxis()->SetTitleOffset(1);
   st_stack_61->GetXaxis()->SetTitleFont(42);
   st_stack_61->GetYaxis()->SetTitle("Event/0.02");
   st_stack_61->GetYaxis()->SetLabelFont(42);
   st_stack_61->GetYaxis()->SetTitleSize(0.037);
   st_stack_61->GetYaxis()->SetTitleFont(42);
   st_stack_61->GetZaxis()->SetLabelFont(42);
   st_stack_61->GetZaxis()->SetTitleOffset(1);
   st_stack_61->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_61);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,1.193172);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,0.7902301);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,0.5640969);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,0.3599148);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,0.2520934);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,0.1766032);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,0.128744);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,0.1135155);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,0.06886314);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,0.05539706);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,0.04372532);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,0.02372064);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,0.03254081);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,0.02066234);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,0.005805087);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,0.05928114);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,0.04817004);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,0.04084829);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,0.03237363);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,0.02790558);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,0.02323828);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,0.01964192);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,0.01846606);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,0.01554993);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,0.01314737);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,0.011142);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,0.008394402);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,0.009818711);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,0.007831931);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,0.004105049);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(1354);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,0.474973);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,0.3524124);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,0.2447313);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,0.1755238);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,0.1154193);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,0.07858563);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,0.06530434);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.03844743);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.02511595);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.0179857);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.01088616);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.007007641);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.004902448);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.002856552);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,0.0008146911);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,0.001578453);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,0.000375111);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,0.0004216175);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,0.0007826774);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,0.01337473);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,0.01160064);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,0.009656409);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,0.008228275);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.006667777);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.005497997);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.005011104);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.003861822);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.003123934);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.002636674);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.002055665);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.001653951);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.001312357);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.001028448);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,0.0005770855);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,0.000790365);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.000375111);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,0.0004216175);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,0.0005534366);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(4322);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
