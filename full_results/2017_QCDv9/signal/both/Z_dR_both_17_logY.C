#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_17_logY()
{
//=========Macro generated from canvas: Z_dR_both_17/Z_dR_both_17
//=========  (Thu Feb 16 10:37:20 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_17 = new TCanvas("Z_dR_both_17", "Z_dR_both_17",0,0,600,600);
   Z_dR_both_17->SetHighLightColor(2);
   Z_dR_both_17->Range(-1.310117,0.5957996,7.029799,2.37064);
   Z_dR_both_17->SetFillColor(0);
   Z_dR_both_17->SetFillStyle(4000);
   Z_dR_both_17->SetBorderMode(0);
   Z_dR_both_17->SetBorderSize(2);
   Z_dR_both_17->SetLogy();
   Z_dR_both_17->SetLeftMargin(0.15709);
   Z_dR_both_17->SetRightMargin(0.1234783);
   Z_dR_both_17->SetBottomMargin(0.12);
   Z_dR_both_17->SetFrameFillStyle(1000);
   Z_dR_both_17->SetFrameBorderMode(0);
   Z_dR_both_17->SetFrameFillStyle(1000);
   Z_dR_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(127.7451);
   
   TH1F *st_stack_146 = new TH1F("st_stack_146","",30,0,6);
   st_stack_146->SetMinimum(6.438436);
   st_stack_146->SetMaximum(156.0111);
   st_stack_146->SetDirectory(0);
   st_stack_146->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_146->SetLineColor(ci);
   st_stack_146->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_146->GetXaxis()->SetRange(1,30);
   st_stack_146->GetXaxis()->SetLabelFont(42);
   st_stack_146->GetXaxis()->SetTitleOffset(1);
   st_stack_146->GetXaxis()->SetTitleFont(42);
   st_stack_146->GetYaxis()->SetTitle("Events/0.2");
   st_stack_146->GetYaxis()->SetLabelFont(42);
   st_stack_146->GetYaxis()->SetTitleSize(0.037);
   st_stack_146->GetYaxis()->SetTitleFont(42);
   st_stack_146->GetZaxis()->SetLabelFont(42);
   st_stack_146->GetZaxis()->SetTitleOffset(1);
   st_stack_146->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_146);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,0.5110459);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,0.8121663);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,0.8508115);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,0.7774871);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,0.4871352);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,0.3502378);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,0.2779985);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,0.230248);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,0.2003922);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,0.2432155);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,0.2286493);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,0.2674667);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,0.3422833);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,0.3116598);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,0.1221322);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,0.04529159);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,0.02921026);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,0.01640699);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,0.005625221);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,0.005578777);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,0.001027905);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,0.03106872);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,0.03896683);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,0.04036384);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,0.03845807);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,0.03043827);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,0.02593459);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,0.02261305);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,0.02094341);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,0.01923752);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,0.02155834);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,0.02081985);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,0.02238572);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,0.0257494);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,0.02387975);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,0.0153357);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,0.009116415);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,0.007211908);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,0.005591565);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,0.003254303);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,0.003223819);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,0.001027905);
   VbbHcc_both_Z_dR_stack_1->SetEntries(3542);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,0.0001524791);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,0.1877985);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,0.3803424);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,0.4266394);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,0.3537648);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,0.2315816);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,0.1278338);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,0.08886507);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,0.07636923);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,0.07226961);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,0.08975863);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,0.09676681);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,0.1083073);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,0.1201153);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,0.1219359);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,0.0548049);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,0.02525916);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,0.01440909);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,0.009443261);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,0.005083706);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,0.004497096);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,0.002712847);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,0.0005415839);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,0.0001721789);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,0.0001839373);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,0.0001524791);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,0.00666901);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,0.009549332);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,0.0101682);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,0.009256983);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,0.007461428);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,0.00554424);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,0.004666205);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,0.004295736);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,0.004152344);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,0.004668242);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,0.004833039);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,0.005125567);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,0.005350294);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,0.005378283);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,0.003641868);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,0.002476508);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,0.001893367);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,0.00150514);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,0.001104548);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,0.001036093);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,0.0008006188);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,0.0003235527);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,0.0001721789);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,0.0001839373);
   VbbHcc_both_Z_dR_stack_2->SetEntries(11286);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_17->Modified();
   Z_dR_both_17->cd();
   Z_dR_both_17->SetSelected(Z_dR_both_17);
}
