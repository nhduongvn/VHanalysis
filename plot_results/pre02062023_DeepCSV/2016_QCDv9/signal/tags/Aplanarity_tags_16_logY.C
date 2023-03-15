#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_16_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Wed Jan 18 11:42:13 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2183529,0.5009879,1.171633,2.734811);
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
   st->SetMinimum(10);
   st->SetMaximum(253.4843);
   
   TH1F *st_stack_61 = new TH1F("st_stack_61","",50,0,1);
   st_stack_61->SetMinimum(5.875525);
   st_stack_61->SetMaximum(324.6602);
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
   st_stack_61->GetYaxis()->SetTitle("Events/0.02");
   st_stack_61->GetYaxis()->SetLabelFont(42);
   st_stack_61->GetYaxis()->SetTitleSize(0.037);
   st_stack_61->GetYaxis()->SetTitleFont(42);
   st_stack_61->GetZaxis()->SetLabelFont(42);
   st_stack_61->GetZaxis()->SetTitleOffset(1);
   st_stack_61->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_61);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,1.713184);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,1.219786);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,0.8897687);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,0.7279591);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,0.4666955);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,0.3799374);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,0.2426543);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,0.1825866);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,0.1251826);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,0.1005168);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,0.09451206);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,0.03827688);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,0.04148822);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,0.01969498);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,0.01181524);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,0.006886843);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,0.008505292);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,0.002017336);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(19,0.003195014);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(20,0.002731203);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,0.05142792);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,0.04381448);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,0.03727149);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,0.03369118);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,0.02708795);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,0.02431137);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,0.01990708);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,0.01696025);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,0.01380543);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,0.01264475);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,0.01223446);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,0.007649067);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,0.008040626);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,0.00546867);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,0.004325378);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,0.003240908);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,0.003595089);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,0.001580844);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(19,0.001974178);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(20,0.001987462);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(4581);

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
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,0.8216587);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,0.5100228);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,0.3297914);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,0.2138146);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,0.1388944);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,0.1002298);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,0.06892508);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.05202646);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.03629976);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.02135515);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.01092659);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.01046806);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.005659391);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.005874253);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,0.002574587);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,0.0007910406);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,0.0005990854);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,0.0004057697);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,0.0003711445);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,0.0001892188);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(22,8.976682e-05);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,0.01243988);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,0.009833755);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,0.007910504);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,0.006368439);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.005137947);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.004386653);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.003616356);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.003144163);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.002632622);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.002017979);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.001450904);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.001429044);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.001046698);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.00105709);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,0.0007062655);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,0.0003859543);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.0003462943);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,0.0002872149);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,0.0002602752);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,0.0001892188);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(22,8.976682e-05);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(13340);

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
